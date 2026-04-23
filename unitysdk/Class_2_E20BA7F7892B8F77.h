#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/BattleScreenEffectType.h"

class Class_0_16E4307DCC419505_964;
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class ShowBattleScreenEffect; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_E20BA7F7892B8F77_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x11AE5A30)
#define CLASS_2_E20BA7F7892B8F77_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x11AE5AD0)
#define CLASS_2_E20BA7F7892B8F77_METHOD_2_05E90691EFA05C54_OFFSET UNITYSDK_OFFSET(0x11AE56B0)
#define CLASS_2_E20BA7F7892B8F77_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x11AE5590)
#define CLASS_2_E20BA7F7892B8F77_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x11AE5BF0)
#define CLASS_2_E20BA7F7892B8F77_METHOD_2_6E55788E120B3DE1_OFFSET UNITYSDK_OFFSET(0x11AE5740)
#define CLASS_2_E20BA7F7892B8F77_METHOD_2_8518C8FCC2801265_OFFSET UNITYSDK_OFFSET(0x11AE5830)
#define CLASS_2_E20BA7F7892B8F77_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x11AE5970)
#define CLASS_2_E20BA7F7892B8F77__CTOR_OFFSET UNITYSDK_OFFSET(0x11AE5B50)
#define CLASS_2_E20BA7F7892B8F77___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x11AE5C50)
#define CLASS_2_E20BA7F7892B8F77___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x11AE5CB0)

inline static constexpr unsigned int Class_2_E20BA7F7892B8F77_TypeDefinitionIndex = 66207;

class Class_2_E20BA7F7892B8F77 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::RPG::GameCore::BattleInstance* Field_2_0; // 0x60
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BattleScreenEffectType, ::Class_0_16E4307DCC419505_964*>* Field_2_1; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E20BA7F7892B8F77__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E20BA7F7892B8F77_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_05E90691EFA05C54(::RPG::GameCore::ShowBattleScreenEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ShowBattleScreenEffect*))((::PBYTE)hIl2Cpp + CLASS_2_E20BA7F7892B8F77_METHOD_2_05E90691EFA05C54_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_964* Method_2_6E55788E120B3DE1(::RPG::GameCore::BattleScreenEffectType a1)
	{
		return ((::Class_0_16E4307DCC419505_964*(*)(::PVOID, ::RPG::GameCore::BattleScreenEffectType))((::PBYTE)hIl2Cpp + CLASS_2_E20BA7F7892B8F77_METHOD_2_6E55788E120B3DE1_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_964* Method_2_8518C8FCC2801265(::RPG::GameCore::BattleScreenEffectType a1)
	{
		return ((::Class_0_16E4307DCC419505_964*(*)(::PVOID, ::RPG::GameCore::BattleScreenEffectType))((::PBYTE)hIl2Cpp + CLASS_2_E20BA7F7892B8F77_METHOD_2_8518C8FCC2801265_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E20BA7F7892B8F77_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E20BA7F7892B8F77_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E20BA7F7892B8F77_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E20BA7F7892B8F77_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E20BA7F7892B8F77___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E20BA7F7892B8F77___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
