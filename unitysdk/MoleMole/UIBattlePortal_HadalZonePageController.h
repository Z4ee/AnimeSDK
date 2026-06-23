#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_5DA2E7556103D5A3_399;
class Class_2_E75CF23561770A7A_1;
namespace MoleMole { class UIBattlePortal_HadalZoneConfig; }
namespace MoleMole { class UIControlReference; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x187CC910)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x187CC920)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x187CD540)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x187CC9B0)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x187CDB90)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER__FETCHTYPEDZONES_OFFSET UNITYSDK_OFFSET(0x187CCAE0)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER__ONUIINIT_B__4_0_OFFSET UNITYSDK_OFFSET(0x187CDBA0)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER__UPDATEDYNAMICZONE_OFFSET UNITYSDK_OFFSET(0x187CD7F0)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER__UPDATEONEFIXEDZONE_OFFSET UNITYSDK_OFFSET(0x187CD5B0)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER__UPDATEZONES_OFFSET UNITYSDK_OFFSET(0x187CD0A0)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x187CDCA0)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x187CDD30)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x187CDD40)

namespace MoleMole
{
	inline static constexpr unsigned int UIBattlePortal_HadalZonePageController_TypeDefinitionIndex = 77131;

	class UIBattlePortal_HadalZonePageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_E75CF23561770A7A_1* _view; // 0x318
		::System::Int32 _pageIndex; // 0x320
		::System::Int32 _prePageFixedItemCount; // 0x324
		::System::Collections::Generic::List_1<::Class_1_5DA2E7556103D5A3_399*>* _fixedZoneLayers; // 0x328
		::System::Collections::Generic::List_1<::Class_1_5DA2E7556103D5A3_399*>* _dynamicZoneLayers; // 0x330
		::MoleMole::UIBattlePortal_HadalZoneConfig* _pageWidgetsConfigs; // 0x338

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void _FetchTypedZones()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER__FETCHTYPEDZONES_OFFSET))(this);
		}

		::System::Void _UpdateZones()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER__UPDATEZONES_OFFSET))(this);
		}

		::System::Void _UpdateOneFixedZone(::UnityEngine::GameObject* itemObject, ::Class_1_5DA2E7556103D5A3_399* info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::Class_1_5DA2E7556103D5A3_399*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER__UPDATEONEFIXEDZONE_OFFSET))(this, itemObject, info);
		}

		::System::Void _UpdateDynamicZone(::UnityEngine::GameObject* itemObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER__UPDATEDYNAMICZONE_OFFSET))(this, itemObject);
		}

		::System::Void _OnUIInit_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER__ONUIINIT_B__4_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
