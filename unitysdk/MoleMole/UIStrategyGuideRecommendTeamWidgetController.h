#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_A6C17C8DDACC49CF;
class Class_2_754022533D501C3E_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIStrategyGuideRoleCardRowWidgetController; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UISTRATEGYGUIDERECOMMENDTEAMWIDGETCONTROLLER_CLEARROLECARDROWS_OFFSET UNITYSDK_OFFSET(0x1267D300)
#define MOLEMOLE_UISTRATEGYGUIDERECOMMENDTEAMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1267D1E0)
#define MOLEMOLE_UISTRATEGYGUIDERECOMMENDTEAMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1267D520)
#define MOLEMOLE_UISTRATEGYGUIDERECOMMENDTEAMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1267D270)
#define MOLEMOLE_UISTRATEGYGUIDERECOMMENDTEAMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1267D180)
#define MOLEMOLE_UISTRATEGYGUIDERECOMMENDTEAMWIDGETCONTROLLER_REFRESHAVATARLISTROOT_OFFSET UNITYSDK_OFFSET(0x1267DC50)
#define MOLEMOLE_UISTRATEGYGUIDERECOMMENDTEAMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1267E160)
#define MOLEMOLE_UISTRATEGYGUIDERECOMMENDTEAMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1267E1F0)
#define MOLEMOLE_UISTRATEGYGUIDERECOMMENDTEAMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1267E280)
#define MOLEMOLE_UISTRATEGYGUIDERECOMMENDTEAMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1267E320)
#define MOLEMOLE_UISTRATEGYGUIDERECOMMENDTEAMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1267E3B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyGuideRecommendTeamWidgetController_TypeDefinitionIndex = 39056;

	class UIStrategyGuideRecommendTeamWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_754022533D501C3E_1* _view; // 0x2E8
		::System::Collections::Generic::List_1<::MoleMole::UIStrategyGuideRoleCardRowWidgetController*>* _roleCardRowWidgets; // 0x2F0
		::Class_1_A6C17C8DDACC49CF* _currentCtx; // 0x2F8

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
