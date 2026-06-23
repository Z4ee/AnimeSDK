#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_60638234271CCDB8_117;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHollowMissionGuidePointWidgetController; }
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }

#define MOLEMOLE_UIHOLLOWMISSIONGUIDEWIDGETCONTROLLER_ADDTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x16BC4B60)
#define MOLEMOLE_UIHOLLOWMISSIONGUIDEWIDGETCONTROLLER_CREATEMISSIONGUIDEPOINT_OFFSET UNITYSDK_OFFSET(0x16BC44C0)
#define MOLEMOLE_UIHOLLOWMISSIONGUIDEWIDGETCONTROLLER_HIDEALL_OFFSET UNITYSDK_OFFSET(0x16BC5000)
#define MOLEMOLE_UIHOLLOWMISSIONGUIDEWIDGETCONTROLLER_HIDEMISSIONGUIDEPOINT_OFFSET UNITYSDK_OFFSET(0x16BC5210)
#define MOLEMOLE_UIHOLLOWMISSIONGUIDEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16BC48C0)
#define MOLEMOLE_UIHOLLOWMISSIONGUIDEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16BC4950)
#define MOLEMOLE_UIHOLLOWMISSIONGUIDEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16BC43B0)
#define MOLEMOLE_UIHOLLOWMISSIONGUIDEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16BC4850)
#define MOLEMOLE_UIHOLLOWMISSIONGUIDEWIDGETCONTROLLER_REMOVETARGETENTITY_OFFSET UNITYSDK_OFFSET(0x16BC4E40)
#define MOLEMOLE_UIHOLLOWMISSIONGUIDEWIDGETCONTROLLER_SHOWMISSIONGUIDEPOINT_OFFSET UNITYSDK_OFFSET(0x16BC5150)
#define MOLEMOLE_UIHOLLOWMISSIONGUIDEWIDGETCONTROLLER_TICK_OFFSET UNITYSDK_OFFSET(0x16BC49D0)
#define MOLEMOLE_UIHOLLOWMISSIONGUIDEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16BC5270)
#define MOLEMOLE_UIHOLLOWMISSIONGUIDEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16BC5360)
#define MOLEMOLE_UIHOLLOWMISSIONGUIDEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16BC53F0)
#define MOLEMOLE_UIHOLLOWMISSIONGUIDEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16BC5480)
#define MOLEMOLE_UIHOLLOWMISSIONGUIDEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16BC5510)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMissionGuideWidgetController_TypeDefinitionIndex = 62137;

	class UIHollowMissionGuideWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::Int32 Init_SHOW = 0x1; // 0x0
		// static const ::System::Int32 MAX_SHOW = 0x7FFFFFFF; // 0x0
		::Class_2_60638234271CCDB8_117* _view; // 0x2C0
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _targetEntityIDs; // 0x2C8
		::System::Collections::Generic::List_1<::MoleMole::UIHollowMissionGuidePointWidgetController*>* _guidePointList; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMISSIONGUIDEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMISSIONGUIDEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMISSIONGUIDEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMISSIONGUIDEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMISSIONGUIDEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Tick(::UnityEngine::Camera* cam, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMISSIONGUIDEWIDGETCONTROLLER_TICK_OFFSET))(this, cam, deltaTime);
		}

		::System::Boolean AddTargetEntity(::MoleMole::HollowChessboard::HollowEntity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMISSIONGUIDEWIDGETCONTROLLER_ADDTARGETENTITY_OFFSET))(this, entity);
		}

		::System::Void RemoveTargetEntity(::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMISSIONGUIDEWIDGETCONTROLLER_REMOVETARGETENTITY_OFFSET))(this, entityID);
		}

		::System::Void HideAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMISSIONGUIDEWIDGETCONTROLLER_HIDEALL_OFFSET))(this);
		}

		::System::Void ShowMissionGuidePoint(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMISSIONGUIDEWIDGETCONTROLLER_SHOWMISSIONGUIDEPOINT_OFFSET))(this, args);
		}

		::System::Void HideMissionGuidePoint(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMISSIONGUIDEWIDGETCONTROLLER_HIDEMISSIONGUIDEPOINT_OFFSET))(this, args);
		}

		::MoleMole::UIHollowMissionGuidePointWidgetController* CreateMissionGuidePoint()
		{
			return ((::MoleMole::UIHollowMissionGuidePointWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMISSIONGUIDEWIDGETCONTROLLER_CREATEMISSIONGUIDEPOINT_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMISSIONGUIDEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMISSIONGUIDEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMISSIONGUIDEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMISSIONGUIDEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
