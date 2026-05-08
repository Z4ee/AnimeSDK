#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CameraOrbit.h"
#include "unitysdk/MoleMole/DefaultCameraElevationTrack.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Cameras { class CameraMiscSetting; }
namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace MoleMole::Cameras { class CameraTrackSetting; }
namespace System { class String; }

#define MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_GET_BLENDINCURVE_OFFSET UNITYSDK_OFFSET(0x1742CBA0)
#define MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_GET_BLENDINDURATION_OFFSET UNITYSDK_OFFSET(0x1742CA80)
#define MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_GET_BLENDOUTCURVE_OFFSET UNITYSDK_OFFSET(0x1742CC20)
#define MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_GET_BLENDOUTDURATION_OFFSET UNITYSDK_OFFSET(0x1742CB10)
#define MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_GET_CAMERAFOLLOWOFFSET_OFFSET UNITYSDK_OFFSET(0x1742BFA0)
#define MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_GET_CAMERAFOV_OFFSET UNITYSDK_OFFSET(0x1742BE60)
#define MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_GET_CAMERALOOKATOFFSET_OFFSET UNITYSDK_OFFSET(0x1742C100)
#define MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_GET_CAMERAORBITS_OFFSET UNITYSDK_OFFSET(0x1742C260)
#define MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_GET_SCREENYTRACK_OFFSET UNITYSDK_OFFSET(0x1742C780)
#define MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_GET_TAG_OFFSET UNITYSDK_OFFSET(0x1742BDE0)
#define MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_GET_TOPCURVATURE_OFFSET UNITYSDK_OFFSET(0x1742C5C0)
#define MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_GET_TOPORBIT_OFFSET UNITYSDK_OFFSET(0x1742C410)
#define MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_SET_BLENDINCURVE_OFFSET UNITYSDK_OFFSET(0x1742CBC0)
#define MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_SET_BLENDINDURATION_OFFSET UNITYSDK_OFFSET(0x1742CAA0)
#define MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_SET_BLENDOUTCURVE_OFFSET UNITYSDK_OFFSET(0x1742CC40)
#define MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_SET_BLENDOUTDURATION_OFFSET UNITYSDK_OFFSET(0x1742CB30)
#define MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_SET_CAMERAFOLLOWOFFSET_OFFSET UNITYSDK_OFFSET(0x1742C050)
#define MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_SET_CAMERAFOV_OFFSET UNITYSDK_OFFSET(0x1742BF00)
#define MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_SET_CAMERALOOKATOFFSET_OFFSET UNITYSDK_OFFSET(0x1742C1B0)
#define MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_SET_CAMERAORBITS_OFFSET UNITYSDK_OFFSET(0x1742C330)
#define MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_SET_SCREENYTRACK_OFFSET UNITYSDK_OFFSET(0x1742C8D0)
#define MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_SET_TOPCURVATURE_OFFSET UNITYSDK_OFFSET(0x1742C690)
#define MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_SET_TOPORBIT_OFFSET UNITYSDK_OFFSET(0x1742C4E0)
#define MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1742CCA0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int CameraOverrideTrackEntry_TypeDefinitionIndex = 48252;

	class CameraOverrideTrackEntry : public ::System::Object
	{
	public:
		::System::Int32 priority; // 0x10
		::MoleMole::Cameras::CameraTrackSetting* trackSetting; // 0x18
		::MoleMole::Cameras::CameraMiscSetting* miscSetting; // 0x20
		::MoleMole::Cameras::CameraTrackBlending* blendIn; // 0x28
		::MoleMole::Cameras::CameraTrackBlending* blendOut; // 0x30
		::System::String* tag; // 0x38
		::System::Boolean clearTracks; // 0x40
		::Il2CppArray<::System::String*>* clearTags; // 0x48
		::System::Single duration; // 0x50
		::System::Boolean ignoreWorldTimeScale; // 0x54
		::System::Boolean ignoreOwnerTimeScale; // 0x55
		::System::Boolean ignoreLocalAvatar; // 0x56

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY__CTOR_OFFSET))(this);
		}

		::System::String* get_Tag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_GET_TAG_OFFSET))(this);
		}

		::System::Single get_CameraFOV()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_GET_CAMERAFOV_OFFSET))(this);
		}

		::System::Void set_CameraFOV(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_SET_CAMERAFOV_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_CameraFollowOffset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_GET_CAMERAFOLLOWOFFSET_OFFSET))(this);
		}

		::System::Void set_CameraFollowOffset(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_SET_CAMERAFOLLOWOFFSET_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_CameraLookAtOffset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_GET_CAMERALOOKATOFFSET_OFFSET))(this);
		}

		::System::Void set_CameraLookAtOffset(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_SET_CAMERALOOKATOFFSET_OFFSET))(this, value);
		}

		::Il2CppArray<::MoleMole::CameraOrbit>* get_CameraOrbits()
		{
			return ((::Il2CppArray<::MoleMole::CameraOrbit>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_GET_CAMERAORBITS_OFFSET))(this);
		}

		::System::Void set_CameraOrbits(::Il2CppArray<::MoleMole::CameraOrbit>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MoleMole::CameraOrbit>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_SET_CAMERAORBITS_OFFSET))(this, value);
		}

		::MoleMole::CameraOrbit get_TopOrbit()
		{
			return ((::MoleMole::CameraOrbit(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_GET_TOPORBIT_OFFSET))(this);
		}

		::System::Void set_TopOrbit(::MoleMole::CameraOrbit value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::CameraOrbit))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_SET_TOPORBIT_OFFSET))(this, value);
		}

		::System::Single get_TopCurvature()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_GET_TOPCURVATURE_OFFSET))(this);
		}

		::System::Void set_TopCurvature(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_SET_TOPCURVATURE_OFFSET))(this, value);
		}

		::MoleMole::DefaultCameraElevationTrack get_ScreenYTrack()
		{
			return ((::MoleMole::DefaultCameraElevationTrack(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_GET_SCREENYTRACK_OFFSET))(this);
		}

		::System::Void set_ScreenYTrack(::MoleMole::DefaultCameraElevationTrack value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::DefaultCameraElevationTrack))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_SET_SCREENYTRACK_OFFSET))(this, value);
		}

		::System::Single get_BlendInDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_GET_BLENDINDURATION_OFFSET))(this);
		}

		::System::Void set_BlendInDuration(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_SET_BLENDINDURATION_OFFSET))(this, value);
		}

		::System::Single get_BlendOutDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_GET_BLENDOUTDURATION_OFFSET))(this);
		}

		::System::Void set_BlendOutDuration(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_SET_BLENDOUTDURATION_OFFSET))(this, value);
		}

		::System::String* get_BlendInCurve()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_GET_BLENDINCURVE_OFFSET))(this);
		}

		::System::Void set_BlendInCurve(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_SET_BLENDINCURVE_OFFSET))(this, value);
		}

		::System::String* get_BlendOutCurve()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_GET_BLENDOUTCURVE_OFFSET))(this);
		}

		::System::Void set_BlendOutCurve(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_SET_BLENDOUTCURVE_OFFSET))(this, value);
		}
	};
}
