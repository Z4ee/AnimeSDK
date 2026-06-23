#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Component; }

#define MOLEMOLE_UICOLORTWEAKERTARGETGROUP___C_METHOD_1_10E65586B528388C_OFFSET UNITYSDK_OFFSET(0x17A59C20)
#define MOLEMOLE_UICOLORTWEAKERTARGETGROUP___C_METHOD_1_72C2BDE9309D520F_OFFSET UNITYSDK_OFFSET(0x17A59D20)
#define MOLEMOLE_UICOLORTWEAKERTARGETGROUP___C_METHOD_1_B12F3BB17411CE71_OFFSET UNITYSDK_OFFSET(0x17A59CA0)
#define MOLEMOLE_UICOLORTWEAKERTARGETGROUP___C_METHOD_1_D678849620C1CA8B_OFFSET UNITYSDK_OFFSET(0x17A59E10)
#define MOLEMOLE_UICOLORTWEAKERTARGETGROUP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A59BD0)
#define MOLEMOLE_UICOLORTWEAKERTARGETGROUP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17A59C10)

namespace MoleMole
{
	inline static constexpr unsigned int UIColorTweakerTargetGroup___c_TypeDefinitionIndex = 54414;

	class UIColorTweakerTargetGroup___c : public ::System::Object
	{
	public:
		static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Color>** StaticGet___9__14_2()
		{
			return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(UIColorTweakerTargetGroup___c_TypeDefinitionIndex)->GetStaticField(0x41380);
		}
		static ::MoleMole::UIColorTweakerTargetGroup___c** StaticGet___9()
		{
			return (::MoleMole::UIColorTweakerTargetGroup___c**)Il2CppClass::FromTypeDefinitionIndex(UIColorTweakerTargetGroup___c_TypeDefinitionIndex)->GetStaticField(0x41388);
		}
		static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Color>** StaticGet___9__14_0()
		{
			return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(UIColorTweakerTargetGroup___c_TypeDefinitionIndex)->GetStaticField(0x41390);
		}
		static ::System::Func_2<::UnityEngine::Component*, ::UnityEngine::Color>** StaticGet___9__14_3()
		{
			return (::System::Func_2<::UnityEngine::Component*, ::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(UIColorTweakerTargetGroup___c_TypeDefinitionIndex)->GetStaticField(0x41398);
		}
		static ::System::Func_2<::UnityEngine::Component*, ::UnityEngine::Color>** StaticGet___9__14_1()
		{
			return (::System::Func_2<::UnityEngine::Component*, ::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(UIColorTweakerTargetGroup___c_TypeDefinitionIndex)->GetStaticField(0x413A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICOLORTWEAKERTARGETGROUP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOLORTWEAKERTARGETGROUP___C__CTOR_OFFSET))(this);
		}

		::UnityEngine::Color Method_1_10E65586B528388C(::UnityEngine::Component* a1)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOLORTWEAKERTARGETGROUP___C_METHOD_1_10E65586B528388C_OFFSET))(this, a1);
		}

		::System::Void Method_1_B12F3BB17411CE71(::UnityEngine::Component* a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOLORTWEAKERTARGETGROUP___C_METHOD_1_B12F3BB17411CE71_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Color Method_1_72C2BDE9309D520F(::UnityEngine::Component* a1)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOLORTWEAKERTARGETGROUP___C_METHOD_1_72C2BDE9309D520F_OFFSET))(this, a1);
		}

		::System::Void Method_1_D678849620C1CA8B(::UnityEngine::Component* a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOLORTWEAKERTARGETGROUP___C_METHOD_1_D678849620C1CA8B_OFFSET))(this, a1, a2);
		}
	};
}
