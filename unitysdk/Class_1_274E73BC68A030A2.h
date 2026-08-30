#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0F1B992870941C13_4.h"
#include "unitysdk/System/Object.h"

class Class_1_BB4B99DE4C2501EC_7;
namespace RPG::Client { class IRogueTournPersonaStyleModifierBattlePassive; }

#define CLASS_1_274E73BC68A030A2_GET_BATTLEPASSIVE_OFFSET UNITYSDK_OFFSET(0x19CB2930)
#define CLASS_1_274E73BC68A030A2_GET_MODIFIERID_OFFSET UNITYSDK_OFFSET(0x19CB28F0)
#define CLASS_1_274E73BC68A030A2_GET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0x19CB2910)
#define CLASS_1_274E73BC68A030A2_METHOD_1_98FE8344617B99D4_OFFSET UNITYSDK_OFFSET(0x19CB2720)
#define CLASS_1_274E73BC68A030A2_METHOD_1_DAF13E2DDF8F15E7_OFFSET UNITYSDK_OFFSET(0x19CB27C0)
#define CLASS_1_274E73BC68A030A2_SET_BATTLEPASSIVE_OFFSET UNITYSDK_OFFSET(0x19CB2940)
#define CLASS_1_274E73BC68A030A2_SET_MODIFIERID_OFFSET UNITYSDK_OFFSET(0x19CB2900)
#define CLASS_1_274E73BC68A030A2_SET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0x19CB2920)
#define CLASS_1_274E73BC68A030A2_UPDATE_OFFSET UNITYSDK_OFFSET(0x19CB28A0)
#define CLASS_1_274E73BC68A030A2__CTOR_OFFSET UNITYSDK_OFFSET(0x19CB27B0)

inline static constexpr unsigned int Class_1_274E73BC68A030A2_TypeDefinitionIndex = 67701;

class Class_1_274E73BC68A030A2 : public ::System::Object
{
public:
	::RPG::Client::IRogueTournPersonaStyleModifierBattlePassive* _BattlePassive_k__BackingField; // 0x10
	::Enum_3_0F1B992870941C13_4 _SourceType_k__BackingField; // 0x18
	::System::UInt64 _ModifierID_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_274E73BC68A030A2__CTOR_OFFSET))(this);
	}

	static ::Class_1_274E73BC68A030A2* Method_1_98FE8344617B99D4(::Class_1_BB4B99DE4C2501EC_7* a1)
	{
		return ((::Class_1_274E73BC68A030A2*(*)(::Class_1_BB4B99DE4C2501EC_7*))((::PBYTE)hIl2Cpp + CLASS_1_274E73BC68A030A2_METHOD_1_98FE8344617B99D4_OFFSET))(a1);
	}

	::System::Void Update(::Class_1_BB4B99DE4C2501EC_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_7*))((::PBYTE)hIl2Cpp + CLASS_1_274E73BC68A030A2_UPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_1_DAF13E2DDF8F15E7(::Class_1_BB4B99DE4C2501EC_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_7*))((::PBYTE)hIl2Cpp + CLASS_1_274E73BC68A030A2_METHOD_1_DAF13E2DDF8F15E7_OFFSET))(this, a1);
	}

	::System::UInt64 get_ModifierID()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_274E73BC68A030A2_GET_MODIFIERID_OFFSET))(this);
	}

	::System::Void set_ModifierID(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_274E73BC68A030A2_SET_MODIFIERID_OFFSET))(this, a1);
	}

	::Enum_3_0F1B992870941C13_4 get_SourceType()
	{
		return ((::Enum_3_0F1B992870941C13_4(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_274E73BC68A030A2_GET_SOURCETYPE_OFFSET))(this);
	}

	::System::Void set_SourceType(::Enum_3_0F1B992870941C13_4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0F1B992870941C13_4))((::PBYTE)hIl2Cpp + CLASS_1_274E73BC68A030A2_SET_SOURCETYPE_OFFSET))(this, a1);
	}

	::RPG::Client::IRogueTournPersonaStyleModifierBattlePassive* get_BattlePassive()
	{
		return ((::RPG::Client::IRogueTournPersonaStyleModifierBattlePassive*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_274E73BC68A030A2_GET_BATTLEPASSIVE_OFFSET))(this);
	}

	::System::Void set_BattlePassive(::RPG::Client::IRogueTournPersonaStyleModifierBattlePassive* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournPersonaStyleModifierBattlePassive*))((::PBYTE)hIl2Cpp + CLASS_1_274E73BC68A030A2_SET_BATTLEPASSIVE_OFFSET))(this, a1);
	}
};
