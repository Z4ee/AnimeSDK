#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_612;
namespace System { template <typename T> class Comparison_1; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIHANDBOOKROPEMAKERWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x190DE050)
#define MOLEMOLE_UIHANDBOOKROPEMAKERWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x190DE090)
#define MOLEMOLE_UIHANDBOOKROPEMAKERWIDGETCONTROLLER___C__ONCREATEVIEW_B__4_0_OFFSET UNITYSDK_OFFSET(0x190DE0A0)
#define MOLEMOLE_UIHANDBOOKROPEMAKERWIDGETCONTROLLER___C__ONCREATEVIEW_B__4_1_OFFSET UNITYSDK_OFFSET(0x190DE1C0)
#define MOLEMOLE_UIHANDBOOKROPEMAKERWIDGETCONTROLLER___C__REFRESHPROXYQUEST_B__12_0_OFFSET UNITYSDK_OFFSET(0x190DE2E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookRopeMakerWidgetController___c_TypeDefinitionIndex = 67601;

	class UIHandBookRopeMakerWidgetController___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction** StaticGet___9__4_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookRopeMakerWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x42A90);
		}
		static ::System::Comparison_1<::Class_2_208CC9941471731A_612*>** StaticGet___9__12_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_612*>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookRopeMakerWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x42A98);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__4_1()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookRopeMakerWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x42AA0);
		}
		static ::MoleMole::UIHandBookRopeMakerWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHandBookRopeMakerWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookRopeMakerWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x42AA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKROPEMAKERWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKROPEMAKERWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnCreateView_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKROPEMAKERWIDGETCONTROLLER___C__ONCREATEVIEW_B__4_0_OFFSET))(this);
		}

		::System::Void _OnCreateView_b__4_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKROPEMAKERWIDGETCONTROLLER___C__ONCREATEVIEW_B__4_1_OFFSET))(this);
		}

		::System::Int32 _RefreshProxyQuest_b__12_0(::Class_2_208CC9941471731A_612* a, ::Class_2_208CC9941471731A_612* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_612*, ::Class_2_208CC9941471731A_612*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKROPEMAKERWIDGETCONTROLLER___C__REFRESHPROXYQUEST_B__12_0_OFFSET))(this, a, b);
		}
	};
}
