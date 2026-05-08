#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_319;
namespace System { template <typename T> class Comparison_1; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIHANDBOOKROPEMAKERWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x151D81E0)
#define MOLEMOLE_UIHANDBOOKROPEMAKERWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x151D8220)
#define MOLEMOLE_UIHANDBOOKROPEMAKERWIDGETCONTROLLER___C__ONCREATEVIEW_B__4_0_OFFSET UNITYSDK_OFFSET(0x151D8230)
#define MOLEMOLE_UIHANDBOOKROPEMAKERWIDGETCONTROLLER___C__ONCREATEVIEW_B__4_1_OFFSET UNITYSDK_OFFSET(0x151D8350)
#define MOLEMOLE_UIHANDBOOKROPEMAKERWIDGETCONTROLLER___C__REFRESHPROXYQUEST_B__12_0_OFFSET UNITYSDK_OFFSET(0x151D8470)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookRopeMakerWidgetController___c_TypeDefinitionIndex = 42501;

	class UIHandBookRopeMakerWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIHandBookRopeMakerWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHandBookRopeMakerWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookRopeMakerWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3EE20);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__4_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookRopeMakerWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3EE28);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__4_1()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookRopeMakerWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3EE30);
		}
		static ::System::Comparison_1<::Class_2_208CC9941471731A_319*>** StaticGet___9__12_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_319*>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookRopeMakerWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3EE38);
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

		::System::Int32 _RefreshProxyQuest_b__12_0(::Class_2_208CC9941471731A_319* a, ::Class_2_208CC9941471731A_319* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_319*, ::Class_2_208CC9941471731A_319*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKROPEMAKERWIDGETCONTROLLER___C__REFRESHPROXYQUEST_B__12_0_OFFSET))(this, a, b);
		}
	};
}
