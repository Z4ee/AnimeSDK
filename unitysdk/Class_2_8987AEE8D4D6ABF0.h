#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/SilverWolf999UltraPropState.h"
#include "unitysdk/RPG/GameCore/SilverWolf999UltraPropType.h"

class Class_1_9D53176EF8570D3B;
namespace RPG::Client { class UIStateCtrl; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_8987AEE8D4D6ABF0_METHOD_2_4B75E771BB013954_OFFSET UNITYSDK_OFFSET(0x13A00BE0)
#define CLASS_2_8987AEE8D4D6ABF0_METHOD_2_5BA91482F524632E_OFFSET UNITYSDK_OFFSET(0x13A00DD0)
#define CLASS_2_8987AEE8D4D6ABF0_METHOD_2_EF94853A4119525A_OFFSET UNITYSDK_OFFSET(0x13A00B70)
#define CLASS_2_8987AEE8D4D6ABF0_METHOD_2_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x13A00F70)
#define CLASS_2_8987AEE8D4D6ABF0__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A01010)
#define CLASS_2_8987AEE8D4D6ABF0__CTOR_OFFSET UNITYSDK_OFFSET(0x13A00FE0)
#define CLASS_2_8987AEE8D4D6ABF0__ONBIND_OFFSET UNITYSDK_OFFSET(0x13A00AB0)
#define CLASS_2_8987AEE8D4D6ABF0___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x13A013C0)

inline static constexpr unsigned int Class_2_8987AEE8D4D6ABF0_TypeDefinitionIndex = 66798;

class Class_2_8987AEE8D4D6ABF0 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SilverWolf999UltraPropType, ::System::String*>** StaticGet_Field_2_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SilverWolf999UltraPropType, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8987AEE8D4D6ABF0_TypeDefinitionIndex)->GetStaticField(0x67150);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SilverWolf999UltraPropState, ::System::String*>** StaticGet_Field_2_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SilverWolf999UltraPropState, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8987AEE8D4D6ABF0_TypeDefinitionIndex)->GetStaticField(0x67158);
	}
	::RPG::Client::UIStateCtrl* Field_2_2; // 0x60
	::UnityEngine::RectTransform* Field_2_3; // 0x68
	::UnityEngine::UI::Image* Field_2_4; // 0x70

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

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8987AEE8D4D6ABF0___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
