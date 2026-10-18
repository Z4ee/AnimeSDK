#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExAsrRack_Config.h"
#include "unitysdk/CriWare/CriAtomExAsrRack_PerformanceInfo.h"
#include "unitysdk/CriWare/CriAtomExAsrRack_PlatformConfig.h"
#include "unitysdk/CriWare/CriAtomExAsrRack_PlatformConfigAndroid.h"
#include "unitysdk/CriWare/CriAtomExAsrRack_PlatformConfigPS5.h"
#include "unitysdk/CriWare/CriDisposable.h"

namespace CriWare { class CriAtomExAsrRack_IPlatformConfig; }
namespace System { class String; }

#define CRIWARE_CRIATOMEXASRRACK_APPLYDSPBUSSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x166E6340)
#define CRIWARE_CRIATOMEXASRRACK_ATTACHDSPBUSSETTING_OFFSET UNITYSDK_OFFSET(0x166E6030)
#define CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_APPLYDSPBUSSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x166E6450)
#define CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_ATTACHDSPBUSSETTING_OFFSET UNITYSDK_OFFSET(0x166E6130)
#define CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_CREATE_OFFSET UNITYSDK_OFFSET(0x166E5D00)
#define CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_DESTROY_OFFSET UNITYSDK_OFFSET(0x166E7300)
#define CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_DETACHDSPBUSSETTING_OFFSET UNITYSDK_OFFSET(0x166E62C0)
#define CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_GETAMBISONICRACKID_OFFSET UNITYSDK_OFFSET(0x166E75C0)
#define CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_GETAPPLIEDDSPBUSSNAPSHOTNAME_OFFSET UNITYSDK_OFFSET(0x166E65F0)
#define CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_GETCHANNELBASEDAUDIORACKID_OFFSET UNITYSDK_OFFSET(0x166E7710)
#define CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_GETNUMRENDEREDSAMPLES_OFFSET UNITYSDK_OFFSET(0x166E7460)
#define CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_GETOBJECTBASEDAUDIORACKID_OFFSET UNITYSDK_OFFSET(0x166E7860)
#define CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_GETPASSTHROUGHRACKID_OFFSET UNITYSDK_OFFSET(0x166E79B0)
#define CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_GETPERFORMANCEINFO_OFFSET UNITYSDK_OFFSET(0x166E6920)
#define CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_RESETPERFORMANCEMONITOR_OFFSET UNITYSDK_OFFSET(0x166E6B80)
#define CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_SETAISACCONTROLBYID_OFFSET UNITYSDK_OFFSET(0x166E6F90)
#define CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_SETAISACCONTROLBYNAME_OFFSET UNITYSDK_OFFSET(0x166E6DF0)
#define CRIWARE_CRIATOMEXASRRACK_CRIWARE132E78DA_OFFSET UNITYSDK_OFFSET(0x166E5EF0)
#define CRIWARE_CRIATOMEXASRRACK_CRIWARE698F7911_OFFSET UNITYSDK_OFFSET(0x166E7100)
#define CRIWARE_CRIATOMEXASRRACK_DETACHDSPBUSSETTING_OFFSET UNITYSDK_OFFSET(0x166E61E0)
#define CRIWARE_CRIATOMEXASRRACK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x166E7180)
#define CRIWARE_CRIATOMEXASRRACK_FINALIZE_OFFSET UNITYSDK_OFFSET(0x166E7AD0)
#define CRIWARE_CRIATOMEXASRRACK_GETAMBISONICRACKID_OFFSET UNITYSDK_OFFSET(0x166E74F0)
#define CRIWARE_CRIATOMEXASRRACK_GETAPPLIEDDSPBUSSNAPSHOTNAME_1_OFFSET UNITYSDK_OFFSET(0x166E6670)
#define CRIWARE_CRIATOMEXASRRACK_GETAPPLIEDDSPBUSSNAPSHOTNAME_OFFSET UNITYSDK_OFFSET(0x166E64F0)
#define CRIWARE_CRIATOMEXASRRACK_GETCHANNELBASEDAUDIORACKID_OFFSET UNITYSDK_OFFSET(0x166E7640)
#define CRIWARE_CRIATOMEXASRRACK_GETCURRENTUSERIDPS5_OFFSET UNITYSDK_OFFSET(0x166E5A70)
#define CRIWARE_CRIATOMEXASRRACK_GETNUMRENDEREDSAMPLES_OFFSET UNITYSDK_OFFSET(0x166E7380)
#define CRIWARE_CRIATOMEXASRRACK_GETOBJECTBASEDAUDIORACKID_OFFSET UNITYSDK_OFFSET(0x166E7790)
#define CRIWARE_CRIATOMEXASRRACK_GETPASSTHROUGHRACKID_OFFSET UNITYSDK_OFFSET(0x166E78E0)
#define CRIWARE_CRIATOMEXASRRACK_GETPERFORMANCEINFOBYRACKID_OFFSET UNITYSDK_OFFSET(0x166E69A0)
#define CRIWARE_CRIATOMEXASRRACK_GETPERFORMANCEINFO_OFFSET UNITYSDK_OFFSET(0x166E6770)
#define CRIWARE_CRIATOMEXASRRACK_GET_DEFAULTCONFIG_OFFSET UNITYSDK_OFFSET(0x166E7AA0)
#define CRIWARE_CRIATOMEXASRRACK_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x166E7A40)
#define CRIWARE_CRIATOMEXASRRACK_GET_RACKID_OFFSET UNITYSDK_OFFSET(0x166E7A30)
#define CRIWARE_CRIATOMEXASRRACK_ISUSERIDSETTABLEPS5_OFFSET UNITYSDK_OFFSET(0x166E5A30)
#define CRIWARE_CRIATOMEXASRRACK_RESETPERFORMANCEMONITORBYRACKID_OFFSET UNITYSDK_OFFSET(0x166E6C00)
#define CRIWARE_CRIATOMEXASRRACK_RESETPERFORMANCEMONITOR_OFFSET UNITYSDK_OFFSET(0x166E6AA0)
#define CRIWARE_CRIATOMEXASRRACK_SETAISACCONTROL_1_OFFSET UNITYSDK_OFFSET(0x166E6EA0)
#define CRIWARE_CRIATOMEXASRRACK_SETAISACCONTROL_OFFSET UNITYSDK_OFFSET(0x166E6CE0)
#define CRIWARE_CRIATOMEXASRRACK_SETDEFAULTCONFIG_ANDROID_OFFSET UNITYSDK_OFFSET(0x166E59F0)
#define CRIWARE_CRIATOMEXASRRACK_SETDEFAULTCONFIG_OFFSET UNITYSDK_OFFSET(0x166E7020)
#define CRIWARE_CRIATOMEXASRRACK_SETDEFAULTCONFIG_PS5_OFFSET UNITYSDK_OFFSET(0x166E5A10)
#define CRIWARE_CRIATOMEXASRRACK_SETUSERIDPS5_OFFSET UNITYSDK_OFFSET(0x166E5A50)
#define CRIWARE_CRIATOMEXASRRACK__CCTOR_OFFSET UNITYSDK_OFFSET(0x166E7B40)
#define CRIWARE_CRIATOMEXASRRACK__CTOR_1_OFFSET UNITYSDK_OFFSET(0x166E5D90)
#define CRIWARE_CRIATOMEXASRRACK__CTOR_2_OFFSET UNITYSDK_OFFSET(0x166E5F80)
#define CRIWARE_CRIATOMEXASRRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x166E5A90)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAsrRack_TypeDefinitionIndex = 39912;

	class CriAtomExAsrRack : public ::CriWare::CriDisposable
	{
	public:
		static ::CriWare::CriAtomExAsrRack** StaticGet__Default_k__BackingField()
		{
			return (::CriWare::CriAtomExAsrRack**)Il2CppClass::FromTypeDefinitionIndex(CriAtomExAsrRack_TypeDefinitionIndex)->GetStaticField(0x55FA0);
		}
		// static const ::System::Int32 defaultRackId = 0x0; // 0x0
		// static const ::System::Int32 IllegalRackId = 0xFFFFFFFF; // 0x0
		::System::Int32 _rackId; // 0x20
		::System::Boolean hasExistingRackId; // 0x24

		::System::Void _ctor(::CriWare::CriAtomExAsrRack_Config a1, ::CriWare::CriAtomExAsrRack_IPlatformConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExAsrRack_Config, ::CriWare::CriAtomExAsrRack_IPlatformConfig*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::CriWare::CriAtomExAsrRack_Config a1, ::CriWare::CriAtomExAsrRack_PlatformConfig a2)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExAsrRack_Config, ::CriWare::CriAtomExAsrRack_PlatformConfig))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK__CTOR_2_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK__CCTOR_OFFSET))();
		}

		static ::System::Void SetDefaultConfig_ANDROID(::CriWare::CriAtomExAsrRack_PlatformConfigAndroid& a1)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExAsrRack_PlatformConfigAndroid&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_SETDEFAULTCONFIG_ANDROID_OFFSET))(a1);
		}

		static ::System::Void SetDefaultConfig_PS5(::CriWare::CriAtomExAsrRack_PlatformConfigPS5& a1)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExAsrRack_PlatformConfigPS5&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_SETDEFAULTCONFIG_PS5_OFFSET))(a1);
		}

		::System::Boolean IsUserIdSettablePS5(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_ISUSERIDSETTABLEPS5_OFFSET))(this, a1);
		}

		::System::Void SetUserIdPS5(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_SETUSERIDPS5_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetCurrentUserIdPS5(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_GETCURRENTUSERIDPS5_OFFSET))(this, a1);
		}

		::System::Void AttachDspBusSetting(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_ATTACHDSPBUSSETTING_OFFSET))(this, a1);
		}

		::System::Void DetachDspBusSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_DETACHDSPBUSSETTING_OFFSET))(this);
		}

		::System::Void ApplyDspBusSnapshot(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_APPLYDSPBUSSNAPSHOT_OFFSET))(this, a1, a2);
		}

		static ::System::String* GetAppliedDspBusSnapshotName(::System::Int32 a1)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_GETAPPLIEDDSPBUSSNAPSHOTNAME_OFFSET))(a1);
		}

		::System::String* GetAppliedDspBusSnapshotName_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_GETAPPLIEDDSPBUSSNAPSHOTNAME_1_OFFSET))(this);
		}

		::CriWare::CriAtomExAsrRack_PerformanceInfo GetPerformanceInfo()
		{
			return ((::CriWare::CriAtomExAsrRack_PerformanceInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_GETPERFORMANCEINFO_OFFSET))(this);
		}

		static ::CriWare::CriAtomExAsrRack_PerformanceInfo GetPerformanceInfoByRackId(::System::Int32 a1)
		{
			return ((::CriWare::CriAtomExAsrRack_PerformanceInfo(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_GETPERFORMANCEINFOBYRACKID_OFFSET))(a1);
		}

		::System::Void ResetPerformanceMonitor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_RESETPERFORMANCEMONITOR_OFFSET))(this);
		}

		static ::System::Void ResetPerformanceMonitorByRackId(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_RESETPERFORMANCEMONITORBYRACKID_OFFSET))(a1);
		}

		static ::System::Void SetAisacControl(::System::Int32 a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_SETAISACCONTROL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetAisacControl_1(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_SETAISACCONTROL_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetDefaultConfig(::CriWare::CriAtomExAsrRack_Config& a1)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExAsrRack_Config&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_SETDEFAULTCONFIG_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_DISPOSE_OFFSET))(this);
		}

		static ::System::Void GetNumRenderedSamples(::System::Int32 a1, ::System::Int64& a2, ::System::Int32& a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int64&, ::System::Int32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_GETNUMRENDEREDSAMPLES_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 GetAmbisonicRackId()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_GETAMBISONICRACKID_OFFSET))();
		}

		static ::System::Int32 GetChannelBasedAudioRackId()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_GETCHANNELBASEDAUDIORACKID_OFFSET))();
		}

		static ::System::Int32 GetObjectBasedAudioRackId()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_GETOBJECTBASEDAUDIORACKID_OFFSET))();
		}

		static ::System::Int32 GetPassThroughRackId()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_GETPASSTHROUGHRACKID_OFFSET))();
		}

		::System::Int32 get_rackId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_GET_RACKID_OFFSET))(this);
		}

		static ::CriWare::CriAtomExAsrRack* get_Default()
		{
			return ((::CriWare::CriAtomExAsrRack*(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_GET_DEFAULT_OFFSET))();
		}

		static ::CriWare::CriAtomExAsrRack_Config get_defaultConfig()
		{
			return ((::CriWare::CriAtomExAsrRack_Config(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_GET_DEFAULTCONFIG_OFFSET))();
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_FINALIZE_OFFSET))(this);
		}

		static ::System::Int32 criAtomExAsrRack_Create(::CriWare::CriAtomExAsrRack_Config& a1, ::System::IntPtr a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::CriWare::CriAtomExAsrRack_Config&, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_CREATE_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 CRIWARE132E78DA(::CriWare::CriAtomExAsrRack_Config& a1, ::CriWare::CriAtomExAsrRack_PlatformConfig& a2)
		{
			return ((::System::Int32(*)(::CriWare::CriAtomExAsrRack_Config&, ::CriWare::CriAtomExAsrRack_PlatformConfig&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_CRIWARE132E78DA_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomExAsrRack_Destroy(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_DESTROY_OFFSET))(a1);
		}

		static ::System::Void criAtomExAsrRack_AttachDspBusSetting(::System::Int32 a1, ::System::String* a2, ::System::IntPtr a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_ATTACHDSPBUSSETTING_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void criAtomExAsrRack_DetachDspBusSetting(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_DETACHDSPBUSSETTING_OFFSET))(a1);
		}

		static ::System::IntPtr criAtomExAsrRack_GetAppliedDspBusSnapshotName(::System::Int32 a1)
		{
			return ((::System::IntPtr(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_GETAPPLIEDDSPBUSSNAPSHOTNAME_OFFSET))(a1);
		}

		static ::System::Void criAtomExAsrRack_ApplyDspBusSnapshot(::System::Int32 a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_APPLYDSPBUSSNAPSHOT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CRIWARE698F7911(::CriWare::CriAtomExAsrRack_Config& a1)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExAsrRack_Config&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_CRIWARE698F7911_OFFSET))(a1);
		}

		static ::System::Void criAtomExAsrRack_GetPerformanceInfo(::System::Int32 a1, ::CriWare::CriAtomExAsrRack_PerformanceInfo& a2)
		{
			return ((::System::Void(*)(::System::Int32, ::CriWare::CriAtomExAsrRack_PerformanceInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_GETPERFORMANCEINFO_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomExAsrRack_ResetPerformanceMonitor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_RESETPERFORMANCEMONITOR_OFFSET))(a1);
		}

		static ::System::Void criAtomExAsrRack_SetAisacControlById(::System::Int32 a1, ::System::UInt16 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::UInt16, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_SETAISACCONTROLBYID_OFFSET))(a1, a2, a3);
		}

		static ::System::Void criAtomExAsrRack_SetAisacControlByName(::System::Int32 a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_SETAISACCONTROLBYNAME_OFFSET))(a1, a2, a3);
		}

		static ::System::Void criAtomExAsrRack_GetNumRenderedSamples(::System::Int32 a1, ::System::Int64& a2, ::System::Int32& a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int64&, ::System::Int32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_GETNUMRENDEREDSAMPLES_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 criAtomExAsrRack_GetAmbisonicRackId()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_GETAMBISONICRACKID_OFFSET))();
		}

		static ::System::Int32 criAtomExAsrRack_GetChannelBasedAudioRackId()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_GETCHANNELBASEDAUDIORACKID_OFFSET))();
		}

		static ::System::Int32 criAtomExAsrRack_GetObjectBasedAudioRackId()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_GETOBJECTBASEDAUDIORACKID_OFFSET))();
		}

		static ::System::Int32 criAtomExAsrRack_GetPassThroughRackId()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_GETPASSTHROUGHRACKID_OFFSET))();
		}
	};
}
