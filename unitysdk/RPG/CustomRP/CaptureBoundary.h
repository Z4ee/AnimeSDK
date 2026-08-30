#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CaptureBoundary_PivotStat.h"
#include "unitysdk/RPG/CustomRP/FrameCaptureType.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"
#include "unitysdk/UnityEngine/RenderTextureReadWrite.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::CustomRP { class CaptureBoundary_FetchTextureDelegate; }
namespace System { class String; }
namespace UnityEngine { class Camera; }

#define RPG_CUSTOMRP_CAPTUREBOUNDARY_BACKUPCAMERA_OFFSET UNITYSDK_OFFSET(0x192B9450)
#define RPG_CUSTOMRP_CAPTUREBOUNDARY_CAPTUREEX_OFFSET UNITYSDK_OFFSET(0x192B9430)
#define RPG_CUSTOMRP_CAPTUREBOUNDARY_CAPTUREIMPL_OFFSET UNITYSDK_OFFSET(0x192B9280)
#define RPG_CUSTOMRP_CAPTUREBOUNDARY_CAPTURE_1_OFFSET UNITYSDK_OFFSET(0x192B9420)
#define RPG_CUSTOMRP_CAPTUREBOUNDARY_CAPTURE_OFFSET UNITYSDK_OFFSET(0x192B9270)
#define RPG_CUSTOMRP_CAPTUREBOUNDARY_CHECKVALID_OFFSET UNITYSDK_OFFSET(0x192B9C50)
#define RPG_CUSTOMRP_CAPTUREBOUNDARY_GET_OUTPUTPATH_OFFSET UNITYSDK_OFFSET(0x192B9260)
#define RPG_CUSTOMRP_CAPTUREBOUNDARY_RECOVERCAMERA_OFFSET UNITYSDK_OFFSET(0x192B9DB0)
#define RPG_CUSTOMRP_CAPTUREBOUNDARY_SETFORMAT_OFFSET UNITYSDK_OFFSET(0x192B9240)
#define RPG_CUSTOMRP_CAPTUREBOUNDARY_SETOUTPUTPATH_OFFSET UNITYSDK_OFFSET(0x192B9250)
#define RPG_CUSTOMRP_CAPTUREBOUNDARY_SETOUTPUTRTSIZE_OFFSET UNITYSDK_OFFSET(0x192B9230)
#define RPG_CUSTOMRP_CAPTUREBOUNDARY_SETSIZE_OFFSET UNITYSDK_OFFSET(0x192B9220)
#define RPG_CUSTOMRP_CAPTUREBOUNDARY_SETUPCAMERA_OFFSET UNITYSDK_OFFSET(0x192B9CA0)
#define RPG_CUSTOMRP_CAPTUREBOUNDARY_UPDATECAMERA_OFFSET UNITYSDK_OFFSET(0x192B9550)
#define RPG_CUSTOMRP_CAPTUREBOUNDARY__CTOR_OFFSET UNITYSDK_OFFSET(0x192B9E80)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CaptureBoundary_TypeDefinitionIndex = 36910;

	class CaptureBoundary : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single Length; // 0x18
		::System::Single Width; // 0x1C
		::System::Single Offset; // 0x20
		::System::Single Top; // 0x24
		::System::Single Bottom; // 0x28
		::UnityEngine::RenderTextureFormat RTFormat; // 0x2C
		::UnityEngine::RenderTextureReadWrite RTReadWrite; // 0x30
		::System::Int32 OutputWidth; // 0x34
		::System::Int32 OutputHeight; // 0x38
		::RPG::CustomRP::CaptureBoundary_PivotStat pivotStat; // 0x3C
		::UnityEngine::Experimental::Rendering::GraphicsFormat OutputFormat; // 0x40
		::System::String* OutputDirectory; // 0x48
		::RPG::CustomRP::CaptureBoundary_FetchTextureDelegate* fetchTextureDelegate; // 0x50
		::System::Boolean DebugCapture; // 0x58
		::System::Boolean alreadyBackup; // 0x59
		::UnityEngine::Vector3 posBackup; // 0x5C
		::UnityEngine::Quaternion rotBackup; // 0x68
		::System::Single farPlaneBackup; // 0x78
		::System::Single nearPlaneBackup; // 0x7C
		::UnityEngine::Vector3 cameraPos; // 0x80
		::UnityEngine::Quaternion cameraRotation; // 0x8C
		::UnityEngine::Vector3 cameraForward; // 0x9C
		::UnityEngine::Vector3 cameraRight; // 0xA8
		::UnityEngine::Vector3 cameraUp; // 0xB4
		::System::Single cameraNear; // 0xC0
		::System::Single cameraFar; // 0xC4
		::UnityEngine::Rect cameraPixelRect; // 0xC8
		::System::Single refDepth; // 0xD8
		::System::Int32 outputWidth; // 0xDC
		::System::Int32 outputHeight; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREBOUNDARY__CTOR_OFFSET))(this);
		}

		::System::Void SetSize(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREBOUNDARY_SETSIZE_OFFSET))(this, a1, a2);
		}

		::System::Void SetOutputRTSize(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREBOUNDARY_SETOUTPUTRTSIZE_OFFSET))(this, a1, a2);
		}

		::System::Void SetFormat(::UnityEngine::RenderTextureFormat a1, ::UnityEngine::RenderTextureReadWrite a2, ::UnityEngine::Experimental::Rendering::GraphicsFormat a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREBOUNDARY_SETFORMAT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetOutputPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREBOUNDARY_SETOUTPUTPATH_OFFSET))(this, a1);
		}

		::System::String* get_OutputPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREBOUNDARY_GET_OUTPUTPATH_OFFSET))(this);
		}

		::System::Void Capture(::RPG::CustomRP::CaptureBoundary_FetchTextureDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CaptureBoundary_FetchTextureDelegate*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREBOUNDARY_CAPTURE_OFFSET))(this, a1);
		}

		::System::Void Capture_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREBOUNDARY_CAPTURE_1_OFFSET))(this);
		}

		::System::Void CaptureEx(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREBOUNDARY_CAPTUREEX_OFFSET))(this, a1);
		}

		::System::Void CaptureImpl(::RPG::CustomRP::FrameCaptureType a1, ::RPG::CustomRP::CaptureBoundary_FetchTextureDelegate* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::FrameCaptureType, ::RPG::CustomRP::CaptureBoundary_FetchTextureDelegate*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREBOUNDARY_CAPTUREIMPL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BackupCamera(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREBOUNDARY_BACKUPCAMERA_OFFSET))(this, a1);
		}

		::System::Void SetupCamera(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREBOUNDARY_SETUPCAMERA_OFFSET))(this, a1);
		}

		::System::Void RecoverCamera(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREBOUNDARY_RECOVERCAMERA_OFFSET))(this, a1);
		}

		::System::Void UpdateCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREBOUNDARY_UPDATECAMERA_OFFSET))(this);
		}

		::System::Boolean CheckValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREBOUNDARY_CHECKVALID_OFFSET))(this);
		}
	};
}
