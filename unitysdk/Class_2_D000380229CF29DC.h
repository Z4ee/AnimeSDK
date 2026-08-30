#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/RPG/GameCore/BattleScreenEffectType.h"

class Class_0_16E4307DCC419505_1112;
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class ShowBattleScreenEffect; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_D000380229CF29DC_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB94DE70)
#define CLASS_2_D000380229CF29DC_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB94DF40)
#define CLASS_2_D000380229CF29DC_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xB94D820)
#define CLASS_2_D000380229CF29DC_METHOD_2_4B9EF924D17BEB38_OFFSET UNITYSDK_OFFSET(0xB94DB60)
#define CLASS_2_D000380229CF29DC_METHOD_2_7C9FFDA4B9195FD8_OFFSET UNITYSDK_OFFSET(0xB94DC10)
#define CLASS_2_D000380229CF29DC_METHOD_2_DF7286526C3287F4_OFFSET UNITYSDK_OFFSET(0xB94D940)
#define CLASS_2_D000380229CF29DC_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xB94DDB0)
#define CLASS_2_D000380229CF29DC__CTOR_OFFSET UNITYSDK_OFFSET(0xB94DFE0)

inline static constexpr unsigned int Class_2_D000380229CF29DC_TypeDefinitionIndex = 71789;

class Class_2_D000380229CF29DC : public ::Class_1_34917908B7833130
{
public:
	::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x60
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BattleScreenEffectType, ::Class_0_16E4307DCC419505_1112*>* KCNIOEPMBEJ; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D000380229CF29DC__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D000380229CF29DC_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_DF7286526C3287F4(::RPG::GameCore::ShowBattleScreenEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ShowBattleScreenEffect*))((::PBYTE)hIl2Cpp + CLASS_2_D000380229CF29DC_METHOD_2_DF7286526C3287F4_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_1112* Method_2_4B9EF924D17BEB38(::RPG::GameCore::BattleScreenEffectType a1)
	{
		return ((::Class_0_16E4307DCC419505_1112*(*)(::PVOID, ::RPG::GameCore::BattleScreenEffectType))((::PBYTE)hIl2Cpp + CLASS_2_D000380229CF29DC_METHOD_2_4B9EF924D17BEB38_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_1112* Method_2_7C9FFDA4B9195FD8(::RPG::GameCore::BattleScreenEffectType a1)
	{
		return ((::Class_0_16E4307DCC419505_1112*(*)(::PVOID, ::RPG::GameCore::BattleScreenEffectType))((::PBYTE)hIl2Cpp + CLASS_2_D000380229CF29DC_METHOD_2_7C9FFDA4B9195FD8_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D000380229CF29DC_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D000380229CF29DC_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D000380229CF29DC_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
