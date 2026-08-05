#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_A6C17C8DDACC49CF;
class Class_2_754022533D501C3E_7;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIStrategyGuideRoleCardRowWidgetController; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UISTRATEGYGUIDERECOMMENDTEAMWIDGETCONTROLLER_CLEARROLECARDROWS_OFFSET UNITYSDK_OFFSET(0x1847B0F0)
#define MOLEMOLE_UISTRATEGYGUIDERECOMMENDTEAMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1847AFD0)
#define MOLEMOLE_UISTRATEGYGUIDERECOMMENDTEAMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1847B310)
#define MOLEMOLE_UISTRATEGYGUIDERECOMMENDTEAMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1847B060)
#define MOLEMOLE_UISTRATEGYGUIDERECOMMENDTEAMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1847AF70)
#define MOLEMOLE_UISTRATEGYGUIDERECOMMENDTEAMWIDGETCONTROLLER_REFRESHAVATARLISTROOT_OFFSET UNITYSDK_OFFSET(0x1847BA80)
#define MOLEMOLE_UISTRATEGYGUIDERECOMMENDTEAMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1847C000)
#define MOLEMOLE_UISTRATEGYGUIDERECOMMENDTEAMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1847C090)
#define MOLEMOLE_UISTRATEGYGUIDERECOMMENDTEAMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1847C120)
#define MOLEMOLE_UISTRATEGYGUIDERECOMMENDTEAMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1847C1C0)
#define MOLEMOLE_UISTRATEGYGUIDERECOMMENDTEAMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1847C250)

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyGuideRecommendTeamWidgetController_TypeDefinitionIndex = 59537;

	class UIStrategyGuideRecommendTeamWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_754022533D501C3E_7* _view; // 0x2F0
		::System::Collections::Generic::List_1<::MoleMole::UIStrategyGuideRoleCardRowWidgetController*>* _roleCardRowWidgets; // 0x2F8
		::Class_1_A6C17C8DDACC49CF* _currentCtx; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDERECOMMENDTEAMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDERECOMMENDTEAMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDERECOMMENDTEAMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDERECOMMENDTEAMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDERECOMMENDTEAMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void ClearRoleCardRows()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDERECOMMENDTEAMWIDGETCONTROLLER_CLEARROLECARDROWS_OFFSET))(this);
		}

		::System::Void RefreshAvatarListRoot(::Class_1_A6C17C8DDACC49CF* ctx)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A6C17C8DDACC49CF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDERECOMMENDTEAMWIDGETCONTROLLER_REFRESHAVATARLISTROOT_OFFSET))(this, ctx);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDERECOMMENDTEAMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDERECOMMENDTEAMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDERECOMMENDTEAMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDERECOMMENDTEAMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
