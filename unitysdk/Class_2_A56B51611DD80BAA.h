#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/BattleScreenEffectType.h"

class Class_0_16E4307DCC419505_1056;
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class ShowBattleScreenEffect; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_A56B51611DD80BAA_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x17A14210)
#define CLASS_2_A56B51611DD80BAA_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x17A142E0)
#define CLASS_2_A56B51611DD80BAA_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x17A13D80)
#define CLASS_2_A56B51611DD80BAA_METHOD_2_6E55788E120B3DE1_OFFSET UNITYSDK_OFFSET(0x17A13F30)
#define CLASS_2_A56B51611DD80BAA_METHOD_2_789EA0E50C2A8C62_OFFSET UNITYSDK_OFFSET(0x17A13EA0)
#define CLASS_2_A56B51611DD80BAA_METHOD_2_8518C8FCC2801265_OFFSET UNITYSDK_OFFSET(0x17A14010)
#define CLASS_2_A56B51611DD80BAA_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x17A14150)
#define CLASS_2_A56B51611DD80BAA__CTOR_OFFSET UNITYSDK_OFFSET(0x17A14380)

inline static constexpr unsigned int Class_2_A56B51611DD80BAA_TypeDefinitionIndex = 68590;

class Class_2_A56B51611DD80BAA : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::RPG::GameCore::BattleInstance* Field_2_0; // 0x60
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BattleScreenEffectType, ::Class_0_16E4307DCC419505_1056*>* Field_2_1; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A56B51611DD80BAA__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A56B51611DD80BAA_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_789EA0E50C2A8C62(::RPG::GameCore::ShowBattleScreenEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ShowBattleScreenEffect*))((::PBYTE)hIl2Cpp + CLASS_2_A56B51611DD80BAA_METHOD_2_789EA0E50C2A8C62_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_1056* Method_2_6E55788E120B3DE1(::RPG::GameCore::BattleScreenEffectType a1)
	{
		return ((::Class_0_16E4307DCC419505_1056*(*)(::PVOID, ::RPG::GameCore::BattleScreenEffectType))((::PBYTE)hIl2Cpp + CLASS_2_A56B51611DD80BAA_METHOD_2_6E55788E120B3DE1_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_1056* Method_2_8518C8FCC2801265(::RPG::GameCore::BattleScreenEffectType a1)
	{
		return ((::Class_0_16E4307DCC419505_1056*(*)(::PVOID, ::RPG::GameCore::BattleScreenEffectType))((::PBYTE)hIl2Cpp + CLASS_2_A56B51611DD80BAA_METHOD_2_8518C8FCC2801265_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A56B51611DD80BAA_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A56B51611DD80BAA_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A56B51611DD80BAA_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
