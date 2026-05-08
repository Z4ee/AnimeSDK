#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UITowerDefenseTabBtnWidgetController.h"

class Class_2_A601D11EE974378B;
namespace MoleMole { class UIControlReference; }
namespace System { class String; }

#define MOLEMOLE_UIBANGBOOUAVTABBTNWIDGETCONTROLLER_GETRANKSTRICON_OFFSET UNITYSDK_OFFSET(0x1646AEC0)
#define MOLEMOLE_UIBANGBOOUAVTABBTNWIDGETCONTROLLER_GETRANKSTR_OFFSET UNITYSDK_OFFSET(0x1646B050)
#define MOLEMOLE_UIBANGBOOUAVTABBTNWIDGETCONTROLLER_ISPERFECT_OFFSET UNITYSDK_OFFSET(0x1646AC90)
#define MOLEMOLE_UIBANGBOOUAVTABBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16469B00)
#define MOLEMOLE_UIBANGBOOUAVTABBTNWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x16469C00)
#define MOLEMOLE_UIBANGBOOUAVTABBTNWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1646B1B0)
#define MOLEMOLE_UIBANGBOOUAVTABBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1646B1C0)
#define MOLEMOLE_UIBANGBOOUAVTABBTNWIDGETCONTROLLER___BASE_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1646B290)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangBooUAVTabBtnWidgetController_TypeDefinitionIndex = 81660;

	class UIBangBooUAVTabBtnWidgetController : public ::MoleMole::UITowerDefenseTabBtnWidgetController
	{
	public:
		::Class_2_A601D11EE974378B* _view; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVTABBTNWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVTABBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void RefreshView(::System::Int32 levelid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVTABBTNWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, levelid);
		}

		::System::String* GetRankStr(::System::Int32 levelid)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVTABBTNWIDGETCONTROLLER_GETRANKSTR_OFFSET))(this, levelid);
		}

		::Foundation::AssetPath GetRankStrIcon(::System::Int32 levelid)
		{
			return ((::Foundation::AssetPath(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVTABBTNWIDGETCONTROLLER_GETRANKSTRICON_OFFSET))(this, levelid);
		}

		::System::Boolean IsPerfect(::System::Int32 levelid)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVTABBTNWIDGETCONTROLLER_ISPERFECT_OFFSET))(this, levelid);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVTABBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_RefreshView(::System::Int32 P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVTABBTNWIDGETCONTROLLER___BASE_REFRESHVIEW_OFFSET))(this, P0);
		}
	};
}
