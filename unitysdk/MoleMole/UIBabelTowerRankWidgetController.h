#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_5E2FBACADDB625B7_3;
namespace MoleMole { class BabelTowerRankConfig; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER_GETRANKTRANSFORM_OFFSET UNITYSDK_OFFSET(0x18C7D980)
#define MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER_HIDEALL_OFFSET UNITYSDK_OFFSET(0x18C7D700)
#define MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18C7D010)
#define MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18C7D0A0)
#define MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18C7CE90)
#define MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18C7CFA0)
#define MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER_REFRESHRANKANIMATIONUP_OFFSET UNITYSDK_OFFSET(0x18C7D510)
#define MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER_REFRESHRANKANIMATION_OFFSET UNITYSDK_OFFSET(0x18C7D120)
#define MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER_REFRESHRANK_OFFSET UNITYSDK_OFFSET(0x18C7D2F0)
#define MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18C7DB80)
#define MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18C7DBE0)
#define MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18C7DC70)
#define MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18C7DD00)
#define MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18C7DD90)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabelTowerRankWidgetController_TypeDefinitionIndex = 85646;

	class UIBabelTowerRankWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_5E2FBACADDB625B7_3* _view; // 0x2C0
		::MoleMole::BabelTowerRankConfig* config; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshRankAnimation(::System::Int32 lastRank, ::System::Int32 rank)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER_REFRESHRANKANIMATION_OFFSET))(this, lastRank, rank);
		}

		::System::Single RefreshRankAnimationUp(::System::Int32 lastRank, ::System::Int32 rank)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER_REFRESHRANKANIMATIONUP_OFFSET))(this, lastRank, rank);
		}

		::UnityEngine::Transform* GetRankTransform(::System::Int32 rank)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER_GETRANKTRANSFORM_OFFSET))(this, rank);
		}

		::System::Void RefreshRank(::System::Int32 rank)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER_REFRESHRANK_OFFSET))(this, rank);
		}

		::System::Void HideAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER_HIDEALL_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
