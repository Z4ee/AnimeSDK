#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomEx3dSource_Config.h"
#include "unitysdk/CriWare/CriAtomEx_CuboidExtent.h"
#include "unitysdk/CriWare/CriAtomEx_NativeVector.h"
#include "unitysdk/CriWare/CriAtomEx_Randomize3dConfig.h"
#include "unitysdk/CriWare/CriDisposable.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace CriWare { class CriAtomEx3dRegion; }

#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_CREATE_OFFSET UNITYSDK_OFFSET(0x1AEECE50)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_DESTROY_OFFSET UNITYSDK_OFFSET(0x1AEED040)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_GETATTENUATIONDISTANCESETTING_OFFSET UNITYSDK_OFFSET(0x1AEEE010)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x1AEEEBD0)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_ISDESTROYABLE_OFFSET UNITYSDK_OFFSET(0x1AEEEAB0)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_RESETPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1AEED250)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SET3DREGIONHN_OFFSET UNITYSDK_OFFSET(0x1AEEE6B0)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETATTENUATIONDISTANCESETTING_OFFSET UNITYSDK_OFFSET(0x1AEEDF10)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETCONEORIENTATION_OFFSET UNITYSDK_OFFSET(0x1AEED6C0)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETCONEPARAMETER_OFFSET UNITYSDK_OFFSET(0x1AEED800)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETCUBOIDEXTENT_OFFSET UNITYSDK_OFFSET(0x1AEEECE0)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETDISTANCEAISACCONTROLID_OFFSET UNITYSDK_OFFSET(0x1AEEE9B0)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETDOPPLERFACTOR_OFFSET UNITYSDK_OFFSET(0x1AEEDBC0)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETINTERIORPANFIELD_OFFSET UNITYSDK_OFFSET(0x1AEEDA90)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETLISTENERBASEDELEVATIONANGLEAISACCONTROLID_OFFSET UNITYSDK_OFFSET(0x1AEEE7B0)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETMAXANGLEAISACDELTA_OFFSET UNITYSDK_OFFSET(0x1AEEDE00)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETMINMAXATTENUATIONDISTANCE_OFFSET UNITYSDK_OFFSET(0x1AEED950)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETORIENTATION_OFFSET UNITYSDK_OFFSET(0x1AEED5A0)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x1AEED360)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETRANDOMPOSITIONCONFIG_1_OFFSET UNITYSDK_OFFSET(0x1AEEE190)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETRANDOMPOSITIONCONFIG_OFFSET UNITYSDK_OFFSET(0x1AEEE210)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETRANDOMPOSITIONLIST_OFFSET UNITYSDK_OFFSET(0x1AEEE580)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETSOURCEBASEDELEVATIONANGLEAISACCONTROLID_OFFSET UNITYSDK_OFFSET(0x1AEEE8B0)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETVELOCITY_OFFSET UNITYSDK_OFFSET(0x1AEED470)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETVOLUME_OFFSET UNITYSDK_OFFSET(0x1AEEDCE0)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1AEED150)
#define CRIWARE_CRIATOMEX3DSOURCE_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1AEECF20)
#define CRIWARE_CRIATOMEX3DSOURCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AEECF10)
#define CRIWARE_CRIATOMEX3DSOURCE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1AEEED60)
#define CRIWARE_CRIATOMEX3DSOURCE_GETATTENUATIONDISTANCESETTING_OFFSET UNITYSDK_OFFSET(0x1AEEDF90)
#define CRIWARE_CRIATOMEX3DSOURCE_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x1AEEEB30)
#define CRIWARE_CRIATOMEX3DSOURCE_GET_NATIVEHANDLE_OFFSET UNITYSDK_OFFSET(0x1AEED0C0)
#define CRIWARE_CRIATOMEX3DSOURCE_ISDESTROYABLE_OFFSET UNITYSDK_OFFSET(0x1AEEEA30)
#define CRIWARE_CRIATOMEX3DSOURCE_RESETPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1AEED1D0)
#define CRIWARE_CRIATOMEX3DSOURCE_SET3DREGION_OFFSET UNITYSDK_OFFSET(0x1AEEE610)
#define CRIWARE_CRIATOMEX3DSOURCE_SETATTENUATIONDISTANCESETTING_OFFSET UNITYSDK_OFFSET(0x1AEEDE90)
#define CRIWARE_CRIATOMEX3DSOURCE_SETCONEORIENTATION_OFFSET UNITYSDK_OFFSET(0x1AEED630)
#define CRIWARE_CRIATOMEX3DSOURCE_SETCONEPARAMETER_OFFSET UNITYSDK_OFFSET(0x1AEED740)
#define CRIWARE_CRIATOMEX3DSOURCE_SETCUBOIDEXTENT_OFFSET UNITYSDK_OFFSET(0x1AEEEC60)
#define CRIWARE_CRIATOMEX3DSOURCE_SETDISTANCEAISACCONTROLID_OFFSET UNITYSDK_OFFSET(0x1AEEE930)
#define CRIWARE_CRIATOMEX3DSOURCE_SETDOPPLERFACTOR_OFFSET UNITYSDK_OFFSET(0x1AEEDB30)
#define CRIWARE_CRIATOMEX3DSOURCE_SETINTERIORPANFIELD_OFFSET UNITYSDK_OFFSET(0x1AEED9F0)
#define CRIWARE_CRIATOMEX3DSOURCE_SETLISTENERBASEDELEVATIONANGLEAISACCONTROLID_OFFSET UNITYSDK_OFFSET(0x1AEEE730)
#define CRIWARE_CRIATOMEX3DSOURCE_SETMAXANGLEAISACDELTA_OFFSET UNITYSDK_OFFSET(0x1AEEDD70)
#define CRIWARE_CRIATOMEX3DSOURCE_SETMINMAXDISTANCE_OFFSET UNITYSDK_OFFSET(0x1AEED8B0)
#define CRIWARE_CRIATOMEX3DSOURCE_SETORIENTATION_OFFSET UNITYSDK_OFFSET(0x1AEED4F0)
#define CRIWARE_CRIATOMEX3DSOURCE_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x1AEED2D0)
#define CRIWARE_CRIATOMEX3DSOURCE_SETRANDOMPOSITIONCONFIG_OFFSET UNITYSDK_OFFSET(0x1AEEE090)
#define CRIWARE_CRIATOMEX3DSOURCE_SETRANDOMPOSITIONLIST_OFFSET UNITYSDK_OFFSET(0x1AEEE330)
#define CRIWARE_CRIATOMEX3DSOURCE_SETSOURCEBASEDELEVATIONANGLEAISACCONTROLID_OFFSET UNITYSDK_OFFSET(0x1AEEE830)
#define CRIWARE_CRIATOMEX3DSOURCE_SETVELOCITY_OFFSET UNITYSDK_OFFSET(0x1AEED3E0)
#define CRIWARE_CRIATOMEX3DSOURCE_SETVOLUME_OFFSET UNITYSDK_OFFSET(0x1AEEDC50)
#define CRIWARE_CRIATOMEX3DSOURCE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1AEED0D0)
#define CRIWARE_CRIATOMEX3DSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEECD60)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx3dSource_TypeDefinitionIndex = 37855;

	class CriAtomEx3dSource : public ::CriWare::CriDisposable
	{
	public:
		::System::IntPtr handle; // 0x20
		::System::UInt32 currentRandomPositionListMaxLength; // 0x28

		::System::Void _ctor(::System::Boolean a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_DISPOSE_1_OFFSET))(this, a1);
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

		::System::Void SetPosition(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_SETPOSITION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetVelocity(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_SETVELOCITY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetOrientation(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_SETORIENTATION_OFFSET))(this, a1, a2);
		}

		::System::Void SetConeOrientation(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_SETCONEORIENTATION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetConeParameter(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_SETCONEPARAMETER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetMinMaxDistance(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_SETMINMAXDISTANCE_OFFSET))(this, a1, a2);
		}

		::System::Void SetInteriorPanField(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_SETINTERIORPANFIELD_OFFSET))(this, a1, a2);
		}

		::System::Void SetDopplerFactor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_SETDOPPLERFACTOR_OFFSET))(this, a1);
		}

		::System::Void SetVolume(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_SETVOLUME_OFFSET))(this, a1);
		}

		::System::Void SetMaxAngleAisacDelta(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_SETMAXANGLEAISACDELTA_OFFSET))(this, a1);
		}

		::System::Void SetAttenuationDistanceSetting(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_SETATTENUATIONDISTANCESETTING_OFFSET))(this, a1);
		}

		::System::Boolean GetAttenuationDistanceSetting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_GETATTENUATIONDISTANCESETTING_OFFSET))(this);
		}

		::System::Void SetRandomPositionConfig(::System::Nullable_1<::CriWare::CriAtomEx_Randomize3dConfig> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::CriWare::CriAtomEx_Randomize3dConfig>))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_SETRANDOMPOSITIONCONFIG_OFFSET))(this, a1);
		}

		::System::Void SetRandomPositionList(::Il2CppArray<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_SETRANDOMPOSITIONLIST_OFFSET))(this, a1);
		}

		::System::Void Set3dRegion(::CriWare::CriAtomEx3dRegion* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomEx3dRegion*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_SET3DREGION_OFFSET))(this, a1);
		}

		::System::Void SetListenerBasedElevationAngleAisacControlId(::System::UInt16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_SETLISTENERBASEDELEVATIONANGLEAISACCONTROLID_OFFSET))(this, a1);
		}

		::System::Void SetSourceBasedElevationAngleAisacControlId(::System::UInt16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_SETSOURCEBASEDELEVATIONANGLEAISACCONTROLID_OFFSET))(this, a1);
		}

		::System::Void SetDistanceAisacControlId(::System::UInt16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_SETDISTANCEAISACCONTROLID_OFFSET))(this, a1);
		}

		::System::Boolean IsDestroyable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_ISDESTROYABLE_OFFSET))(this);
		}

		::CriWare::CriAtomEx_NativeVector GetPosition()
		{
			return ((::CriWare::CriAtomEx_NativeVector(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_GETPOSITION_OFFSET))(this);
		}

		::System::Void SetCuboidExtent(::CriWare::CriAtomEx_CuboidExtent a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomEx_CuboidExtent))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_SETCUBOIDEXTENT_OFFSET))(this, a1);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_FINALIZE_OFFSET))(this);
		}

		static ::System::IntPtr criAtomEx3dSource_Create(::CriWare::CriAtomEx3dSource_Config& a1, ::System::IntPtr a2, ::System::Int32 a3)
		{
			return ((::System::IntPtr(*)(::CriWare::CriAtomEx3dSource_Config&, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_CREATE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void criAtomEx3dSource_Destroy(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_DESTROY_OFFSET))(a1);
		}

		static ::System::Void criAtomEx3dSource_Update(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_UPDATE_OFFSET))(a1);
		}

		static ::System::Void criAtomEx3dSource_ResetParameters(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_RESETPARAMETERS_OFFSET))(a1);
		}

		static ::System::Void criAtomEx3dSource_SetPosition(::System::IntPtr a1, ::CriWare::CriAtomEx_NativeVector& a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::CriWare::CriAtomEx_NativeVector&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETPOSITION_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomEx3dSource_SetVelocity(::System::IntPtr a1, ::CriWare::CriAtomEx_NativeVector& a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::CriWare::CriAtomEx_NativeVector&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETVELOCITY_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomEx3dSource_SetOrientation(::System::IntPtr a1, ::CriWare::CriAtomEx_NativeVector& a2, ::CriWare::CriAtomEx_NativeVector& a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::CriWare::CriAtomEx_NativeVector&, ::CriWare::CriAtomEx_NativeVector&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETORIENTATION_OFFSET))(a1, a2, a3);
		}

		static ::System::Void criAtomEx3dSource_SetConeOrientation(::System::IntPtr a1, ::CriWare::CriAtomEx_NativeVector& a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::CriWare::CriAtomEx_NativeVector&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETCONEORIENTATION_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomEx3dSource_SetConeParameter(::System::IntPtr a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETCONEPARAMETER_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void criAtomEx3dSource_SetMinMaxAttenuationDistance(::System::IntPtr a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETMINMAXATTENUATIONDISTANCE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void criAtomEx3dSource_SetInteriorPanField(::System::IntPtr a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETINTERIORPANFIELD_OFFSET))(a1, a2, a3);
		}

		static ::System::Void criAtomEx3dSource_SetDopplerFactor(::System::IntPtr a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETDOPPLERFACTOR_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomEx3dSource_SetVolume(::System::IntPtr a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETVOLUME_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomEx3dSource_SetMaxAngleAisacDelta(::System::IntPtr a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETMAXANGLEAISACDELTA_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomEx3dSource_SetAttenuationDistanceSetting(::System::IntPtr a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETATTENUATIONDISTANCESETTING_OFFSET))(a1, a2);
		}

		static ::System::Boolean criAtomEx3dSource_GetAttenuationDistanceSetting(::System::IntPtr a1)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_GETATTENUATIONDISTANCESETTING_OFFSET))(a1);
		}

		static ::System::Void criAtomEx3dSource_SetRandomPositionConfig(::System::IntPtr a1, ::CriWare::CriAtomEx_Randomize3dConfig& a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::CriWare::CriAtomEx_Randomize3dConfig&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETRANDOMPOSITIONCONFIG_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomEx3dSource_SetRandomPositionConfig_1(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETRANDOMPOSITIONCONFIG_1_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomEx3dSource_SetRandomPositionList(::System::IntPtr a1, ::Il2CppArray<::CriWare::CriAtomEx_NativeVector>* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::Il2CppArray<::CriWare::CriAtomEx_NativeVector>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETRANDOMPOSITIONLIST_OFFSET))(a1, a2, a3);
		}

		static ::System::Void criAtomEx3dSource_SetDistanceAisacControlId(::System::IntPtr a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETDISTANCEAISACCONTROLID_OFFSET))(a1, a2);
		}

		static ::System::Boolean criAtomEx3dSource_IsDestroyable(::System::IntPtr a1)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_ISDESTROYABLE_OFFSET))(a1);
		}

		static ::CriWare::CriAtomEx_NativeVector criAtomEx3dSource_GetPosition(::System::IntPtr a1)
		{
			return ((::CriWare::CriAtomEx_NativeVector(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_GETPOSITION_OFFSET))(a1);
		}

		static ::System::Void criAtomEx3dSource_SetCuboidExtent(::System::IntPtr a1, ::CriWare::CriAtomEx_CuboidExtent& a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::CriWare::CriAtomEx_CuboidExtent&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETCUBOIDEXTENT_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomEx3dSource_Set3dRegionHn(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SET3DREGIONHN_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomEx3dSource_SetListenerBasedElevationAngleAisacControlId(::System::IntPtr a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETLISTENERBASEDELEVATIONANGLEAISACCONTROLID_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomEx3dSource_SetSourceBasedElevationAngleAisacControlId(::System::IntPtr a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETSOURCEBASEDELEVATIONANGLEAISACCONTROLID_OFFSET))(a1, a2);
		}
	};
}
