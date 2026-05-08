#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomEx3dTransceiver_Config.h"
#include "unitysdk/CriWare/CriAtomEx_NativeVector.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CRIWARE_CRIATOMEX3DTRANSCEIVER_UNSAFENATIVEMETHODS_CRIATOMEX3DTRANSCEIVER_ATTACHAISAC_OFFSET UNITYSDK_OFFSET(0x1C4BB910)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_UNSAFENATIVEMETHODS_CRIATOMEX3DTRANSCEIVER_CREATE_OFFSET UNITYSDK_OFFSET(0x1C4BB240)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_UNSAFENATIVEMETHODS_CRIATOMEX3DTRANSCEIVER_DESTROY_OFFSET UNITYSDK_OFFSET(0x1C4BB2D0)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_UNSAFENATIVEMETHODS_CRIATOMEX3DTRANSCEIVER_SET3DREGIONHN_OFFSET UNITYSDK_OFFSET(0x1C4BBCC0)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_UNSAFENATIVEMETHODS_CRIATOMEX3DTRANSCEIVER_SETDISTANCEAISACCONTROLID_OFFSET UNITYSDK_OFFSET(0x1C4BBA40)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_UNSAFENATIVEMETHODS_CRIATOMEX3DTRANSCEIVER_SETINPUTCROSSFADEFIELD_OFFSET UNITYSDK_OFFSET(0x1C4BB7E0)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_UNSAFENATIVEMETHODS_CRIATOMEX3DTRANSCEIVER_SETINPUTORIENTATION_OFFSET UNITYSDK_OFFSET(0x1C4BB4D0)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_UNSAFENATIVEMETHODS_CRIATOMEX3DTRANSCEIVER_SETINPUTPOSITION_OFFSET UNITYSDK_OFFSET(0x1C4BB3D0)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_UNSAFENATIVEMETHODS_CRIATOMEX3DTRANSCEIVER_SETLISTENERBASEDAZIMUTHANGLEAISACCONTROLID_OFFSET UNITYSDK_OFFSET(0x1C4BBAC0)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_UNSAFENATIVEMETHODS_CRIATOMEX3DTRANSCEIVER_SETLISTENERBASEDELEVATIONANGLEAISACCONTROLID_OFFSET UNITYSDK_OFFSET(0x1C4BBB40)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_UNSAFENATIVEMETHODS_CRIATOMEX3DTRANSCEIVER_SETMAXANGLEAISACDELTA_OFFSET UNITYSDK_OFFSET(0x1C4BB9B0)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_UNSAFENATIVEMETHODS_CRIATOMEX3DTRANSCEIVER_SETOUTPUTCONEPARAMETER_OFFSET UNITYSDK_OFFSET(0x1C4BB5F0)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_UNSAFENATIVEMETHODS_CRIATOMEX3DTRANSCEIVER_SETOUTPUTINTERIORPANFIELD_OFFSET UNITYSDK_OFFSET(0x1C4BB740)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_UNSAFENATIVEMETHODS_CRIATOMEX3DTRANSCEIVER_SETOUTPUTMINMAXATTENUATIONDISTANCE_OFFSET UNITYSDK_OFFSET(0x1C4BB6A0)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_UNSAFENATIVEMETHODS_CRIATOMEX3DTRANSCEIVER_SETOUTPUTORIENTATION_OFFSET UNITYSDK_OFFSET(0x1C4BB560)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_UNSAFENATIVEMETHODS_CRIATOMEX3DTRANSCEIVER_SETOUTPUTPOSITION_OFFSET UNITYSDK_OFFSET(0x1C4BB450)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_UNSAFENATIVEMETHODS_CRIATOMEX3DTRANSCEIVER_SETOUTPUTVOLUME_OFFSET UNITYSDK_OFFSET(0x1C4BB880)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_UNSAFENATIVEMETHODS_CRIATOMEX3DTRANSCEIVER_SETTRANSCEIVEROUTPUTBASEDAZIMUTHANGLEAISACCONTROLID_OFFSET UNITYSDK_OFFSET(0x1C4BBBC0)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_UNSAFENATIVEMETHODS_CRIATOMEX3DTRANSCEIVER_SETTRANSCEIVEROUTPUTBASEDELEVATIONANGLEAISACCONTROLID_OFFSET UNITYSDK_OFFSET(0x1C4BBC40)
#define CRIWARE_CRIATOMEX3DTRANSCEIVER_UNSAFENATIVEMETHODS_CRIATOMEX3DTRANSCEIVER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C4BB350)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx3dTransceiver_UnsafeNativeMethods_TypeDefinitionIndex = 32736;

	class CriAtomEx3dTransceiver_UnsafeNativeMethods : public ::System::Object
	{
	public:
		static ::System::IntPtr criAtomEx3dTransceiver_Create(::CriWare::CriAtomEx3dTransceiver_Config& config, ::System::IntPtr work, ::System::Int32 work_size)
		{
			return ((::System::IntPtr(*)(::CriWare::CriAtomEx3dTransceiver_Config&, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_UNSAFENATIVEMETHODS_CRIATOMEX3DTRANSCEIVER_CREATE_OFFSET))(config, work, work_size);
		}

		static ::System::Void criAtomEx3dTransceiver_Destroy(::System::IntPtr ex_3d_transceiver)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_UNSAFENATIVEMETHODS_CRIATOMEX3DTRANSCEIVER_DESTROY_OFFSET))(ex_3d_transceiver);
		}

		static ::System::Void criAtomEx3dTransceiver_Update(::System::IntPtr ex_3d_transceiver)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_UNSAFENATIVEMETHODS_CRIATOMEX3DTRANSCEIVER_UPDATE_OFFSET))(ex_3d_transceiver);
		}

		static ::System::Void criAtomEx3dTransceiver_SetInputPosition(::System::IntPtr ex_3d_transceiver, ::CriWare::CriAtomEx_NativeVector& position)
		{
			return ((::System::Void(*)(::System::IntPtr, ::CriWare::CriAtomEx_NativeVector&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_UNSAFENATIVEMETHODS_CRIATOMEX3DTRANSCEIVER_SETINPUTPOSITION_OFFSET))(ex_3d_transceiver, position);
		}

		static ::System::Void criAtomEx3dTransceiver_SetOutputPosition(::System::IntPtr ex_3d_transceiver, ::CriWare::CriAtomEx_NativeVector& position)
		{
			return ((::System::Void(*)(::System::IntPtr, ::CriWare::CriAtomEx_NativeVector&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_UNSAFENATIVEMETHODS_CRIATOMEX3DTRANSCEIVER_SETOUTPUTPOSITION_OFFSET))(ex_3d_transceiver, position);
		}

		static ::System::Void criAtomEx3dTransceiver_SetInputOrientation(::System::IntPtr ex_3d_transceiver, ::CriWare::CriAtomEx_NativeVector& front, ::CriWare::CriAtomEx_NativeVector& top)
		{
			return ((::System::Void(*)(::System::IntPtr, ::CriWare::CriAtomEx_NativeVector&, ::CriWare::CriAtomEx_NativeVector&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_UNSAFENATIVEMETHODS_CRIATOMEX3DTRANSCEIVER_SETINPUTORIENTATION_OFFSET))(ex_3d_transceiver, front, top);
		}

		static ::System::Void criAtomEx3dTransceiver_SetOutputOrientation(::System::IntPtr ex_3d_transceiver, ::CriWare::CriAtomEx_NativeVector& front, ::CriWare::CriAtomEx_NativeVector& top)
		{
			return ((::System::Void(*)(::System::IntPtr, ::CriWare::CriAtomEx_NativeVector&, ::CriWare::CriAtomEx_NativeVector&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_UNSAFENATIVEMETHODS_CRIATOMEX3DTRANSCEIVER_SETOUTPUTORIENTATION_OFFSET))(ex_3d_transceiver, front, top);
		}

		static ::System::Void criAtomEx3dTransceiver_SetOutputConeParameter(::System::IntPtr ex_3d_transceiver, ::System::Single inside_angle, ::System::Single outside_angle, ::System::Single outside_volume)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_UNSAFENATIVEMETHODS_CRIATOMEX3DTRANSCEIVER_SETOUTPUTCONEPARAMETER_OFFSET))(ex_3d_transceiver, inside_angle, outside_angle, outside_volume);
		}

		static ::System::Void criAtomEx3dTransceiver_SetOutputMinMaxAttenuationDistance(::System::IntPtr ex_3d_transceiver, ::System::Single min_attenuation_distance, ::System::Single max_attenuation_distance)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_UNSAFENATIVEMETHODS_CRIATOMEX3DTRANSCEIVER_SETOUTPUTMINMAXATTENUATIONDISTANCE_OFFSET))(ex_3d_transceiver, min_attenuation_distance, max_attenuation_distance);
		}

		static ::System::Void criAtomEx3dTransceiver_SetOutputInteriorPanField(::System::IntPtr ex_3d_transceiver, ::System::Single transceiver_radius, ::System::Single interior_distance)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_UNSAFENATIVEMETHODS_CRIATOMEX3DTRANSCEIVER_SETOUTPUTINTERIORPANFIELD_OFFSET))(ex_3d_transceiver, transceiver_radius, interior_distance);
		}

		static ::System::Void criAtomEx3dTransceiver_SetInputCrossFadeField(::System::IntPtr ex_3d_transceiver, ::System::Single direct_audio_radius, ::System::Single crossfade_distance)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_UNSAFENATIVEMETHODS_CRIATOMEX3DTRANSCEIVER_SETINPUTCROSSFADEFIELD_OFFSET))(ex_3d_transceiver, direct_audio_radius, crossfade_distance);
		}

		static ::System::Void criAtomEx3dTransceiver_SetOutputVolume(::System::IntPtr ex_3d_transceiver, ::System::Single volume)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_UNSAFENATIVEMETHODS_CRIATOMEX3DTRANSCEIVER_SETOUTPUTVOLUME_OFFSET))(ex_3d_transceiver, volume);
		}

		static ::System::Void criAtomEx3dTransceiver_AttachAisac(::System::IntPtr ex_3d_transceiver, ::System::String* global_aisac_name)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_UNSAFENATIVEMETHODS_CRIATOMEX3DTRANSCEIVER_ATTACHAISAC_OFFSET))(ex_3d_transceiver, global_aisac_name);
		}

		static ::System::Void criAtomEx3dTransceiver_SetMaxAngleAisacDelta(::System::IntPtr ex_3d_transceiver, ::System::Single max_delta)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_UNSAFENATIVEMETHODS_CRIATOMEX3DTRANSCEIVER_SETMAXANGLEAISACDELTA_OFFSET))(ex_3d_transceiver, max_delta);
		}

		static ::System::Void criAtomEx3dTransceiver_SetDistanceAisacControlId(::System::IntPtr ex_3d_transceiver, ::System::UInt16 aisac_control_id)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_UNSAFENATIVEMETHODS_CRIATOMEX3DTRANSCEIVER_SETDISTANCEAISACCONTROLID_OFFSET))(ex_3d_transceiver, aisac_control_id);
		}

		static ::System::Void criAtomEx3dTransceiver_SetListenerBasedAzimuthAngleAisacControlId(::System::IntPtr ex_3d_transceiver, ::System::UInt16 aisac_control_id)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_UNSAFENATIVEMETHODS_CRIATOMEX3DTRANSCEIVER_SETLISTENERBASEDAZIMUTHANGLEAISACCONTROLID_OFFSET))(ex_3d_transceiver, aisac_control_id);
		}

		static ::System::Void criAtomEx3dTransceiver_SetListenerBasedElevationAngleAisacControlId(::System::IntPtr ex_3d_transceiver, ::System::UInt16 aisac_control_id)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_UNSAFENATIVEMETHODS_CRIATOMEX3DTRANSCEIVER_SETLISTENERBASEDELEVATIONANGLEAISACCONTROLID_OFFSET))(ex_3d_transceiver, aisac_control_id);
		}

		static ::System::Void criAtomEx3dTransceiver_SetTransceiverOutputBasedAzimuthAngleAisacControlId(::System::IntPtr ex_3d_transceiver, ::System::UInt16 aisac_control_id)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_UNSAFENATIVEMETHODS_CRIATOMEX3DTRANSCEIVER_SETTRANSCEIVEROUTPUTBASEDAZIMUTHANGLEAISACCONTROLID_OFFSET))(ex_3d_transceiver, aisac_control_id);
		}

		static ::System::Void criAtomEx3dTransceiver_SetTransceiverOutputBasedElevationAngleAisacControlId(::System::IntPtr ex_3d_transceiver, ::System::UInt16 aisac_control_id)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_UNSAFENATIVEMETHODS_CRIATOMEX3DTRANSCEIVER_SETTRANSCEIVEROUTPUTBASEDELEVATIONANGLEAISACCONTROLID_OFFSET))(ex_3d_transceiver, aisac_control_id);
		}

		static ::System::Void criAtomEx3dTransceiver_Set3dRegionHn(::System::IntPtr ex_3d_transceiver, ::System::IntPtr ex_3d_region)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DTRANSCEIVER_UNSAFENATIVEMETHODS_CRIATOMEX3DTRANSCEIVER_SET3DREGIONHN_OFFSET))(ex_3d_transceiver, ex_3d_region);
		}
	};
}
