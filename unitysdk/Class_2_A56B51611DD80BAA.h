#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/BattleScreenEffectType.h"

class Class_0_16E4307DCC419505_1014;
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class ShowBattleScreenEffect; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_A56B51611DD80BAA_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA630B70)
#define CLASS_2_A56B51611DD80BAA_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xA630C40)
#define CLASS_2_A56B51611DD80BAA_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xA630700)
#define CLASS_2_A56B51611DD80BAA_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xA630D80)
#define CLASS_2_A56B51611DD80BAA_METHOD_2_6E55788E120B3DE1_OFFSET UNITYSDK_OFFSET(0xA6308B0)
#define CLASS_2_A56B51611DD80BAA_METHOD_2_789EA0E50C2A8C62_OFFSET UNITYSDK_OFFSET(0xA630820)
#define CLASS_2_A56B51611DD80BAA_METHOD_2_8518C8FCC2801265_OFFSET UNITYSDK_OFFSET(0xA630990)
#define CLASS_2_A56B51611DD80BAA_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xA630AD0)
#define CLASS_2_A56B51611DD80BAA__CTOR_OFFSET UNITYSDK_OFFSET(0xA630CE0)
#define CLASS_2_A56B51611DD80BAA___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA630DE0)
#define CLASS_2_A56B51611DD80BAA___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xA630E40)

inline static constexpr unsigned int Class_2_A56B51611DD80BAA_TypeDefinitionIndex = 67146;

class Class_2_A56B51611DD80BAA : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::RPG::GameCore::BattleInstance* Field_2_0; // 0x60
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BattleScreenEffectType, ::Class_0_16E4307DCC419505_1014*>* Field_2_1; // 0x68

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

	::Class_0_16E4307DCC419505_1014* Method_2_6E55788E120B3DE1(::RPG::GameCore::BattleScreenEffectType a1)
	{
		return ((::Class_0_16E4307DCC419505_1014*(*)(::PVOID, ::RPG::GameCore::BattleScreenEffectType))((::PBYTE)hIl2Cpp + CLASS_2_A56B51611DD80BAA_METHOD_2_6E55788E120B3DE1_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_1014* Method_2_8518C8FCC2801265(::RPG::GameCore::BattleScreenEffectType a1)
	{
		return ((::Class_0_16E4307DCC419505_1014*(*)(::PVOID, ::RPG::GameCore::BattleScreenEffectType))((::PBYTE)hIl2Cpp + CLASS_2_A56B51611DD80BAA_METHOD_2_8518C8FCC2801265_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A56B51611DD80BAA_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A56B51611DD80BAA_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A56B51611DD80BAA_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A56B51611DD80BAA_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A56B51611DD80BAA___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A56B51611DD80BAA___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
