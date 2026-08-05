#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomEx3dSource_Config.h"
#include "unitysdk/CriWare/CriAtomEx_NativeVector.h"
#include "unitysdk/CriWare/CriAtomEx_Randomize3dConfig.h"
#include "unitysdk/CriWare/CriDisposable.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace CriWare { class CriAtomEx3dRegion; }

#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_CREATE_OFFSET UNITYSDK_OFFSET(0x1F4D0CD0)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_DESTROY_OFFSET UNITYSDK_OFFSET(0x1F4D0EF0)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_GETATTENUATIONDISTANCESETTING_OFFSET UNITYSDK_OFFSET(0x1F4D1560)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SET3DREGIONHN_OFFSET UNITYSDK_OFFSET(0x1F4D1A70)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETATTENUATIONDISTANCESETTING_OFFSET UNITYSDK_OFFSET(0x1F4D1460)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETORIENTATION_OFFSET UNITYSDK_OFFSET(0x1F4D1350)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x1F4D1110)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETRANDOMPOSITIONCONFIG_1_OFFSET UNITYSDK_OFFSET(0x1F4D1800)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETRANDOMPOSITIONCONFIG_OFFSET UNITYSDK_OFFSET(0x1F4D1880)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SETVELOCITY_OFFSET UNITYSDK_OFFSET(0x1F4D1220)
#define CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1F4D1000)
#define CRIWARE_CRIATOMEX3DSOURCE_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1F4D0D90)
#define CRIWARE_CRIATOMEX3DSOURCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F4D0D80)
#define CRIWARE_CRIATOMEX3DSOURCE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1F4D1AF0)
#define CRIWARE_CRIATOMEX3DSOURCE_GETATTENUATIONDISTANCESETTING_OFFSET UNITYSDK_OFFSET(0x1F4D14E0)
#define CRIWARE_CRIATOMEX3DSOURCE_GET_NATIVEHANDLE_OFFSET UNITYSDK_OFFSET(0x1F4D0F70)
#define CRIWARE_CRIATOMEX3DSOURCE_SET3DREGION_OFFSET UNITYSDK_OFFSET(0x1F4D19D0)
#define CRIWARE_CRIATOMEX3DSOURCE_SETATTENUATIONDISTANCESETTING_OFFSET UNITYSDK_OFFSET(0x1F4D13E0)
#define CRIWARE_CRIATOMEX3DSOURCE_SETORIENTATION_OFFSET UNITYSDK_OFFSET(0x1F4D12A0)
#define CRIWARE_CRIATOMEX3DSOURCE_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x1F4D1080)
#define CRIWARE_CRIATOMEX3DSOURCE_SETRANDOMPOSITIONCONFIG_OFFSET UNITYSDK_OFFSET(0x1F4D15E0)
#define CRIWARE_CRIATOMEX3DSOURCE_SETVELOCITY_OFFSET UNITYSDK_OFFSET(0x1F4D1190)
#define CRIWARE_CRIATOMEX3DSOURCE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1F4D0F80)
#define CRIWARE_CRIATOMEX3DSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F4D0BD0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx3dSource_TypeDefinitionIndex = 34932;

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

		::System::Void Set3dRegion(::CriWare::CriAtomEx3dRegion* region3d)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomEx3dRegion*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_SET3DREGION_OFFSET))(this, region3d);
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

		static ::System::Void criAtomEx3dSource_Set3dRegionHn(::System::IntPtr ex_3d_source, ::System::IntPtr ex_3d_region)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CRIATOMEX3DSOURCE_SET3DREGIONHN_OFFSET))(ex_3d_source, ex_3d_region);
		}
	};
}
