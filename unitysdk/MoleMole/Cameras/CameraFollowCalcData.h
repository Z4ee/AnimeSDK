#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define MOLEMOLE_CAMERAS_CAMERAFOLLOWCALCDATA_GET_ANCHORELEVATION_OFFSET UNITYSDK_OFFSET(0x48E380)
#define MOLEMOLE_CAMERAS_CAMERAFOLLOWCALCDATA_GET_ANCHORPOLAR_OFFSET UNITYSDK_OFFSET(0x3EA130)
#define MOLEMOLE_CAMERAS_CAMERAFOLLOWCALCDATA_GET_FINALANCHORELEVATIONRATIO_OFFSET UNITYSDK_OFFSET(0x79A450)
#define MOLEMOLE_CAMERAS_CAMERAFOLLOWCALCDATA_GET_FINALRADIUSAPPEND_OFFSET UNITYSDK_OFFSET(0x79A460)
#define MOLEMOLE_CAMERAS_CAMERAFOLLOWCALCDATA_GET_ROTATIONCAMZDELTA_OFFSET UNITYSDK_OFFSET(0x4900E0)
#define MOLEMOLE_CAMERAS_CAMERAFOLLOWCALCDATA_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x79A490)
#define MOLEMOLE_CAMERAS_CAMERAFOLLOWCALCDATA_METHOD_2_E107726B9FF92036_OFFSET UNITYSDK_OFFSET(0x79A480)
#define MOLEMOLE_CAMERAS_CAMERAFOLLOWCALCDATA_SET_ANCHORELEVATION_OFFSET UNITYSDK_OFFSET(0x79A440)
#define MOLEMOLE_CAMERAS_CAMERAFOLLOWCALCDATA_SET_ANCHORPOLAR_OFFSET UNITYSDK_OFFSET(0x79A430)
#define MOLEMOLE_CAMERAS_CAMERAFOLLOWCALCDATA_SET_ROTATIONCAMZDELTA_OFFSET UNITYSDK_OFFSET(0x4900F0)
#define MOLEMOLE_CAMERAS_CAMERAFOLLOWCALCDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x79A470)
#define MOLEMOLE_CAMERAS_CAMERAFOLLOWCALCDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x12AFAAB0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int CameraFollowCalcData_TypeDefinitionIndex = 54467;

	struct alignas(4) CameraFollowCalcData
	{
		static ::MoleMole::Cameras::CameraFollowCalcData* StaticGet_Default()
		{
			return (::MoleMole::Cameras::CameraFollowCalcData*)Il2CppClass::FromTypeDefinitionIndex(CameraFollowCalcData_TypeDefinitionIndex)->GetStaticField(0x10F40);
		}
		::System::Single cameraFov; // 0x10
		::System::Single cameraLocateRatio; // 0x14
		::System::Single anchorRadiusAppend; // 0x18
		::System::Single anchorRadius; // 0x1C
		::System::Single _anchorPolar; // 0x20
		::System::Single _anchorElevationRatio; // 0x24
		::System::Single anchorOverrunElevationRatioDelta; // 0x28
		::System::Single anchorElevationDeltaRatio; // 0x2C
		::UnityEngine::Vector3 camPosOffsetDelta; // 0x30
		::System::Single _rotationCamZDelta; // 0x3C
		::UnityEngine::Vector3 lookAtPositionOffset; // 0x40
		::UnityEngine::Vector3 followPositionOffset; // 0x4C

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAFOLLOWCALCDATA__CCTOR_OFFSET))();
		}

		::System::Void set_anchorPolar(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAFOLLOWCALCDATA_SET_ANCHORPOLAR_OFFSET))(this, a1);
		}

		::System::Single get_anchorPolar()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAFOLLOWCALCDATA_GET_ANCHORPOLAR_OFFSET))(this);
		}

		::System::Single get_anchorElevation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAFOLLOWCALCDATA_GET_ANCHORELEVATION_OFFSET))(this);
		}

		::System::Void set_anchorElevation(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAFOLLOWCALCDATA_SET_ANCHORELEVATION_OFFSET))(this, a1);
		}

		::System::Single get_FinalAnchorElevationRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAFOLLOWCALCDATA_GET_FINALANCHORELEVATIONRATIO_OFFSET))(this);
		}

		::System::Void set_rotationCamZDelta(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAFOLLOWCALCDATA_SET_ROTATIONCAMZDELTA_OFFSET))(this, a1);
		}

		::System::Single get_rotationCamZDelta()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAFOLLOWCALCDATA_GET_ROTATIONCAMZDELTA_OFFSET))(this);
		}

		::System::Single get_finalRadiusAppend()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAFOLLOWCALCDATA_GET_FINALRADIUSAPPEND_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAFOLLOWCALCDATA_TOSTRING_OFFSET))(this);
		}

		::System::Void Method_2_E107726B9FF92036(::MoleMole::Cameras::CameraFollowCalcData& a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraFollowCalcData&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAFOLLOWCALCDATA_METHOD_2_E107726B9FF92036_OFFSET))(this, a1);
		}

		::System::String* Method_2_35EA095E1AFDD9C8()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAFOLLOWCALCDATA_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
		}
	};
}
