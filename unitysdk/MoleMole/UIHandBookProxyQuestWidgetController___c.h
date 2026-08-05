#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_612;
namespace System { template <typename T> class Comparison_1; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIHANDBOOKPROXYQUESTWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1960F940)
#define MOLEMOLE_UIHANDBOOKPROXYQUESTWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1960F980)
#define MOLEMOLE_UIHANDBOOKPROXYQUESTWIDGETCONTROLLER___C__ONCREATEVIEW_B__4_0_OFFSET UNITYSDK_OFFSET(0x1960F990)
#define MOLEMOLE_UIHANDBOOKPROXYQUESTWIDGETCONTROLLER___C__ONCREATEVIEW_B__4_1_OFFSET UNITYSDK_OFFSET(0x1960FAB0)
#define MOLEMOLE_UIHANDBOOKPROXYQUESTWIDGETCONTROLLER___C__REFRESHPROXYQUEST_B__11_0_OFFSET UNITYSDK_OFFSET(0x1960FBD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookProxyQuestWidgetController___c_TypeDefinitionIndex = 79451;

	class UIHandBookProxyQuestWidgetController___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction** StaticGet___9__4_1()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookProxyQuestWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x450D0);
		}
		static ::System::Comparison_1<::Class_2_208CC9941471731A_612*>** StaticGet___9__11_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_612*>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookProxyQuestWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x450D8);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__4_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookProxyQuestWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x450E0);
		}
		static ::MoleMole::UIHandBookProxyQuestWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHandBookProxyQuestWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookProxyQuestWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x450E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPROXYQUESTWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPROXYQUESTWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnCreateView_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPROXYQUESTWIDGETCONTROLLER___C__ONCREATEVIEW_B__4_0_OFFSET))(this);
		}

		::System::Void _OnCreateView_b__4_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPROXYQUESTWIDGETCONTROLLER___C__ONCREATEVIEW_B__4_1_OFFSET))(this);
		}

		::System::Int32 _RefreshProxyQuest_b__11_0(::Class_2_208CC9941471731A_612* a, ::Class_2_208CC9941471731A_612* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_612*, ::Class_2_208CC9941471731A_612*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPROXYQUESTWIDGETCONTROLLER___C__REFRESHPROXYQUEST_B__11_0_OFFSET))(this, a, b);
		}
	};
}
