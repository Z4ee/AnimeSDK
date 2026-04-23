#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExAsrRack_Config.h"
#include "unitysdk/CriWare/CriAtomExAsrRack_PerformanceInfo.h"
#include "unitysdk/CriWare/CriAtomExAsrRack_PlatformConfig.h"
#include "unitysdk/CriWare/CriDisposable.h"

namespace System { class String; }

#define CRIWARE_CRIATOMEXASRRACK_APPLYDSPBUSSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x12BDDD70)
#define CRIWARE_CRIATOMEXASRRACK_ATTACHDSPBUSSETTING_OFFSET UNITYSDK_OFFSET(0x12BDDB20)
#define CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_APPLYDSPBUSSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x12BDDE20)
#define CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_ATTACHDSPBUSSETTING_OFFSET UNITYSDK_OFFSET(0x12BDDBC0)
#define CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_DESTROY_OFFSET UNITYSDK_OFFSET(0x12BDE840)
#define CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_DETACHDSPBUSSETTING_OFFSET UNITYSDK_OFFSET(0x12BDDCF0)
#define CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_GETAPPLIEDDSPBUSSNAPSHOTNAME_OFFSET UNITYSDK_OFFSET(0x12BDDF70)
#define CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_GETPERFORMANCEINFO_OFFSET UNITYSDK_OFFSET(0x12BDE210)
#define CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_RESETPERFORMANCEMONITOR_OFFSET UNITYSDK_OFFSET(0x12BDE3D0)
#define CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_SETAISACCONTROLBYID_OFFSET UNITYSDK_OFFSET(0x12BDE6C0)
#define CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_SETAISACCONTROLBYNAME_OFFSET UNITYSDK_OFFSET(0x12BDE580)
#define CRIWARE_CRIATOMEXASRRACK_CRIWARE6158351D_OFFSET UNITYSDK_OFFSET(0x12BDD9E0)
#define CRIWARE_CRIATOMEXASRRACK_DETACHDSPBUSSETTING_OFFSET UNITYSDK_OFFSET(0x12BDDC70)
#define CRIWARE_CRIATOMEXASRRACK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12BDE750)
#define CRIWARE_CRIATOMEXASRRACK_FINALIZE_OFFSET UNITYSDK_OFFSET(0x12BDE900)
#define CRIWARE_CRIATOMEXASRRACK_GETAPPLIEDDSPBUSSNAPSHOTNAME_1_OFFSET UNITYSDK_OFFSET(0x12BDDFF0)
#define CRIWARE_CRIATOMEXASRRACK_GETAPPLIEDDSPBUSSNAPSHOTNAME_OFFSET UNITYSDK_OFFSET(0x12BDDEC0)
#define CRIWARE_CRIATOMEXASRRACK_GETPERFORMANCEINFOBYRACKID_OFFSET UNITYSDK_OFFSET(0x12BDE290)
#define CRIWARE_CRIATOMEXASRRACK_GETPERFORMANCEINFO_OFFSET UNITYSDK_OFFSET(0x12BDE0A0)
#define CRIWARE_CRIATOMEXASRRACK_GET_DEFAULTCONFIG_OFFSET UNITYSDK_OFFSET(0x12BDE8D0)
#define CRIWARE_CRIATOMEXASRRACK_GET_RACKID_OFFSET UNITYSDK_OFFSET(0x12BDE8C0)
#define CRIWARE_CRIATOMEXASRRACK_RESETPERFORMANCEMONITORBYRACKID_OFFSET UNITYSDK_OFFSET(0x12BDE450)
#define CRIWARE_CRIATOMEXASRRACK_RESETPERFORMANCEMONITOR_OFFSET UNITYSDK_OFFSET(0x12BDE350)
#define CRIWARE_CRIATOMEXASRRACK_SETAISACCONTROL_1_OFFSET UNITYSDK_OFFSET(0x12BDE630)
#define CRIWARE_CRIATOMEXASRRACK_SETAISACCONTROL_OFFSET UNITYSDK_OFFSET(0x12BDE4D0)
#define CRIWARE_CRIATOMEXASRRACK__CTOR_1_OFFSET UNITYSDK_OFFSET(0x12BDDA70)
#define CRIWARE_CRIATOMEXASRRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x12BDD8A0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAsrRack_TypeDefinitionIndex = 36783;

	class CriAtomExAsrRack : public ::CriWare::CriDisposable
	{
	public:
		// static const ::System::Int32 defaultRackId = 0x0; // 0x0
		::System::Int32 _rackId; // 0x20
		::System::Boolean hasExistingRackId; // 0x24

		::System::Void _ctor(::CriWare::CriAtomExAsrRack_Config config, ::CriWare::CriAtomExAsrRack_PlatformConfig platformConfig)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExAsrRack_Config, ::CriWare::CriAtomExAsrRack_PlatformConfig))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK__CTOR_OFFSET))(this, config, platformConfig);
		}

		::System::Void _ctor_1(::System::Int32 existingRackId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK__CTOR_1_OFFSET))(this, existingRackId);
		}

		::System::Void AttachDspBusSetting(::System::String* settingName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_ATTACHDSPBUSSETTING_OFFSET))(this, settingName);
		}

		::System::Void DetachDspBusSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_DETACHDSPBUSSETTING_OFFSET))(this);
		}

		::System::Void ApplyDspBusSnapshot(::System::String* snapshotName, ::System::Int32 timeMs)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_APPLYDSPBUSSNAPSHOT_OFFSET))(this, snapshotName, timeMs);
		}

		static ::System::String* GetAppliedDspBusSnapshotName(::System::Int32 rackId)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_GETAPPLIEDDSPBUSSNAPSHOTNAME_OFFSET))(rackId);
		}

		::System::String* GetAppliedDspBusSnapshotName_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_GETAPPLIEDDSPBUSSNAPSHOTNAME_1_OFFSET))(this);
		}

		::CriWare::CriAtomExAsrRack_PerformanceInfo GetPerformanceInfo()
		{
			return ((::CriWare::CriAtomExAsrRack_PerformanceInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_GETPERFORMANCEINFO_OFFSET))(this);
		}

		static ::CriWare::CriAtomExAsrRack_PerformanceInfo GetPerformanceInfoByRackId(::System::Int32 rackId)
		{
			return ((::CriWare::CriAtomExAsrRack_PerformanceInfo(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_GETPERFORMANCEINFOBYRACKID_OFFSET))(rackId);
		}

		::System::Void ResetPerformanceMonitor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_RESETPERFORMANCEMONITOR_OFFSET))(this);
		}

		static ::System::Void ResetPerformanceMonitorByRackId(::System::Int32 rackId)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_RESETPERFORMANCEMONITORBYRACKID_OFFSET))(rackId);
		}

		static ::System::Void SetAisacControl(::System::Int32 rackId, ::System::String* controlName, ::System::Single value)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_SETAISACCONTROL_OFFSET))(rackId, controlName, value);
		}

		static ::System::Void SetAisacControl_1(::System::Int32 rackId, ::System::Int32 controlId, ::System::Single value)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_SETAISACCONTROL_1_OFFSET))(rackId, controlId, value);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_DISPOSE_OFFSET))(this);
		}

		::System::Int32 get_rackId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_GET_RACKID_OFFSET))(this);
		}

		static ::CriWare::CriAtomExAsrRack_Config get_defaultConfig()
		{
			return ((::CriWare::CriAtomExAsrRack_Config(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_GET_DEFAULTCONFIG_OFFSET))();
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_FINALIZE_OFFSET))(this);
		}

		static ::System::Int32 CRIWARE6158351D(::CriWare::CriAtomExAsrRack_Config& config, ::CriWare::CriAtomExAsrRack_PlatformConfig& platformConfig)
		{
			return ((::System::Int32(*)(::CriWare::CriAtomExAsrRack_Config&, ::CriWare::CriAtomExAsrRack_PlatformConfig&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_CRIWARE6158351D_OFFSET))(config, platformConfig);
		}

		static ::System::Void criAtomExAsrRack_Destroy(::System::Int32 rackId)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_DESTROY_OFFSET))(rackId);
		}

		static ::System::Void criAtomExAsrRack_AttachDspBusSetting(::System::Int32 rackId, ::System::String* setting, ::System::IntPtr work, ::System::Int32 workSize)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_ATTACHDSPBUSSETTING_OFFSET))(rackId, setting, work, workSize);
		}

		static ::System::Void criAtomExAsrRack_DetachDspBusSetting(::System::Int32 rackId)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_DETACHDSPBUSSETTING_OFFSET))(rackId);
		}

		static ::System::IntPtr criAtomExAsrRack_GetAppliedDspBusSnapshotName(::System::Int32 rackId)
		{
			return ((::System::IntPtr(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_GETAPPLIEDDSPBUSSNAPSHOTNAME_OFFSET))(rackId);
		}

		static ::System::Void criAtomExAsrRack_ApplyDspBusSnapshot(::System::Int32 rackId, ::System::String* snapshotName, ::System::Int32 timeMs)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_APPLYDSPBUSSNAPSHOT_OFFSET))(rackId, snapshotName, timeMs);
		}

		static ::System::Void criAtomExAsrRack_GetPerformanceInfo(::System::Int32 rackId, ::CriWare::CriAtomExAsrRack_PerformanceInfo& perfInfo)
		{
			return ((::System::Void(*)(::System::Int32, ::CriWare::CriAtomExAsrRack_PerformanceInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_GETPERFORMANCEINFO_OFFSET))(rackId, perfInfo);
		}

		static ::System::Void criAtomExAsrRack_ResetPerformanceMonitor(::System::Int32 rackId)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_RESETPERFORMANCEMONITOR_OFFSET))(rackId);
		}

		static ::System::Void criAtomExAsrRack_SetAisacControlById(::System::Int32 rackId, ::System::UInt16 controlId, ::System::Single value)
		{
			return ((::System::Void(*)(::System::Int32, ::System::UInt16, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_SETAISACCONTROLBYID_OFFSET))(rackId, controlId, value);
		}

		static ::System::Void criAtomExAsrRack_SetAisacControlByName(::System::Int32 rackId, ::System::String* controlName, ::System::Single value)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_SETAISACCONTROLBYNAME_OFFSET))(rackId, controlName, value);
		}
	};
}
