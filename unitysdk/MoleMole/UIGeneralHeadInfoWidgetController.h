#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_00E0F6A4450214AA_1;
namespace MoleMole { class UIControlReference; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIGENERALHEADINFOWIDGETCONTROLLER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1686E800)
#define MOLEMOLE_UIGENERALHEADINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1686E3D0)
#define MOLEMOLE_UIGENERALHEADINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1686E460)
#define MOLEMOLE_UIGENERALHEADINFOWIDGETCONTROLLER_SETDATAINNER_OFFSET UNITYSDK_OFFSET(0x1686E5C0)
#define MOLEMOLE_UIGENERALHEADINFOWIDGETCONTROLLER_SETDATA_OFFSET UNITYSDK_OFFSET(0x1686E4E0)
#define MOLEMOLE_UIGENERALHEADINFOWIDGETCONTROLLER_SETOVERRIDENAME_OFFSET UNITYSDK_OFFSET(0x1686E980)
#define MOLEMOLE_UIGENERALHEADINFOWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1686E9E0)
#define MOLEMOLE_UIGENERALHEADINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1686E9D0)
#define MOLEMOLE_UIGENERALHEADINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1686EAE0)
#define MOLEMOLE_UIGENERALHEADINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1686EB70)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralHeadInfoWidgetController_TypeDefinitionIndex = 40584;

	class UIGeneralHeadInfoWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		static ::Il2CppArray<::Foundation::AssetPath>** StaticGet_EXPRESSION_ICON_PATH()
		{
			return (::Il2CppArray<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralHeadInfoWidgetController_TypeDefinitionIndex)->GetStaticField(0x46A80);
		}
		::Class_2_00E0F6A4450214AA_1* _view; // 0x2E8
		::UnityEngine::UI::Extension::UILocalizationText* _overrideName; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHEADINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHEADINFOWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHEADINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHEADINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHEADINFOWIDGETCONTROLLER_SETDATA_OFFSET))(this);
		}

		::System::Boolean SetDataInner(::System::Int32 npcID, ::System::Int16 state)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int16))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHEADINFOWIDGETCONTROLLER_SETDATAINNER_OFFSET))(this, npcID, state);
		}

		::System::Void SetOverrideName(::UnityEngine::UI::Extension::UILocalizationText* name)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHEADINFOWIDGETCONTROLLER_SETOVERRIDENAME_OFFSET))(this, name);
		}

		::UnityEngine::UI::Extension::UILocalizationText* get_Name()
		{
			return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHEADINFOWIDGETCONTROLLER_GET_NAME_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHEADINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHEADINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
