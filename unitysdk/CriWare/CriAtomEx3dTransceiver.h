#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriDisposable.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace CriWare { class CriAtomEx3dRegion; }
namespace System { class String; }

#define CRIWARE_CRIATOMEX3DTRANSCEIVER_ATTACHAISAC_OFFSET UNITYSDK_OFFSET(0x1CB86310)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_DETACHAISAC_OFFSET UNITYSDK_OFFSET(0x1CB86450)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1CB85550)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CB85540)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1CB86CD0)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_GET_NATIVEHANDLE_OFFSET UNITYSDK_OFFSET(0x1CB856F0)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_SET3DREGION_OFFSET UNITYSDK_OFFSET(0x1CB86BB0)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_SETDISTANCEAISACCONTROLID_OFFSET UNITYSDK_OFFSET(0x1CB866B0)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_SETINPUTCROSSFADEFIELD_OFFSET UNITYSDK_OFFSET(0x1CB860B0)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_SETINPUTORIENTATION_OFFSET UNITYSDK_OFFSET(0x1CB85A40)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_SETINPUTPOSITION_OFFSET UNITYSDK_OFFSET(0x1CB85800)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_SETLISTENERBASEDAZIMUTHANGLEAISACCONTROLID_OFFSET UNITYSDK_OFFSET(0x1CB867B0)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_SETLISTENERBASEDELEVATIONANGLEAISACCONTROLID_OFFSET UNITYSDK_OFFSET(0x1CB868B0)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_SETMAXANGLEAISACDELTA_OFFSET UNITYSDK_OFFSET(0x1CB86590)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_SETOUTPUTCONEPARAMETER_OFFSET UNITYSDK_OFFSET(0x1CB85CC0)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_SETOUTPUTINTERIORPANFIELD_OFFSET UNITYSDK_OFFSET(0x1CB85F70)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_SETOUTPUTMINMAXDISTANCE_OFFSET UNITYSDK_OFFSET(0x1CB85E30)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_SETOUTPUTORIENTATION_OFFSET UNITYSDK_OFFSET(0x1CB85B80)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_SETOUTPUTPOSITION_OFFSET UNITYSDK_OFFSET(0x1CB85920)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_SETOUTPUTVOLUME_OFFSET UNITYSDK_OFFSET(0x1CB861F0)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_SETTRANSCEIVEROUTPUTBASEDAZIMUTHANGLEAISACCONTROLID_OFFSET UNITYSDK_OFFSET(0x1CB869B0)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_SETTRANSCEIVEROUTPUTBASEDELEVATIONANGLEAISACCONTROLID_OFFSET UNITYSDK_OFFSET(0x1CB86AB0)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1CB85700)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB853E0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx3dTransceiver_TypeDefinitionIndex = 38716;

	class CriAtomEx3dTransceiver : public ::CriWare::CriDisposable
	{
	public:
		::System::IntPtr handle; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::IntPtr get_nativeHandle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_GET_NATIVEHANDLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_UPDATE_OFFSET))(this);
		}

		::System::Void SetInputPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_SETINPUTPOSITION_OFFSET))(this, a1);
		}

		::System::Void SetOutputPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_SETOUTPUTPOSITION_OFFSET))(this, a1);
		}

		::System::Void SetInputOrientation(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_SETINPUTORIENTATION_OFFSET))(this, a1, a2);
		}

		::System::Void SetOutputOrientation(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_SETOUTPUTORIENTATION_OFFSET))(this, a1, a2);
		}

		::System::Void SetOutputConeParameter(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_SETOUTPUTCONEPARAMETER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetOutputMinMaxDistance(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_SETOUTPUTMINMAXDISTANCE_OFFSET))(this, a1, a2);
		}

		::System::Void SetOutputInteriorPanField(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_SETOUTPUTINTERIORPANFIELD_OFFSET))(this, a1, a2);
		}

		::System::Void SetInputCrossFadeField(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_SETINPUTCROSSFADEFIELD_OFFSET))(this, a1, a2);
		}

		::System::Void SetOutputVolume(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_SETOUTPUTVOLUME_OFFSET))(this, a1);
		}

		::System::Void AttachAisac(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_ATTACHAISAC_OFFSET))(this, a1);
		}

		::System::Void DetachAisac(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_DETACHAISAC_OFFSET))(this, a1);
		}

		::System::Void SetMaxAngleAisacDelta(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_SETMAXANGLEAISACDELTA_OFFSET))(this, a1);
		}

		::System::Void SetDistanceAisacControlId(::System::UInt16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_SETDISTANCEAISACCONTROLID_OFFSET))(this, a1);
		}

		::System::Void SetListenerBasedAzimuthAngleAisacControlId(::System::UInt16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_SETLISTENERBASEDAZIMUTHANGLEAISACCONTROLID_OFFSET))(this, a1);
		}

		::System::Void SetListenerBasedElevationAngleAisacControlId(::System::UInt16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_SETLISTENERBASEDELEVATIONANGLEAISACCONTROLID_OFFSET))(this, a1);
		}

		::System::Void SetTransceiverOutputBasedAzimuthAngleAisacControlId(::System::UInt16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_SETTRANSCEIVEROUTPUTBASEDAZIMUTHANGLEAISACCONTROLID_OFFSET))(this, a1);
		}

		::System::Void SetTransceiverOutputBasedElevationAngleAisacControlId(::System::UInt16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_SETTRANSCEIVEROUTPUTBASEDELEVATIONANGLEAISACCONTROLID_OFFSET))(this, a1);
		}

		::System::Void Set3dRegion(::CriWare::CriAtomEx3dRegion* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomEx3dRegion*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_SET3DREGION_OFFSET))(this, a1);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_FINALIZE_OFFSET))(this);
		}
	};
}
