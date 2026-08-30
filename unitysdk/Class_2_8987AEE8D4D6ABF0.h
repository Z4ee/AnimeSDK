#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/RPG/GameCore/SilverWolf999UltraPropState.h"
#include "unitysdk/RPG/GameCore/SilverWolf999UltraPropType.h"

class Class_1_9D53176EF8570D3B;
namespace RPG::Client { class UIStateCtrl; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_8987AEE8D4D6ABF0_METHOD_2_4B75E771BB013954_OFFSET UNITYSDK_OFFSET(0x167A8190)
#define CLASS_2_8987AEE8D4D6ABF0_METHOD_2_5BA91482F524632E_OFFSET UNITYSDK_OFFSET(0x167A8380)
#define CLASS_2_8987AEE8D4D6ABF0_METHOD_2_EF94853A4119525A_OFFSET UNITYSDK_OFFSET(0x167A8120)
#define CLASS_2_8987AEE8D4D6ABF0_METHOD_2_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x167A8520)
#define CLASS_2_8987AEE8D4D6ABF0__CCTOR_OFFSET UNITYSDK_OFFSET(0x167A85C0)
#define CLASS_2_8987AEE8D4D6ABF0__CTOR_OFFSET UNITYSDK_OFFSET(0x167A8590)
#define CLASS_2_8987AEE8D4D6ABF0__ONBIND_OFFSET UNITYSDK_OFFSET(0x167A8060)

inline static constexpr unsigned int Class_2_8987AEE8D4D6ABF0_TypeDefinitionIndex = 71416;

class Class_2_8987AEE8D4D6ABF0 : public ::Class_1_34917908B7833130
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SilverWolf999UltraPropType, ::System::String*>** StaticGet_MEGMMHLDHHF()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SilverWolf999UltraPropType, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8987AEE8D4D6ABF0_TypeDefinitionIndex)->GetStaticField(0x49200);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SilverWolf999UltraPropState, ::System::String*>** StaticGet_DOKLAJNEDGF()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SilverWolf999UltraPropState, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8987AEE8D4D6ABF0_TypeDefinitionIndex)->GetStaticField(0x49208);
	}
	::UnityEngine::RectTransform* HACIPINNIOG; // 0x60
	::RPG::Client::UIStateCtrl* GIMAEGBDOBL; // 0x68
	::UnityEngine::UI::Image* MKOCDHEFAME; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8987AEE8D4D6ABF0__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8987AEE8D4D6ABF0__CCTOR_OFFSET))();
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8987AEE8D4D6ABF0__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_EF94853A4119525A(::Class_1_9D53176EF8570D3B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9D53176EF8570D3B*))((::PBYTE)hIl2Cpp + CLASS_2_8987AEE8D4D6ABF0_METHOD_2_EF94853A4119525A_OFFSET))(this, a1);
	}

	::System::Single Method_2_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8987AEE8D4D6ABF0_METHOD_2_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Void Method_2_4B75E771BB013954(::RPG::GameCore::SilverWolf999UltraPropState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SilverWolf999UltraPropState))((::PBYTE)hIl2Cpp + CLASS_2_8987AEE8D4D6ABF0_METHOD_2_4B75E771BB013954_OFFSET))(this, a1);
	}

	::System::Void Method_2_5BA91482F524632E(::RPG::GameCore::SilverWolf999UltraPropType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SilverWolf999UltraPropType))((::PBYTE)hIl2Cpp + CLASS_2_8987AEE8D4D6ABF0_METHOD_2_5BA91482F524632E_OFFSET))(this, a1);
	}
};
