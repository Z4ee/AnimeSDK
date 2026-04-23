#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_382;
class Class_1_B2388953D46D7EF4;
namespace RPG::Client { class UIFollow3DTarget; }
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_5700021F57019C1C_METHOD_2_19844080C13BA28F_OFFSET UNITYSDK_OFFSET(0x9A281A0)
#define CLASS_2_5700021F57019C1C_METHOD_2_3415D6A589E2DADE_OFFSET UNITYSDK_OFFSET(0x9A28BA0)
#define CLASS_2_5700021F57019C1C_METHOD_2_3CAD92CFB876DBF6_OFFSET UNITYSDK_OFFSET(0x9A27DA0)
#define CLASS_2_5700021F57019C1C_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x9A29290)
#define CLASS_2_5700021F57019C1C_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x9A29230)
#define CLASS_2_5700021F57019C1C_METHOD_2_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0x9A28060)
#define CLASS_2_5700021F57019C1C_METHOD_2_670DEA919D5B8A73_OFFSET UNITYSDK_OFFSET(0x9A286E0)
#define CLASS_2_5700021F57019C1C_METHOD_2_72A8068D2AF9B485_OFFSET UNITYSDK_OFFSET(0x9A27E70)
#define CLASS_2_5700021F57019C1C_METHOD_2_84C8B3AB5570DEF9_OFFSET UNITYSDK_OFFSET(0x9A27F40)
#define CLASS_2_5700021F57019C1C_METHOD_2_B2C52ACF9D9B435B_OFFSET UNITYSDK_OFFSET(0x9A28140)
#define CLASS_2_5700021F57019C1C_METHOD_2_B799DB9989A18F1D_OFFSET UNITYSDK_OFFSET(0x9A27BB0)
#define CLASS_2_5700021F57019C1C_METHOD_2_C89A41A14F7CCD91_OFFSET UNITYSDK_OFFSET(0x9A291C0)
#define CLASS_2_5700021F57019C1C_METHOD_2_CC9DCB1EBAA03C60_OFFSET UNITYSDK_OFFSET(0x9A289F0)
#define CLASS_2_5700021F57019C1C_METHOD_2_D2DD924C607646D3_OFFSET UNITYSDK_OFFSET(0x9A28DB0)
#define CLASS_2_5700021F57019C1C_METHOD_2_D4FECA5E8E7A3BF3_OFFSET UNITYSDK_OFFSET(0x9A27B30)
#define CLASS_2_5700021F57019C1C_METHOD_2_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x9A287A0)
#define CLASS_2_5700021F57019C1C_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x9A279D0)
#define CLASS_2_5700021F57019C1C_ONRETURN_OFFSET UNITYSDK_OFFSET(0x9A27C10)
#define CLASS_2_5700021F57019C1C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9A29110)
#define CLASS_2_5700021F57019C1C__CTOR_OFFSET UNITYSDK_OFFSET(0x9A290E0)
#define CLASS_2_5700021F57019C1C__ONBIND_OFFSET UNITYSDK_OFFSET(0x9A29020)
#define CLASS_2_5700021F57019C1C__ONRETURN_B__1_0_OFFSET UNITYSDK_OFFSET(0x9A29150)
#define CLASS_2_5700021F57019C1C___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x9A292F0)

inline static constexpr unsigned int Class_2_5700021F57019C1C_TypeDefinitionIndex = 66113;

class Class_2_5700021F57019C1C : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	static ::System::Single* StaticGet_Field_2_9()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_5700021F57019C1C_TypeDefinitionIndex)->GetStaticField(0x6970);
	}
	static ::System::Single* StaticGet_Field_2_10()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_5700021F57019C1C_TypeDefinitionIndex)->GetStaticField(0x6974);
	}
	static ::System::Single* StaticGet_Field_2_7()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_5700021F57019C1C_TypeDefinitionIndex)->GetStaticField(0x6978);
	}
	static ::System::Single* StaticGet_Field_2_8()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_5700021F57019C1C_TypeDefinitionIndex)->GetStaticField(0x697C);
	}
	static ::System::Single* StaticGet_Field_2_11()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_5700021F57019C1C_TypeDefinitionIndex)->GetStaticField(0x6980);
	}
	// static const ::System::Single Field_2_4; // 0x0
	// static const ::System::Single Field_2_5; // 0x0
	// static const ::System::Single Field_2_6; // 0x0
	::RPG::GameCore::LevelUIComponent* Field_2_13; // 0x60
	::UnityEngine::RectTransform* Field_2_3; // 0x68
	::RPG::GameCore::CharacterDataComponent* Field_2_15; // 0x70
	::RPG::Client::UIFollow3DTarget* Field_2_1; // 0x78
	::RPG::GameCore::TurnBasedGameMode* Field_2_14; // 0x80
	::RPG::GameCore::GameEntity* Field_2_12; // 0x88
	::Class_1_B2388953D46D7EF4* Field_2_0; // 0x90
	::UnityEngine::Animation* Field_2_2; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5700021F57019C1C__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_5700021F57019C1C__CCTOR_OFFSET))();
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_5700021F57019C1C_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5700021F57019C1C_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_72A8068D2AF9B485()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5700021F57019C1C_METHOD_2_72A8068D2AF9B485_OFFSET))(this);
	}

	::RPG::GameCore::EventManager* Method_2_84C8B3AB5570DEF9()
	{
		return ((::RPG::GameCore::EventManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5700021F57019C1C_METHOD_2_84C8B3AB5570DEF9_OFFSET))(this);
	}

	::System::Void Method_2_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_5700021F57019C1C_METHOD_2_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::System::Void Method_2_B2C52ACF9D9B435B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5700021F57019C1C_METHOD_2_B2C52ACF9D9B435B_OFFSET))(this);
	}

	::System::Void Method_2_3CAD92CFB876DBF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5700021F57019C1C_METHOD_2_3CAD92CFB876DBF6_OFFSET))(this);
	}

	::System::Void Method_2_670DEA919D5B8A73(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_5700021F57019C1C_METHOD_2_670DEA919D5B8A73_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5700021F57019C1C_METHOD_2_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_2_B799DB9989A18F1D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5700021F57019C1C_METHOD_2_B799DB9989A18F1D_OFFSET))(this);
	}

	::System::Void Method_2_D4FECA5E8E7A3BF3(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_5700021F57019C1C_METHOD_2_D4FECA5E8E7A3BF3_OFFSET))(this, a1);
	}

	::System::Void Method_2_19844080C13BA28F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5700021F57019C1C_METHOD_2_19844080C13BA28F_OFFSET))(this);
	}

	::System::Void Method_2_3415D6A589E2DADE(::RPG::Client::UIFollow3DTarget* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIFollow3DTarget*))((::PBYTE)hIl2Cpp + CLASS_2_5700021F57019C1C_METHOD_2_3415D6A589E2DADE_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_D2DD924C607646D3(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_5700021F57019C1C_METHOD_2_D2DD924C607646D3_OFFSET))(this, a1);
	}

	::UnityEngine::Rect Method_2_CC9DCB1EBAA03C60()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5700021F57019C1C_METHOD_2_CC9DCB1EBAA03C60_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5700021F57019C1C__ONBIND_OFFSET))(this);
	}

	::System::Void _OnReturn_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5700021F57019C1C__ONRETURN_B__1_0_OFFSET))(this);
	}

	::System::Void Method_2_C89A41A14F7CCD91(::Struct_2_96F8F0A04B900A9E P0)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_5700021F57019C1C_METHOD_2_C89A41A14F7CCD91_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5700021F57019C1C_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5700021F57019C1C_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5700021F57019C1C___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
