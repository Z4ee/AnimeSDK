#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0F1B992870941C13_3.h"
#include "unitysdk/System/Object.h"

class Class_1_49AFAF7E1EDC93F8;
namespace RPG::Client { class IRogueTournPersonaStyleModifierBattlePassive; }

#define CLASS_1_A6A3D9630A714AFC_GET_BATTLEPASSIVE_OFFSET UNITYSDK_OFFSET(0x10ADCF50)
#define CLASS_1_A6A3D9630A714AFC_GET_MODIFIERID_OFFSET UNITYSDK_OFFSET(0x10ADCF10)
#define CLASS_1_A6A3D9630A714AFC_GET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0x10ADCF30)
#define CLASS_1_A6A3D9630A714AFC_METHOD_1_98FE8344617B99D4_OFFSET UNITYSDK_OFFSET(0x10ADCD50)
#define CLASS_1_A6A3D9630A714AFC_METHOD_1_DAF13E2DDF8F15E7_OFFSET UNITYSDK_OFFSET(0x10ADCDF0)
#define CLASS_1_A6A3D9630A714AFC_SET_BATTLEPASSIVE_OFFSET UNITYSDK_OFFSET(0x10ADCF60)
#define CLASS_1_A6A3D9630A714AFC_SET_MODIFIERID_OFFSET UNITYSDK_OFFSET(0x10ADCF20)
#define CLASS_1_A6A3D9630A714AFC_SET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0x10ADCF40)
#define CLASS_1_A6A3D9630A714AFC_UPDATE_OFFSET UNITYSDK_OFFSET(0x10ADCEC0)
#define CLASS_1_A6A3D9630A714AFC__CTOR_OFFSET UNITYSDK_OFFSET(0x10ADCDE0)

inline static constexpr unsigned int Class_1_A6A3D9630A714AFC_TypeDefinitionIndex = 55211;

class Class_1_A6A3D9630A714AFC : public ::System::Object
{
public:
	::RPG::Client::IRogueTournPersonaStyleModifierBattlePassive* _BattlePassive_k__BackingField; // 0x10
	::Enum_3_0F1B992870941C13_3 _SourceType_k__BackingField; // 0x18
	::System::UInt64 _ModifierID_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6A3D9630A714AFC__CTOR_OFFSET))(this);
	}

	static ::Class_1_A6A3D9630A714AFC* Method_1_98FE8344617B99D4(::Class_1_49AFAF7E1EDC93F8* a1)
	{
		return ((::Class_1_A6A3D9630A714AFC*(*)(::Class_1_49AFAF7E1EDC93F8*))((::PBYTE)hIl2Cpp + CLASS_1_A6A3D9630A714AFC_METHOD_1_98FE8344617B99D4_OFFSET))(a1);
	}

	::System::Void Update(::Class_1_49AFAF7E1EDC93F8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_49AFAF7E1EDC93F8*))((::PBYTE)hIl2Cpp + CLASS_1_A6A3D9630A714AFC_UPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_1_DAF13E2DDF8F15E7(::Class_1_49AFAF7E1EDC93F8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_49AFAF7E1EDC93F8*))((::PBYTE)hIl2Cpp + CLASS_1_A6A3D9630A714AFC_METHOD_1_DAF13E2DDF8F15E7_OFFSET))(this, a1);
	}

	::System::UInt64 get_ModifierID()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6A3D9630A714AFC_GET_MODIFIERID_OFFSET))(this);
	}

	::System::Void set_ModifierID(::System::UInt64 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_A6A3D9630A714AFC_SET_MODIFIERID_OFFSET))(this, value);
	}

	::Enum_3_0F1B992870941C13_3 get_SourceType()
	{
		return ((::Enum_3_0F1B992870941C13_3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6A3D9630A714AFC_GET_SOURCETYPE_OFFSET))(this);
	}

	::System::Void set_SourceType(::Enum_3_0F1B992870941C13_3 value)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0F1B992870941C13_3))((::PBYTE)hIl2Cpp + CLASS_1_A6A3D9630A714AFC_SET_SOURCETYPE_OFFSET))(this, value);
	}

	::RPG::Client::IRogueTournPersonaStyleModifierBattlePassive* get_BattlePassive()
	{
		return ((::RPG::Client::IRogueTournPersonaStyleModifierBattlePassive*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6A3D9630A714AFC_GET_BATTLEPASSIVE_OFFSET))(this);
	}

	::System::Void set_BattlePassive(::RPG::Client::IRogueTournPersonaStyleModifierBattlePassive* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournPersonaStyleModifierBattlePassive*))((::PBYTE)hIl2Cpp + CLASS_1_A6A3D9630A714AFC_SET_BATTLEPASSIVE_OFFSET))(this, value);
	}
};
