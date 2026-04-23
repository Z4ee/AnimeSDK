#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtBattleUltraInsertPhase.h"
#include "unitysdk/RPG/GameCore/RtSkillState.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_382;
class Class_1_05E595DC72CB83CA;
class Class_1_44552D95D5AEB0B8;
class Class_1_8976C473AE3B2B47;
class Class_1_E03F8E82A66D87F1;
class Class_1_E7BD46EB43F1A06F;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3DA882FF7DA71BAF_METHOD_1_0F18B26B3C898DF3_OFFSET UNITYSDK_OFFSET(0x11A72A40)
#define CLASS_1_3DA882FF7DA71BAF_METHOD_1_1529CF5FE379D086_OFFSET UNITYSDK_OFFSET(0x11A72F50)
#define CLASS_1_3DA882FF7DA71BAF_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x11A71EC0)
#define CLASS_1_3DA882FF7DA71BAF_METHOD_1_4661C73DDFEE356C_OFFSET UNITYSDK_OFFSET(0x11A71FB0)
#define CLASS_1_3DA882FF7DA71BAF_METHOD_1_5A0190741B2ECDD2_OFFSET UNITYSDK_OFFSET(0x11A72700)
#define CLASS_1_3DA882FF7DA71BAF_METHOD_1_5CDEEDD53C1198B5_OFFSET UNITYSDK_OFFSET(0x11A72960)
#define CLASS_1_3DA882FF7DA71BAF_METHOD_1_722E1524F560C8AF_OFFSET UNITYSDK_OFFSET(0x11A71D60)
#define CLASS_1_3DA882FF7DA71BAF_METHOD_1_8DA3B55C33C4DEBB_OFFSET UNITYSDK_OFFSET(0x11A72C90)
#define CLASS_1_3DA882FF7DA71BAF_METHOD_1_8EDB7FE5AA37C50F_1_OFFSET UNITYSDK_OFFSET(0x11A72F40)
#define CLASS_1_3DA882FF7DA71BAF_METHOD_1_8EDB7FE5AA37C50F_OFFSET UNITYSDK_OFFSET(0x11A72F30)
#define CLASS_1_3DA882FF7DA71BAF_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x11A71F10)
#define CLASS_1_3DA882FF7DA71BAF_METHOD_1_EA4FE739BD20A211_OFFSET UNITYSDK_OFFSET(0x11A728D0)
#define CLASS_1_3DA882FF7DA71BAF_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0x11A71970)
#define CLASS_1_3DA882FF7DA71BAF_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0x11A71BA0)
#define CLASS_1_3DA882FF7DA71BAF__CTOR_OFFSET UNITYSDK_OFFSET(0x11A73030)

inline static constexpr unsigned int Class_1_3DA882FF7DA71BAF_TypeDefinitionIndex = 50028;

class Class_1_3DA882FF7DA71BAF : public ::System::Object
{
public:
	::RPG::GameCore::GameWorld* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_05E595DC72CB83CA*>* Field_1_6; // 0x18
	::Class_1_44552D95D5AEB0B8* Field_1_2; // 0x20
	::Class_1_8976C473AE3B2B47* Field_1_1; // 0x28
	::Class_1_E03F8E82A66D87F1* Field_1_3; // 0x30
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_7; // 0x38
	::RPG::GameCore::FixPoint Field_1_4; // 0x40
	::RPG::GameCore::FixPoint Field_1_5; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DA882FF7DA71BAF__CTOR_OFFSET))(this);
	}

	::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_3DA882FF7DA71BAF_ONPLUGININIT_OFFSET))(this, a1);
	}

	::System::Void OnPluginUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DA882FF7DA71BAF_ONPLUGINUNINIT_OFFSET))(this);
	}

	::System::Void Method_1_722E1524F560C8AF(::Class_1_E7BD46EB43F1A06F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7BD46EB43F1A06F*))((::PBYTE)hIl2Cpp + CLASS_1_3DA882FF7DA71BAF_METHOD_1_722E1524F560C8AF_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4661C73DDFEE356C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DA882FF7DA71BAF_METHOD_1_4661C73DDFEE356C_OFFSET))(this);
	}

	::System::Void Method_1_EA4FE739BD20A211(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_3DA882FF7DA71BAF_METHOD_1_EA4FE739BD20A211_OFFSET))(this, a1);
	}

	::System::Void Method_1_5A0190741B2ECDD2(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_3DA882FF7DA71BAF_METHOD_1_5A0190741B2ECDD2_OFFSET))(this, a1);
	}

	::System::Void Method_1_5CDEEDD53C1198B5(::Class_1_05E595DC72CB83CA* a1, ::RPG::GameCore::RtSkillState a2, ::RPG::GameCore::RtSkillState a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_05E595DC72CB83CA*, ::RPG::GameCore::RtSkillState, ::RPG::GameCore::RtSkillState))((::PBYTE)hIl2Cpp + CLASS_1_3DA882FF7DA71BAF_METHOD_1_5CDEEDD53C1198B5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_0F18B26B3C898DF3(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_3DA882FF7DA71BAF_METHOD_1_0F18B26B3C898DF3_OFFSET))(this, a1);
	}

	::System::Void Method_1_8DA3B55C33C4DEBB(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_3DA882FF7DA71BAF_METHOD_1_8DA3B55C33C4DEBB_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_8EDB7FE5AA37C50F()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DA882FF7DA71BAF_METHOD_1_8EDB7FE5AA37C50F_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_8EDB7FE5AA37C50F_1()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DA882FF7DA71BAF_METHOD_1_8EDB7FE5AA37C50F_1_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DA882FF7DA71BAF_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DA882FF7DA71BAF_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::RPG::GameCore::RtBattleUltraInsertPhase Method_1_1529CF5FE379D086()
	{
		return ((::RPG::GameCore::RtBattleUltraInsertPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DA882FF7DA71BAF_METHOD_1_1529CF5FE379D086_OFFSET))(this);
	}
};
