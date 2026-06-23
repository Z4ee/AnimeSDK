#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGalgamePageController_ZoomType.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_STAGEZOOMINFO_SETBGPARAM_OFFSET UNITYSDK_OFFSET(0x166E9BC0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_STAGEZOOMINFO_SETRTCAMERAPARAM_OFFSET UNITYSDK_OFFSET(0x166E9B70)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_STAGEZOOMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x166E9B60)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController_StageZoomInfo_TypeDefinitionIndex = 54870;

	class UIGalgamePageController_StageZoomInfo : public ::System::Object
	{
	public:
		::MoleMole::UIGalgamePageController_ZoomType cameraZoomType; // 0x10
		::MoleMole::UIGalgamePageController_ZoomType bgZoomType; // 0x14
		::System::Int32 stageNodeIdx; // 0x18

		::System::Void _ctor(::System::Int32 nodeIdx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_STAGEZOOMINFO__CTOR_OFFSET))(this, nodeIdx);
		}

		::System::Void SetRTCameraParam(::MoleMole::UIGalgamePageController_ZoomType type)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGalgamePageController_ZoomType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_STAGEZOOMINFO_SETRTCAMERAPARAM_OFFSET))(this, type);
		}

		::System::Void SetBGParam(::MoleMole::UIGalgamePageController_ZoomType type)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGalgamePageController_ZoomType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_STAGEZOOMINFO_SETBGPARAM_OFFSET))(this, type);
		}
	};
}
