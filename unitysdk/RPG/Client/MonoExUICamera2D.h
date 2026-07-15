#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoExUICamera.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoUI3DTouch; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class CanvasScaler; }

#define RPG_CLIENT_MONOEXUICAMERA2D_INITCANVASRANGE_OFFSET UNITYSDK_OFFSET(0x18C40A80)
#define RPG_CLIENT_MONOEXUICAMERA2D_INIT_OFFSET UNITYSDK_OFFSET(0x18C3FC60)
#define RPG_CLIENT_MONOEXUICAMERA2D_MANUALUPDATE_OFFSET UNITYSDK_OFFSET(0x18C400C0)
#define RPG_CLIENT_MONOEXUICAMERA2D_SETENABLEMOVE_OFFSET UNITYSDK_OFFSET(0x18C3FE70)
#define RPG_CLIENT_MONOEXUICAMERA2D_SETENABLEZOOM_OFFSET UNITYSDK_OFFSET(0x18C3FEE0)
#define RPG_CLIENT_MONOEXUICAMERA2D_SETLOCKPOSITIONANDZOOM_OFFSET UNITYSDK_OFFSET(0x18C3FF50)
#define RPG_CLIENT_MONOEXUICAMERA2D__CONVERTSCALEFROMPOSZ_OFFSET UNITYSDK_OFFSET(0x18C40AD0)
#define RPG_CLIENT_MONOEXUICAMERA2D__CTOR_OFFSET UNITYSDK_OFFSET(0x18C40BB0)
#define RPG_CLIENT_MONOEXUICAMERA2D__INITEXUICAMERA_OFFSET UNITYSDK_OFFSET(0x18C3FCB0)
#define RPG_CLIENT_MONOEXUICAMERA2D__UPDATECONTENTRECT_OFFSET UNITYSDK_OFFSET(0x18C40510)
#define RPG_CLIENT_MONOEXUICAMERA2D__UPDATECONTENTZOOM_OFFSET UNITYSDK_OFFSET(0x18C407F0)
#define RPG_CLIENT_MONOEXUICAMERA2D__UPDATEPARAM_OFFSET UNITYSDK_OFFSET(0x18C401E0)
#define RPG_CLIENT_MONOEXUICAMERA2D__UPDATEPOSITION_OFFSET UNITYSDK_OFFSET(0x18C402C0)
#define RPG_CLIENT_MONOEXUICAMERA2D__UPDATESWIPESPEEDRATIO_OFFSET UNITYSDK_OFFSET(0x18C40890)
#define RPG_CLIENT_MONOEXUICAMERA2D__UPDATE_OFFSET UNITYSDK_OFFSET(0x18C40110)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoExUICamera2D_TypeDefinitionIndex = 69661;

	class MonoExUICamera2D : public ::RPG::Client::MonoExUICamera
	{
	public:
		::System::Single MinScale; // 0x1A8
		::System::Single MaxScale; // 0x1AC
		::System::Single SwipeSpeedRatio; // 0x1B0
		::System::Single InnerRegionRatioX; // 0x1B4
		::System::Single InnerRegionRatioY; // 0x1B8
		::System::Single OuterRegionRatioX; // 0x1BC
		::System::Single OuterRegionRatioY; // 0x1C0
		::System::Single ZoomBasic; // 0x1C4
		::System::Single ZoomRatio; // 0x1C8
		::System::Single ZoomMaxZ; // 0x1CC
		::UnityEngine::RectTransform* _2DContent; // 0x1D0
		::RPG::Client::MonoExUICamera* _ExUICamera; // 0x1D8
		::RPG::Client::MonoUI3DTouch* _UI3DTouch; // 0x1E0
		::UnityEngine::UI::CanvasScaler* _CanvasScaler; // 0x1E8
		::System::Boolean _ForceLock; // 0x1F0
		::UnityEngine::Vector3 _LockTargetPosition; // 0x1F4
		::System::Single _LockTargetScale; // 0x200

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA2D__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA2D_INIT_OFFSET))(this);
		}

		::System::Void SetEnableMove(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA2D_SETENABLEMOVE_OFFSET))(this, a1);
		}

		::System::Void SetEnableZoom(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA2D_SETENABLEZOOM_OFFSET))(this, a1);
		}

		::System::Void SetLockPositionAndZoom(::System::Boolean a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA2D_SETLOCKPOSITIONANDZOOM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ManualUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA2D_MANUALUPDATE_OFFSET))(this);
		}

		::System::Void _Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA2D__UPDATE_OFFSET))(this);
		}

		::System::Void _UpdateParam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA2D__UPDATEPARAM_OFFSET))(this);
		}

		::System::Void InitCanvasRange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA2D_INITCANVASRANGE_OFFSET))(this);
		}

		::System::Void _UpdateContentRect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA2D__UPDATECONTENTRECT_OFFSET))(this);
		}

		::System::Void _UpdateContentZoom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA2D__UPDATECONTENTZOOM_OFFSET))(this);
		}

		::System::Void _UpdateSwipeSpeedRatio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA2D__UPDATESWIPESPEEDRATIO_OFFSET))(this);
		}

		::System::Void _InitExUICamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA2D__INITEXUICAMERA_OFFSET))(this);
		}

		::System::Void _UpdatePosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA2D__UPDATEPOSITION_OFFSET))(this);
		}

		::System::Single _ConvertScaleFromPosZ(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA2D__CONVERTSCALEFROMPOSZ_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
