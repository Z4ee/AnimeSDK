#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriDisposable.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace CriWare { class CriAtomEx3dRegion; }
namespace System { class String; }

#define CRIWARE_CRIATOMEX3DTRANSCEIVER_ATTACHAISAC_OFFSET UNITYSDK_OFFSET(0x1C1DF680)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1C1DEED0)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C1DEEC0)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C1DFAD0)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_SET3DREGION_OFFSET UNITYSDK_OFFSET(0x1C1DFA30)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_SETDISTANCEAISACCONTROLID_OFFSET UNITYSDK_OFFSET(0x1C1DF7B0)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_SETINPUTCROSSFADEFIELD_OFFSET UNITYSDK_OFFSET(0x1C1DF550)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_SETINPUTORIENTATION_OFFSET UNITYSDK_OFFSET(0x1C1DF1F0)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_SETINPUTPOSITION_OFFSET UNITYSDK_OFFSET(0x1C1DF0B0)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_SETLISTENERBASEDAZIMUTHANGLEAISACCONTROLID_OFFSET UNITYSDK_OFFSET(0x1C1DF830)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_SETLISTENERBASEDELEVATIONANGLEAISACCONTROLID_OFFSET UNITYSDK_OFFSET(0x1C1DF8B0)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_SETMAXANGLEAISACDELTA_OFFSET UNITYSDK_OFFSET(0x1C1DF720)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_SETOUTPUTCONEPARAMETER_OFFSET UNITYSDK_OFFSET(0x1C1DF350)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_SETOUTPUTINTERIORPANFIELD_OFFSET UNITYSDK_OFFSET(0x1C1DF4B0)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_SETOUTPUTMINMAXDISTANCE_OFFSET UNITYSDK_OFFSET(0x1C1DF410)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_SETOUTPUTORIENTATION_OFFSET UNITYSDK_OFFSET(0x1C1DF2A0)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_SETOUTPUTPOSITION_OFFSET UNITYSDK_OFFSET(0x1C1DF150)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_SETOUTPUTVOLUME_OFFSET UNITYSDK_OFFSET(0x1C1DF5F0)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_SETTRANSCEIVEROUTPUTBASEDAZIMUTHANGLEAISACCONTROLID_OFFSET UNITYSDK_OFFSET(0x1C1DF930)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_SETTRANSCEIVEROUTPUTBASEDELEVATIONANGLEAISACCONTROLID_OFFSET UNITYSDK_OFFSET(0x1C1DF9B0)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C1DF030)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1DEDD0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx3dTransceiver_TypeDefinitionIndex = 32734;

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

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_UPDATE_OFFSET))(this);
		}

		::System::Void SetInputPosition(::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_SETINPUTPOSITION_OFFSET))(this, position);
		}

		::System::Void SetOutputPosition(::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_SETOUTPUTPOSITION_OFFSET))(this, position);
		}

		::System::Void SetInputOrientation(::UnityEngine::Vector3 front, ::UnityEngine::Vector3 top)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_SETINPUTORIENTATION_OFFSET))(this, front, top);
		}

		::System::Void SetOutputOrientation(::UnityEngine::Vector3 front, ::UnityEngine::Vector3 top)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_SETOUTPUTORIENTATION_OFFSET))(this, front, top);
		}

		::System::Void SetOutputConeParameter(::System::Single insideAngle, ::System::Single outsideAngle, ::System::Single outsideVolume)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_SETOUTPUTCONEPARAMETER_OFFSET))(this, insideAngle, outsideAngle, outsideVolume);
		}

		::System::Void SetOutputMinMaxDistance(::System::Single minDistance, ::System::Single maxDistance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_SETOUTPUTMINMAXDISTANCE_OFFSET))(this, minDistance, maxDistance);
		}

		::System::Void SetOutputInteriorPanField(::System::Single radius, ::System::Single interiorDistance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_SETOUTPUTINTERIORPANFIELD_OFFSET))(this, radius, interiorDistance);
		}

		::System::Void SetInputCrossFadeField(::System::Single directAudioRadius, ::System::Single crossfadeDistance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_SETINPUTCROSSFADEFIELD_OFFSET))(this, directAudioRadius, crossfadeDistance);
		}

		::System::Void SetOutputVolume(::System::Single volume)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_SETOUTPUTVOLUME_OFFSET))(this, volume);
		}

		::System::Void AttachAisac(::System::String* globalAisacName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_ATTACHAISAC_OFFSET))(this, globalAisacName);
		}

		::System::Void SetMaxAngleAisacDelta(::System::Single maxDelta)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_SETMAXANGLEAISACDELTA_OFFSET))(this, maxDelta);
		}

		::System::Void SetDistanceAisacControlId(::System::UInt16 aisacControlId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_SETDISTANCEAISACCONTROLID_OFFSET))(this, aisacControlId);
		}

		::System::Void SetListenerBasedAzimuthAngleAisacControlId(::System::UInt16 aisacControlId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_SETLISTENERBASEDAZIMUTHANGLEAISACCONTROLID_OFFSET))(this, aisacControlId);
		}

		::System::Void SetListenerBasedElevationAngleAisacControlId(::System::UInt16 aisacControlId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_SETLISTENERBASEDELEVATIONANGLEAISACCONTROLID_OFFSET))(this, aisacControlId);
		}

		::System::Void SetTransceiverOutputBasedAzimuthAngleAisacControlId(::System::UInt16 aisacControlId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_SETTRANSCEIVEROUTPUTBASEDAZIMUTHANGLEAISACCONTROLID_OFFSET))(this, aisacControlId);
		}

		::System::Void SetTransceiverOutputBasedElevationAngleAisacControlId(::System::UInt16 aisacControlId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_SETTRANSCEIVEROUTPUTBASEDELEVATIONANGLEAISACCONTROLID_OFFSET))(this, aisacControlId);
		}

		::System::Void Set3dRegion(::CriWare::CriAtomEx3dRegion* region3d)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomEx3dRegion*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_SET3DREGION_OFFSET))(this, region3d);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_FINALIZE_OFFSET))(this);
		}
	};
}
