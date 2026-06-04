#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExAsrRack_Config.h"
#include "unitysdk/CriWare/CriAtomExAsrRack_PerformanceInfo.h"
#include "unitysdk/CriWare/CriAtomExAsrRack_PlatformConfig.h"
#include "unitysdk/CriWare/CriDisposable.h"

namespace System { class String; }

#define CRIWARE_CRIATOMEXASRRACK_APPLYDSPBUSSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1469B680)
#define CRIWARE_CRIATOMEXASRRACK_ATTACHDSPBUSSETTING_OFFSET UNITYSDK_OFFSET(0x1469B430)
#define CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_APPLYDSPBUSSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1469B730)
#define CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_ATTACHDSPBUSSETTING_OFFSET UNITYSDK_OFFSET(0x1469B4D0)
#define CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_DESTROY_OFFSET UNITYSDK_OFFSET(0x1469C170)
#define CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_DETACHDSPBUSSETTING_OFFSET UNITYSDK_OFFSET(0x1469B600)
#define CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_GETAPPLIEDDSPBUSSNAPSHOTNAME_OFFSET UNITYSDK_OFFSET(0x1469B880)
#define CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_GETPERFORMANCEINFO_OFFSET UNITYSDK_OFFSET(0x1469BB20)
#define CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_RESETPERFORMANCEMONITOR_OFFSET UNITYSDK_OFFSET(0x1469BCE0)
#define CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_SETAISACCONTROLBYID_OFFSET UNITYSDK_OFFSET(0x1469BFD0)
#define CRIWARE_CRIATOMEXASRRACK_CRIATOMEXASRRACK_SETAISACCONTROLBYNAME_OFFSET UNITYSDK_OFFSET(0x1469BE90)
#define CRIWARE_CRIATOMEXASRRACK_CRIWARE6158351D_OFFSET UNITYSDK_OFFSET(0x1469B2F0)
#define CRIWARE_CRIATOMEXASRRACK_DETACHDSPBUSSETTING_OFFSET UNITYSDK_OFFSET(0x1469B580)
#define CRIWARE_CRIATOMEXASRRACK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1469C060)
#define CRIWARE_CRIATOMEXASRRACK_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1469C230)
#define CRIWARE_CRIATOMEXASRRACK_GETAPPLIEDDSPBUSSNAPSHOTNAME_1_OFFSET UNITYSDK_OFFSET(0x1469B900)
#define CRIWARE_CRIATOMEXASRRACK_GETAPPLIEDDSPBUSSNAPSHOTNAME_OFFSET UNITYSDK_OFFSET(0x1469B7D0)
#define CRIWARE_CRIATOMEXASRRACK_GETPERFORMANCEINFOBYRACKID_OFFSET UNITYSDK_OFFSET(0x1469BBA0)
#define CRIWARE_CRIATOMEXASRRACK_GETPERFORMANCEINFO_OFFSET UNITYSDK_OFFSET(0x1469B9B0)
#define CRIWARE_CRIATOMEXASRRACK_GET_DEFAULTCONFIG_OFFSET UNITYSDK_OFFSET(0x1469C200)
#define CRIWARE_CRIATOMEXASRRACK_GET_RACKID_OFFSET UNITYSDK_OFFSET(0x1469C1F0)
#define CRIWARE_CRIATOMEXASRRACK_RESETPERFORMANCEMONITORBYRACKID_OFFSET UNITYSDK_OFFSET(0x1469BD60)
#define CRIWARE_CRIATOMEXASRRACK_RESETPERFORMANCEMONITOR_OFFSET UNITYSDK_OFFSET(0x1469BC60)
#define CRIWARE_CRIATOMEXASRRACK_SETAISACCONTROL_1_OFFSET UNITYSDK_OFFSET(0x1469BF40)
#define CRIWARE_CRIATOMEXASRRACK_SETAISACCONTROL_OFFSET UNITYSDK_OFFSET(0x1469BDE0)
#define CRIWARE_CRIATOMEXASRRACK__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1469B380)
#define CRIWARE_CRIATOMEXASRRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1469B1B0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAsrRack_TypeDefinitionIndex = 37083;

	class CriAtomExAsrRack : public ::CriWare::CriDisposable
	{
	public:
		// static const ::System::Int32 defaultRackId = 0x0; // 0x0
		::System::Int32 _rackId; // 0x20
		::System::Boolean hasExistingRackId; // 0x24

		::System::Void _ctor(::CriWare::CriAtomExAsrRack_Config a1, ::CriWare::CriAtomExAsrRack_PlatformConfig a2)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExAsrRack_Config, ::CriWare::CriAtomExAsrRack_PlatformConfig))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK__CTOR_1_OFFSET))(this, a1);
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

		static ::System::Int32 CRIWARE6158351D(::CriWare::CriAtomExAsrRack_Config& a1, ::CriWare::CriAtomExAsrRack_PlatformConfig& a2)
		{
			return ((::System::Int32(*)(::CriWare::CriAtomExAsrRack_Config&, ::CriWare::CriAtomExAsrRack_PlatformConfig&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_CRIWARE6158351D_OFFSET))(a1, a2);
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
	};
}
