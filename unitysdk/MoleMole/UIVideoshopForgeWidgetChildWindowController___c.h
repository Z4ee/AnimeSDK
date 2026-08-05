#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1685EC66FBD28897;
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Comparison_1; }
namespace UnityEngine::UI { class HorizontalLayoutGroup; }

#define MOLEMOLE_UIVIDEOSHOPFORGEWIDGETCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x188B6A50)
#define MOLEMOLE_UIVIDEOSHOPFORGEWIDGETCHILDWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x188B6A90)
#define MOLEMOLE_UIVIDEOSHOPFORGEWIDGETCHILDWINDOWCONTROLLER___C__GETSHOWREWARDLIST_B__86_0_OFFSET UNITYSDK_OFFSET(0x188B6AA0)
#define MOLEMOLE_UIVIDEOSHOPFORGEWIDGETCHILDWINDOWCONTROLLER___C__REALUPDATECOSTDISPLAY_B__116_0_OFFSET UNITYSDK_OFFSET(0x188B6B40)
#define MOLEMOLE_UIVIDEOSHOPFORGEWIDGETCHILDWINDOWCONTROLLER___C__REALUPDATECOSTDISPLAY_B__116_1_OFFSET UNITYSDK_OFFSET(0x188B6BD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVideoshopForgeWidgetChildWindowController___c_TypeDefinitionIndex = 80840;

	class UIVideoshopForgeWidgetChildWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::UnityEngine::UI::HorizontalLayoutGroup*>** StaticGet___9__116_0()
		{
			return (::System::Action_1<::UnityEngine::UI::HorizontalLayoutGroup*>**)Il2CppClass::FromTypeDefinitionIndex(UIVideoshopForgeWidgetChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x333F0);
		}
		static ::System::Comparison_1<::Class_1_1685EC66FBD28897*>** StaticGet___9__86_0()
		{
			return (::System::Comparison_1<::Class_1_1685EC66FBD28897*>**)Il2CppClass::FromTypeDefinitionIndex(UIVideoshopForgeWidgetChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x333F8);
		}
		static ::MoleMole::UIVideoshopForgeWidgetChildWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIVideoshopForgeWidgetChildWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIVideoshopForgeWidgetChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x33400);
		}
		static ::System::Action_1<::UnityEngine::UI::HorizontalLayoutGroup*>** StaticGet___9__116_1()
		{
			return (::System::Action_1<::UnityEngine::UI::HorizontalLayoutGroup*>**)Il2CppClass::FromTypeDefinitionIndex(UIVideoshopForgeWidgetChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x33408);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPFORGEWIDGETCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPFORGEWIDGETCHILDWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetShowRewardList_b__86_0(::Class_1_1685EC66FBD28897* data1, ::Class_1_1685EC66FBD28897* data2)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_1685EC66FBD28897*, ::Class_1_1685EC66FBD28897*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPFORGEWIDGETCHILDWINDOWCONTROLLER___C__GETSHOWREWARDLIST_B__86_0_OFFSET))(this, data1, data2);
		}

		::System::Void _RealUpdateCostDisplay_b__116_0(::UnityEngine::UI::HorizontalLayoutGroup* x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::HorizontalLayoutGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPFORGEWIDGETCHILDWINDOWCONTROLLER___C__REALUPDATECOSTDISPLAY_B__116_0_OFFSET))(this, x);
		}

		::System::Void _RealUpdateCostDisplay_b__116_1(::UnityEngine::UI::HorizontalLayoutGroup* x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::HorizontalLayoutGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPFORGEWIDGETCHILDWINDOWCONTROLLER___C__REALUPDATECOSTDISPLAY_B__116_1_OFFSET))(this, x);
		}
	};
}
