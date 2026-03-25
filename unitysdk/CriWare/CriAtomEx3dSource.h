#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomEx3dSource_Config.h"
#include "unitysdk/CriWare/CriAtomEx_NativeVector.h"
#include "unitysdk/CriWare/CriAtomEx_Randomize3dConfig.h"
#include "unitysdk/CriWare/CriDisposable.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace CriWare { class CriAtomEx3dRegion; }

#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_CREATE_OFFSET UNITYSDK_OFFSET(0x119FF420)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_DESTROY_OFFSET UNITYSDK_OFFSET(0x119FF5E0)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_GETATTENUATIONDISTANCESETTING_OFFSET UNITYSDK_OFFSET(0x11A005B0)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x11A011A0)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_ISDESTROYABLE_OFFSET UNITYSDK_OFFSET(0x11A01080)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_RESETPARAMETERS_OFFSET UNITYSDK_OFFSET(0x119FF7F0)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SET3DREGIONHN_OFFSET UNITYSDK_OFFSET(0x11A00C80)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETATTENUATIONDISTANCESETTING_OFFSET UNITYSDK_OFFSET(0x11A004B0)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETCONEORIENTATION_OFFSET UNITYSDK_OFFSET(0x119FFC60)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETCONEPARAMETER_OFFSET UNITYSDK_OFFSET(0x119FFDA0)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETDISTANCEAISACCONTROLID_OFFSET UNITYSDK_OFFSET(0x11A00F80)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETDOPPLERFACTOR_OFFSET UNITYSDK_OFFSET(0x11A00160)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETINTERIORPANFIELD_OFFSET UNITYSDK_OFFSET(0x11A00030)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETLISTENERBASEDELEVATIONANGLEAISACCONTROLID_OFFSET UNITYSDK_OFFSET(0x11A00D80)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETMAXANGLEAISACDELTA_OFFSET UNITYSDK_OFFSET(0x11A003A0)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETMINMAXATTENUATIONDISTANCE_OFFSET UNITYSDK_OFFSET(0x119FFEF0)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETORIENTATION_OFFSET UNITYSDK_OFFSET(0x119FFB40)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x119FF900)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETRANDOMPOSITIONCONFIG_1_OFFSET UNITYSDK_OFFSET(0x11A00730)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETRANDOMPOSITIONCONFIG_OFFSET UNITYSDK_OFFSET(0x11A007B0)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETRANDOMPOSITIONLIST_OFFSET UNITYSDK_OFFSET(0x11A00B50)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETSOURCEBASEDELEVATIONANGLEAISACCONTROLID_OFFSET UNITYSDK_OFFSET(0x11A00E80)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETVELOCITY_OFFSET UNITYSDK_OFFSET(0x119FFA10)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETVOLUME_OFFSET UNITYSDK_OFFSET(0x11A00280)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_UPDATE_OFFSET UNITYSDK_OFFSET(0x119FF6F0)
#define CRIWARE_CRIATOMEX3DSOURCE_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x119FF4F0)
#define CRIWARE_CRIATOMEX3DSOURCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x119FF4E0)
#define CRIWARE_CRIATOMEX3DSOURCE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x11A01230)
#define CRIWARE_CRIATOMEX3DSOURCE_GETATTENUATIONDISTANCESETTING_OFFSET UNITYSDK_OFFSET(0x11A00530)
#define CRIWARE_CRIATOMEX3DSOURCE_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x11A01100)
#define CRIWARE_CRIATOMEX3DSOURCE_GET_NATIVEHANDLE_OFFSET UNITYSDK_OFFSET(0x119FF660)
#define CRIWARE_CRIATOMEX3DSOURCE_ISDESTROYABLE_OFFSET UNITYSDK_OFFSET(0x11A01000)
#define CRIWARE_CRIATOMEX3DSOURCE_RESETPARAMETERS_OFFSET UNITYSDK_OFFSET(0x119FF770)
#define CRIWARE_CRIATOMEX3DSOURCE_SET3DREGION_OFFSET UNITYSDK_OFFSET(0x11A00BE0)
#define CRIWARE_CRIATOMEX3DSOURCE_SETATTENUATIONDISTANCESETTING_OFFSET UNITYSDK_OFFSET(0x11A00430)
#define CRIWARE_CRIATOMEX3DSOURCE_SETCONEORIENTATION_OFFSET UNITYSDK_OFFSET(0x119FFBD0)
#define CRIWARE_CRIATOMEX3DSOURCE_SETCONEPARAMETER_OFFSET UNITYSDK_OFFSET(0x119FFCE0)
#define CRIWARE_CRIATOMEX3DSOURCE_SETDISTANCEAISACCONTROLID_OFFSET UNITYSDK_OFFSET(0x11A00F00)
#define CRIWARE_CRIATOMEX3DSOURCE_SETDOPPLERFACTOR_OFFSET UNITYSDK_OFFSET(0x11A000D0)
#define CRIWARE_CRIATOMEX3DSOURCE_SETINTERIORPANFIELD_OFFSET UNITYSDK_OFFSET(0x119FFF90)
#define CRIWARE_CRIATOMEX3DSOURCE_SETLISTENERBASEDELEVATIONANGLEAISACCONTROLID_OFFSET UNITYSDK_OFFSET(0x11A00D00)
#define CRIWARE_CRIATOMEX3DSOURCE_SETMAXANGLEAISACDELTA_OFFSET UNITYSDK_OFFSET(0x11A00310)
#define CRIWARE_CRIATOMEX3DSOURCE_SETMINMAXDISTANCE_OFFSET UNITYSDK_OFFSET(0x119FFE50)
#define CRIWARE_CRIATOMEX3DSOURCE_SETORIENTATION_OFFSET UNITYSDK_OFFSET(0x119FFA90)
#define CRIWARE_CRIATOMEX3DSOURCE_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x119FF870)
#define CRIWARE_CRIATOMEX3DSOURCE_SETRANDOMPOSITIONCONFIG_OFFSET UNITYSDK_OFFSET(0x11A00630)
#define CRIWARE_CRIATOMEX3DSOURCE_SETRANDOMPOSITIONLIST_OFFSET UNITYSDK_OFFSET(0x11A008E0)
#define CRIWARE_CRIATOMEX3DSOURCE_SETSOURCEBASEDELEVATIONANGLEAISACCONTROLID_OFFSET UNITYSDK_OFFSET(0x11A00E00)
#define CRIWARE_CRIATOMEX3DSOURCE_SETVELOCITY_OFFSET UNITYSDK_OFFSET(0x119FF980)
#define CRIWARE_CRIATOMEX3DSOURCE_SETVOLUME_OFFSET UNITYSDK_OFFSET(0x11A001F0)
#define CRIWARE_CRIATOMEX3DSOURCE_UPDATE_OFFSET UNITYSDK_OFFSET(0x119FF670)
#define CRIWARE_CRIATOMEX3DSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x119FF330)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx3dSource_TypeDefinitionIndex = 31036;

	class CriAtomEx3dSource : public ::CriWare::CriDisposable
	{
	public:
		::System::IntPtr handle; // 0x20
		::System::UInt32 currentRandomPositionListMaxLength; // 0x28

		::System::Void _ctor(::System::Boolean enableVoicePriorityDecay, ::System::UInt32 randomPositionListMaxLength)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE__CTOR_OFFSET))(this, enableVoicePriorityDecay, randomPositionListMaxLength);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::IntPtr get_nativeHandle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_GET_NATIVEHANDLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_UPDATE_OFFSET))(this);
		}

		::System::Void ResetParameters()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_RESETPARAMETERS_OFFSET))(this);
		}

		::System::Void SetPosition(::System::Single x, ::System::Single y, ::System::Single z)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_SETPOSITION_OFFSET))(this, x, y, z);
		}

		::System::Void SetVelocity(::System::Single x, ::System::Single y, ::System::Single z)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_SETVELOCITY_OFFSET))(this, x, y, z);
		}

		::System::Void SetOrientation(::UnityEngine::Vector3 front, ::UnityEngine::Vector3 top)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_SETORIENTATION_OFFSET))(this, front, top);
		}

		::System::Void SetConeOrientation(::System::Single x, ::System::Single y, ::System::Single z)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_SETCONEORIENTATION_OFFSET))(this, x, y, z);
		}

		::System::Void SetConeParameter(::System::Single insideAngle, ::System::Single outsideAngle, ::System::Single outsideVolume)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_SETCONEPARAMETER_OFFSET))(this, insideAngle, outsideAngle, outsideVolume);
		}

		::System::Void SetMinMaxDistance(::System::Single minDistance, ::System::Single maxDistance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_SETMINMAXDISTANCE_OFFSET))(this, minDistance, maxDistance);
		}

		::System::Void SetInteriorPanField(::System::Single sourceRadius, ::System::Single interiorDistance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_SETINTERIORPANFIELD_OFFSET))(this, sourceRadius, interiorDistance);
		}

		::System::Void SetDopplerFactor(::System::Single dopplerFactor)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_SETDOPPLERFACTOR_OFFSET))(this, dopplerFactor);
		}

		::System::Void SetVolume(::System::Single volume)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_SETVOLUME_OFFSET))(this, volume);
		}

		::System::Void SetMaxAngleAisacDelta(::System::Single maxDelta)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_SETMAXANGLEAISACDELTA_OFFSET))(this, maxDelta);
		}

		::System::Void SetAttenuationDistanceSetting(::System::Boolean flag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_SETATTENUATIONDISTANCESETTING_OFFSET))(this, flag);
		}

		::System::Boolean GetAttenuationDistanceSetting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_GETATTENUATIONDISTANCESETTING_OFFSET))(this);
		}

		::System::Void SetRandomPositionConfig(::System::Nullable_1<::CriWare::CriAtomEx_Randomize3dConfig> config)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::CriWare::CriAtomEx_Randomize3dConfig>))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_SETRANDOMPOSITIONCONFIG_OFFSET))(this, config);
		}

		::System::Void SetRandomPositionList(::Il2CppArray<::UnityEngine::Vector3>* positionList)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_SETRANDOMPOSITIONLIST_OFFSET))(this, positionList);
		}

		::System::Void Set3dRegion(::CriWare::CriAtomEx3dRegion* region3d)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomEx3dRegion*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_SET3DREGION_OFFSET))(this, region3d);
		}

		::System::Void SetListenerBasedElevationAngleAisacControlId(::System::UInt16 aisacControlId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_SETLISTENERBASEDELEVATIONANGLEAISACCONTROLID_OFFSET))(this, aisacControlId);
		}

		::System::Void SetSourceBasedElevationAngleAisacControlId(::System::UInt16 aisacControlId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_SETSOURCEBASEDELEVATIONANGLEAISACCONTROLID_OFFSET))(this, aisacControlId);
		}

		::System::Void SetDistanceAisacControlId(::System::UInt16 aisacControlId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_SETDISTANCEAISACCONTROLID_OFFSET))(this, aisacControlId);
		}

		::System::Boolean IsDestroyable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_ISDESTROYABLE_OFFSET))(this);
		}

		::CriWare::CriAtomEx_NativeVector GetPosition()
		{
			return ((::CriWare::CriAtomEx_NativeVector(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_GETPOSITION_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_FINALIZE_OFFSET))(this);
		}

		static ::System::IntPtr criAtomEx3dSource_Create(::CriWare::CriAtomEx3dSource_Config& config, ::System::IntPtr work, ::System::Int32 work_size)
		{
			return ((::System::IntPtr(*)(::CriWare::CriAtomEx3dSource_Config&, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_CREATE_OFFSET))(config, work, work_size);
		}

		static ::System::Void criAtomEx3dSource_Destroy(::System::IntPtr ex_3d_source)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_DESTROY_OFFSET))(ex_3d_source);
		}

		static ::System::Void criAtomEx3dSource_Update(::System::IntPtr ex_3d_source)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_UPDATE_OFFSET))(ex_3d_source);
		}

		static ::System::Void criAtomEx3dSource_ResetParameters(::System::IntPtr ex_3d_source)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_RESETPARAMETERS_OFFSET))(ex_3d_source);
		}

		static ::System::Void criAtomEx3dSource_SetPosition(::System::IntPtr ex_3d_source, ::CriWare::CriAtomEx_NativeVector& position)
		{
			return ((::System::Void(*)(::System::IntPtr, ::CriWare::CriAtomEx_NativeVector&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETPOSITION_OFFSET))(ex_3d_source, position);
		}

		static ::System::Void criAtomEx3dSource_SetVelocity(::System::IntPtr ex_3d_source, ::CriWare::CriAtomEx_NativeVector& velocity)
		{
			return ((::System::Void(*)(::System::IntPtr, ::CriWare::CriAtomEx_NativeVector&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETVELOCITY_OFFSET))(ex_3d_source, velocity);
		}

		static ::System::Void criAtomEx3dSource_SetOrientation(::System::IntPtr ex_3d_source, ::CriWare::CriAtomEx_NativeVector& front, ::CriWare::CriAtomEx_NativeVector& top)
		{
			return ((::System::Void(*)(::System::IntPtr, ::CriWare::CriAtomEx_NativeVector&, ::CriWare::CriAtomEx_NativeVector&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETORIENTATION_OFFSET))(ex_3d_source, front, top);
		}

		static ::System::Void criAtomEx3dSource_SetConeOrientation(::System::IntPtr ex_3d_source, ::CriWare::CriAtomEx_NativeVector& cone_orient)
		{
			return ((::System::Void(*)(::System::IntPtr, ::CriWare::CriAtomEx_NativeVector&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETCONEORIENTATION_OFFSET))(ex_3d_source, cone_orient);
		}

		static ::System::Void criAtomEx3dSource_SetConeParameter(::System::IntPtr ex_3d_source, ::System::Single inside_angle, ::System::Single outside_angle, ::System::Single outside_volume)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETCONEPARAMETER_OFFSET))(ex_3d_source, inside_angle, outside_angle, outside_volume);
		}

		static ::System::Void criAtomEx3dSource_SetMinMaxAttenuationDistance(::System::IntPtr ex_3d_source, ::System::Single min_distance, ::System::Single max_distance)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETMINMAXATTENUATIONDISTANCE_OFFSET))(ex_3d_source, min_distance, max_distance);
		}

		static ::System::Void criAtomEx3dSource_SetInteriorPanField(::System::IntPtr ex_3d_source, ::System::Single source_radius, ::System::Single interior_distance)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETINTERIORPANFIELD_OFFSET))(ex_3d_source, source_radius, interior_distance);
		}

		static ::System::Void criAtomEx3dSource_SetDopplerFactor(::System::IntPtr ex_3d_source, ::System::Single doppler_factor)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETDOPPLERFACTOR_OFFSET))(ex_3d_source, doppler_factor);
		}

		static ::System::Void criAtomEx3dSource_SetVolume(::System::IntPtr ex_3d_source, ::System::Single volume)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETVOLUME_OFFSET))(ex_3d_source, volume);
		}

		static ::System::Void criAtomEx3dSource_SetMaxAngleAisacDelta(::System::IntPtr ex_3d_source, ::System::Single max_delta)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETMAXANGLEAISACDELTA_OFFSET))(ex_3d_source, max_delta);
		}

		static ::System::Void criAtomEx3dSource_SetAttenuationDistanceSetting(::System::IntPtr ex_3d_source, ::System::Boolean flag)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETATTENUATIONDISTANCESETTING_OFFSET))(ex_3d_source, flag);
		}

		static ::System::Boolean criAtomEx3dSource_GetAttenuationDistanceSetting(::System::IntPtr ex_3d_source)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_GETATTENUATIONDISTANCESETTING_OFFSET))(ex_3d_source);
		}

		static ::System::Void criAtomEx3dSource_SetRandomPositionConfig(::System::IntPtr ex_3d_source, ::CriWare::CriAtomEx_Randomize3dConfig& config)
		{
			return ((::System::Void(*)(::System::IntPtr, ::CriWare::CriAtomEx_Randomize3dConfig&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETRANDOMPOSITIONCONFIG_OFFSET))(ex_3d_source, config);
		}

		static ::System::Void criAtomEx3dSource_SetRandomPositionConfig_1(::System::IntPtr ex_3d_source, ::System::IntPtr config)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETRANDOMPOSITIONCONFIG_1_OFFSET))(ex_3d_source, config);
		}

		static ::System::Void criAtomEx3dSource_SetRandomPositionList(::System::IntPtr ex_3d_source, ::Il2CppArray<::CriWare::CriAtomEx_NativeVector>* position_list, ::System::UInt32 length)
		{
			return ((::System::Void(*)(::System::IntPtr, ::Il2CppArray<::CriWare::CriAtomEx_NativeVector>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETRANDOMPOSITIONLIST_OFFSET))(ex_3d_source, position_list, length);
		}

		static ::System::Void criAtomEx3dSource_SetDistanceAisacControlId(::System::IntPtr ex_3d_source, ::System::UInt16 aisac_control_id)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETDISTANCEAISACCONTROLID_OFFSET))(ex_3d_source, aisac_control_id);
		}

		static ::System::Boolean criAtomEx3dSource_IsDestroyable(::System::IntPtr ex_3d_source)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_ISDESTROYABLE_OFFSET))(ex_3d_source);
		}

		static ::CriWare::CriAtomEx_NativeVector criAtomEx3dSource_GetPosition(::System::IntPtr ex_3d_source)
		{
			return ((::CriWare::CriAtomEx_NativeVector(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_GETPOSITION_OFFSET))(ex_3d_source);
		}

		static ::System::Void criAtomEx3dSource_Set3dRegionHn(::System::IntPtr ex_3d_source, ::System::IntPtr ex_3d_region)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SET3DREGIONHN_OFFSET))(ex_3d_source, ex_3d_region);
		}

		static ::System::Void criAtomEx3dSource_SetListenerBasedElevationAngleAisacControlId(::System::IntPtr ex_3d_source, ::System::UInt16 aisac_control_id)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETLISTENERBASEDELEVATIONANGLEAISACCONTROLID_OFFSET))(ex_3d_source, aisac_control_id);
		}

		static ::System::Void criAtomEx3dSource_SetSourceBasedElevationAngleAisacControlId(::System::IntPtr ex_3d_source, ::System::UInt16 aisac_control_id)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETSOURCEBASEDELEVATIONANGLEAISACCONTROLID_OFFSET))(ex_3d_source, aisac_control_id);
		}
	};
}
