#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtBattleUltraInsertPhase.h"
#include "unitysdk/RPG/GameCore/RtSkillState.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_401;
class Class_1_12210BFF9F8CB0CA;
class Class_1_44552D95D5AEB0B8;
class Class_1_D8203AFB32E9259C;
class Class_1_E03F8E82A66D87F1;
class Class_1_E7BD46EB43F1A06F;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3DA882FF7DA71BAF_METHOD_1_0F18B26B3C898DF3_OFFSET UNITYSDK_OFFSET(0x1446CB90)
#define CLASS_1_3DA882FF7DA71BAF_METHOD_1_1529CF5FE379D086_OFFSET UNITYSDK_OFFSET(0x1446CF90)
#define CLASS_1_3DA882FF7DA71BAF_METHOD_1_2EEEE009AB302D2C_OFFSET UNITYSDK_OFFSET(0x1446BED0)
#define CLASS_1_3DA882FF7DA71BAF_METHOD_1_5CDEEDD53C1198B5_OFFSET UNITYSDK_OFFSET(0x1446CAB0)
#define CLASS_1_3DA882FF7DA71BAF_METHOD_1_77577333B4681208_OFFSET UNITYSDK_OFFSET(0x1446BD60)
#define CLASS_1_3DA882FF7DA71BAF_METHOD_1_8EDB7FE5AA37C50F_1_OFFSET UNITYSDK_OFFSET(0x1446CF80)
#define CLASS_1_3DA882FF7DA71BAF_METHOD_1_8EDB7FE5AA37C50F_OFFSET UNITYSDK_OFFSET(0x1446CF70)
#define CLASS_1_3DA882FF7DA71BAF_METHOD_1_9FEF704BEBA7FDDF_OFFSET UNITYSDK_OFFSET(0x1446CA50)
#define CLASS_1_3DA882FF7DA71BAF_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x1446BE30)
#define CLASS_1_3DA882FF7DA71BAF_METHOD_1_CFD391EE79D9966D_OFFSET UNITYSDK_OFFSET(0x1446C6E0)
#define CLASS_1_3DA882FF7DA71BAF_METHOD_1_D2F5EC9A721C1561_OFFSET UNITYSDK_OFFSET(0x1446BC30)
#define CLASS_1_3DA882FF7DA71BAF_METHOD_1_F5324E2636212B9C_OFFSET UNITYSDK_OFFSET(0x1446CDD0)
#define CLASS_1_3DA882FF7DA71BAF_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0x1446B810)
#define CLASS_1_3DA882FF7DA71BAF_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0x1446BA60)
#define CLASS_1_3DA882FF7DA71BAF__CTOR_OFFSET UNITYSDK_OFFSET(0x1446D070)

inline static constexpr unsigned int Class_1_3DA882FF7DA71BAF_TypeDefinitionIndex = 50695;

class Class_1_3DA882FF7DA71BAF : public ::System::Object
{
public:
	::Class_1_44552D95D5AEB0B8* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_1; // 0x18
	::Class_1_12210BFF9F8CB0CA* Field_1_2; // 0x20
	::Class_1_E03F8E82A66D87F1* Field_1_3; // 0x28
	::RPG::GameCore::GameWorld* Field_1_4; // 0x30
	::System::Collections::Generic::List_1<::Class_1_D8203AFB32E9259C*>* Field_1_5; // 0x38
	::RPG::GameCore::FixPoint Field_1_6; // 0x40
	::RPG::GameCore::FixPoint Field_1_7; // 0x48

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

	::System::Void Method_1_D2F5EC9A721C1561(::Class_1_E7BD46EB43F1A06F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7BD46EB43F1A06F*))((::PBYTE)hIl2Cpp + CLASS_1_3DA882FF7DA71BAF_METHOD_1_D2F5EC9A721C1561_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_2EEEE009AB302D2C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DA882FF7DA71BAF_METHOD_1_2EEEE009AB302D2C_OFFSET))(this);
	}

	::System::Void Method_1_9FEF704BEBA7FDDF(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_3DA882FF7DA71BAF_METHOD_1_9FEF704BEBA7FDDF_OFFSET))(this, a1);
	}

	::System::Void Method_1_CFD391EE79D9966D(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_3DA882FF7DA71BAF_METHOD_1_CFD391EE79D9966D_OFFSET))(this, a1);
	}

	::System::Void Method_1_5CDEEDD53C1198B5(::Class_1_D8203AFB32E9259C* a1, ::RPG::GameCore::RtSkillState a2, ::RPG::GameCore::RtSkillState a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D8203AFB32E9259C*, ::RPG::GameCore::RtSkillState, ::RPG::GameCore::RtSkillState))((::PBYTE)hIl2Cpp + CLASS_1_3DA882FF7DA71BAF_METHOD_1_5CDEEDD53C1198B5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_0F18B26B3C898DF3(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_3DA882FF7DA71BAF_METHOD_1_0F18B26B3C898DF3_OFFSET))(this, a1);
	}

	::System::Void Method_1_F5324E2636212B9C(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_1_3DA882FF7DA71BAF_METHOD_1_F5324E2636212B9C_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_8EDB7FE5AA37C50F()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DA882FF7DA71BAF_METHOD_1_8EDB7FE5AA37C50F_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_8EDB7FE5AA37C50F_1()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DA882FF7DA71BAF_METHOD_1_8EDB7FE5AA37C50F_1_OFFSET))(this);
	}

	::System::Boolean Method_1_77577333B4681208()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DA882FF7DA71BAF_METHOD_1_77577333B4681208_OFFSET))(this);
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
