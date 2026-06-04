#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Device_ProcessMemoryCounters.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Diagnostics { class Process; }

#define RPGTOOLS_DEVICE_GETBATTERYCAPACITY_OFFSET UNITYSDK_OFFSET(0xA245C00)
#define RPGTOOLS_DEVICE_GETBATTERYCURRENT_OFFSET UNITYSDK_OFFSET(0xA245C10)
#define RPGTOOLS_DEVICE_GETBATTERYLEVEL_OFFSET UNITYSDK_OFFSET(0xA245BC0)
#define RPGTOOLS_DEVICE_GETBATTERYMAXLEVEL_OFFSET UNITYSDK_OFFSET(0xA245BB0)
#define RPGTOOLS_DEVICE_GETBATTERYPOWERCURRENT_OFFSET UNITYSDK_OFFSET(0xA245CC0)
#define RPGTOOLS_DEVICE_GETBATTERYPOWER_OFFSET UNITYSDK_OFFSET(0xA245CB0)
#define RPGTOOLS_DEVICE_GETBATTERYSTATUS_OFFSET UNITYSDK_OFFSET(0xA245BA0)
#define RPGTOOLS_DEVICE_GETBATTERYTEMPERATURE_OFFSET UNITYSDK_OFFSET(0xA245BE0)
#define RPGTOOLS_DEVICE_GETBATTERYVOLTAGE_OFFSET UNITYSDK_OFFSET(0xA245BF0)
#define RPGTOOLS_DEVICE_GETCPUCOUNT_OFFSET UNITYSDK_OFFSET(0xA2459C0)
#define RPGTOOLS_DEVICE_GETCPUCURFREQ_OFFSET UNITYSDK_OFFSET(0xA2459F0)
#define RPGTOOLS_DEVICE_GETCPUCURRENTTOTAL_OFFSET UNITYSDK_OFFSET(0xA245C90)
#define RPGTOOLS_DEVICE_GETCPUCURRENT_OFFSET UNITYSDK_OFFSET(0xA245C80)
#define RPGTOOLS_DEVICE_GETCPUMAXFREQ_OFFSET UNITYSDK_OFFSET(0xA2459D0)
#define RPGTOOLS_DEVICE_GETCPUMINFREQ_OFFSET UNITYSDK_OFFSET(0xA2459E0)
#define RPGTOOLS_DEVICE_GETCPUPOWERTIMETOTAL_OFFSET UNITYSDK_OFFSET(0xA245CA0)
#define RPGTOOLS_DEVICE_GETCPUPOWER_OFFSET UNITYSDK_OFFSET(0xA245C60)
#define RPGTOOLS_DEVICE_GETCPUTEMP_OFFSET UNITYSDK_OFFSET(0xA245A10)
#define RPGTOOLS_DEVICE_GETCPUTIMEAPP_OFFSET UNITYSDK_OFFSET(0xA245A40)
#define RPGTOOLS_DEVICE_GETCPUTIMETOTAL_OFFSET UNITYSDK_OFFSET(0xA245A20)
#define RPGTOOLS_DEVICE_GETCPUTIMEUSED_OFFSET UNITYSDK_OFFSET(0xA245A30)
#define RPGTOOLS_DEVICE_GETCPUUSAGEAPP_OFFSET UNITYSDK_OFFSET(0xA245A60)
#define RPGTOOLS_DEVICE_GETCPUUSAGE_OFFSET UNITYSDK_OFFSET(0xA245A50)
#define RPGTOOLS_DEVICE_GETGETGPUENERGYDELTA_OFFSET UNITYSDK_OFFSET(0xA245C50)
#define RPGTOOLS_DEVICE_GETGETGPUENERGY_OFFSET UNITYSDK_OFFSET(0xA245C40)
#define RPGTOOLS_DEVICE_GETGPUCURFREQ_OFFSET UNITYSDK_OFFSET(0xA245A90)
#define RPGTOOLS_DEVICE_GETGPUMAXFREQ_OFFSET UNITYSDK_OFFSET(0xA245A70)
#define RPGTOOLS_DEVICE_GETGPUMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0xA245B70)
#define RPGTOOLS_DEVICE_GETGPUMINFREQ_OFFSET UNITYSDK_OFFSET(0xA245A80)
#define RPGTOOLS_DEVICE_GETMEMORYAPPSIZE_OFFSET UNITYSDK_OFFSET(0xA245AD0)
#define RPGTOOLS_DEVICE_GETMEMORYAVAILABLESIZE_OFFSET UNITYSDK_OFFSET(0xA245AC0)
#define RPGTOOLS_DEVICE_GETMEMORYCURFREQ_OFFSET UNITYSDK_OFFSET(0xA245B90)
#define RPGTOOLS_DEVICE_GETMEMORYTOTALSIZE_OFFSET UNITYSDK_OFFSET(0xA245AA0)
#define RPGTOOLS_DEVICE_GETMEMORYUSAGEFORPROCESSKB_OFFSET UNITYSDK_OFFSET(0xA245540)
#define RPGTOOLS_DEVICE_GETNETWORKADDRESS_OFFSET UNITYSDK_OFFSET(0xA245E00)
#define RPGTOOLS_DEVICE_GETNETWORKAPPRXBYTES_OFFSET UNITYSDK_OFFSET(0xA245DC0)
#define RPGTOOLS_DEVICE_GETNETWORKAPPRXRATE_OFFSET UNITYSDK_OFFSET(0xA245DE0)
#define RPGTOOLS_DEVICE_GETNETWORKAPPTXBYTES_OFFSET UNITYSDK_OFFSET(0xA245DD0)
#define RPGTOOLS_DEVICE_GETNETWORKAPPTXRATE_OFFSET UNITYSDK_OFFSET(0xA245DF0)
#define RPGTOOLS_DEVICE_GETNETWORKMOBILERXBYTES_OFFSET UNITYSDK_OFFSET(0xA245D80)
#define RPGTOOLS_DEVICE_GETNETWORKMOBILERXRATE_OFFSET UNITYSDK_OFFSET(0xA245DA0)
#define RPGTOOLS_DEVICE_GETNETWORKMOBILETXBYTES_OFFSET UNITYSDK_OFFSET(0xA245D90)
#define RPGTOOLS_DEVICE_GETNETWORKMOBILETXRATE_OFFSET UNITYSDK_OFFSET(0xA245DB0)
#define RPGTOOLS_DEVICE_GETNETWORKSIGNAL_OFFSET UNITYSDK_OFFSET(0xA245CF0)
#define RPGTOOLS_DEVICE_GETNETWORKSTRENGTH_OFFSET UNITYSDK_OFFSET(0xA245D00)
#define RPGTOOLS_DEVICE_GETNETWORKTOTALRXBYTES_OFFSET UNITYSDK_OFFSET(0xA245D40)
#define RPGTOOLS_DEVICE_GETNETWORKTOTALRXRATE_OFFSET UNITYSDK_OFFSET(0xA245D60)
#define RPGTOOLS_DEVICE_GETNETWORKTOTALTXBYTES_OFFSET UNITYSDK_OFFSET(0xA245D50)
#define RPGTOOLS_DEVICE_GETNETWORKTOTALTXRATE_OFFSET UNITYSDK_OFFSET(0xA245D70)
#define RPGTOOLS_DEVICE_GETNETWORKTYPE_OFFSET UNITYSDK_OFFSET(0xA245CE0)
#define RPGTOOLS_DEVICE_GETNETWORKWIFIRSSI_OFFSET UNITYSDK_OFFSET(0xA245D20)
#define RPGTOOLS_DEVICE_GETNETWORKWIFISTATE_OFFSET UNITYSDK_OFFSET(0xA245D10)
#define RPGTOOLS_DEVICE_GETNETWORKWIFISTRENGTH_OFFSET UNITYSDK_OFFSET(0xA245D30)
#define RPGTOOLS_DEVICE_GETPROCESSMEMORYINFO_OFFSET UNITYSDK_OFFSET(0xA2455C0)
#define RPGTOOLS_DEVICE_GETSTORAGEAVAILABLESIZE_OFFSET UNITYSDK_OFFSET(0xA245E10)
#define RPGTOOLS_DEVICE_GETSTORAGETOTALSIZE_OFFSET UNITYSDK_OFFSET(0xA245E20)
#define RPGTOOLS_DEVICE_GETTASKENERGY_OFFSET UNITYSDK_OFFSET(0xA245C30)
#define RPGTOOLS_DEVICE_GETTHERMALSTATETEXT_OFFSET UNITYSDK_OFFSET(0xA245C70)
#define RPGTOOLS_DEVICE_GETTHERMALSTATE_OFFSET UNITYSDK_OFFSET(0xA245C20)
#define RPGTOOLS_DEVICE_GETWORKINGSETBYKB_OFFSET UNITYSDK_OFFSET(0xA245650)
#define RPGTOOLS_DEVICE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA245840)
#define RPGTOOLS_DEVICE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xA2459B0)
#define RPGTOOLS_DEVICE_ISNETWORKAVAILABLE_OFFSET UNITYSDK_OFFSET(0xA245CD0)
#define RPGTOOLS_DEVICE__CCTOR_OFFSET UNITYSDK_OFFSET(0xA245E30)
#define RPGTOOLS_DEVICE__CTOR_OFFSET UNITYSDK_OFFSET(0xA2459A0)

namespace RPGTools
{
	inline static constexpr unsigned int Device_TypeDefinitionIndex = 44270;

	class Device : public ::System::Object
	{
	public:
		static ::RPGTools::Device** StaticGet__instance()
		{
			return (::RPGTools::Device**)Il2CppClass::FromTypeDefinitionIndex(Device_TypeDefinitionIndex)->GetStaticField(0x160B0);
		}
		static ::System::Object** StaticGet__lock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Device_TypeDefinitionIndex)->GetStaticField(0x160B8);
		}
		::System::Diagnostics::Process* _processInfo; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE__CCTOR_OFFSET))();
		}

		static ::System::Int32 GetMemoryUsageForProcessKB()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETMEMORYUSAGEFORPROCESSKB_OFFSET))();
		}

		static ::System::Int32 GetProcessMemoryInfo(::System::IntPtr a1, ::RPGTools::Device_ProcessMemoryCounters* a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::RPGTools::Device_ProcessMemoryCounters*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETPROCESSMEMORYINFO_OFFSET))(a1, a2, a3);
		}

		::System::UInt64 GetWorkingSetByKB()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETWORKINGSETBYKB_OFFSET))(this);
		}

		static ::RPGTools::Device* get_instance()
		{
			return ((::RPGTools::Device*(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GET_INSTANCE_OFFSET))();
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_INITIALIZE_OFFSET))(this);
		}

		::System::Int32 GetCpuCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETCPUCOUNT_OFFSET))(this);
		}

		::System::Int32 GetCpuMaxFreq(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETCPUMAXFREQ_OFFSET))(this, a1);
		}

		::System::Int32 GetCpuMinFreq(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETCPUMINFREQ_OFFSET))(this, a1);
		}

		::System::Int32 GetCpuCurFreq(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETCPUCURFREQ_OFFSET))(this, a1);
		}

		::System::Int32 GetCpuTemp()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETCPUTEMP_OFFSET))(this);
		}

		::System::Int64 GetCpuTimeTotal()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETCPUTIMETOTAL_OFFSET))(this);
		}

		::System::Int64 GetCpuTimeUsed()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETCPUTIMEUSED_OFFSET))(this);
		}

		::System::Int64 GetCpuTimeApp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETCPUTIMEAPP_OFFSET))(this);
		}

		::System::Int32 GetCpuUsage()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETCPUUSAGE_OFFSET))(this);
		}

		::System::Int32 GetCpuUsageApp()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETCPUUSAGEAPP_OFFSET))(this);
		}

		::System::Int32 GetGpuMaxFreq()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETGPUMAXFREQ_OFFSET))(this);
		}

		::System::Int32 GetGpuMinFreq()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETGPUMINFREQ_OFFSET))(this);
		}

		::System::Int32 GetGpuCurFreq()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETGPUCURFREQ_OFFSET))(this);
		}

		::System::Int64 GetMemoryTotalSize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETMEMORYTOTALSIZE_OFFSET))(this);
		}

		::System::Int64 GetMemoryAvailableSize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETMEMORYAVAILABLESIZE_OFFSET))(this);
		}

		::System::Int64 GetMemoryAppSize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETMEMORYAPPSIZE_OFFSET))(this);
		}

		::System::Int64 GetGpuMemorySize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETGPUMEMORYSIZE_OFFSET))(this);
		}

		::System::Int32 GetMemoryCurFreq()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETMEMORYCURFREQ_OFFSET))(this);
		}

		::System::Int32 GetBatteryStatus()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETBATTERYSTATUS_OFFSET))(this);
		}

		::System::Int32 GetBatteryMaxLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETBATTERYMAXLEVEL_OFFSET))(this);
		}

		::System::Int32 GetBatteryLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETBATTERYLEVEL_OFFSET))(this);
		}

		::System::Int32 GetBatteryTemperature()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETBATTERYTEMPERATURE_OFFSET))(this);
		}

		::System::Int32 GetBatteryVoltage()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETBATTERYVOLTAGE_OFFSET))(this);
		}

		::System::Int32 GetBatteryCapacity()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETBATTERYCAPACITY_OFFSET))(this);
		}

		::System::Int32 GetBatteryCurrent()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETBATTERYCURRENT_OFFSET))(this);
		}

		::System::Int32 GetThermalState()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETTHERMALSTATE_OFFSET))(this);
		}

		::System::Int64 GetTaskEnergy()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETTASKENERGY_OFFSET))(this);
		}

		::System::Int64 GetGetGPUEnergy()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETGETGPUENERGY_OFFSET))(this);
		}

		::System::Int64 GetGetGPUEnergyDelta()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETGETGPUENERGYDELTA_OFFSET))(this);
		}

		::System::Int64 GetCPUPower()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETCPUPOWER_OFFSET))(this);
		}

		::System::String* GetThermalStateText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETTHERMALSTATETEXT_OFFSET))(this);
		}

		::System::Int32 GetCpuCurrent(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETCPUCURRENT_OFFSET))(this, a1);
		}

		::System::Double GetCpuCurrentTotal()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETCPUCURRENTTOTAL_OFFSET))(this);
		}

		::System::Int64 GetCpuPowerTimeTotal()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETCPUPOWERTIMETOTAL_OFFSET))(this);
		}

		::System::Int32 GetBatteryPower()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETBATTERYPOWER_OFFSET))(this);
		}

		::System::Int32 GetBatteryPowerCurrent()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETBATTERYPOWERCURRENT_OFFSET))(this);
		}

		::System::Boolean IsNetworkAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_ISNETWORKAVAILABLE_OFFSET))(this);
		}

		::System::Int32 GetNetworkType()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETNETWORKTYPE_OFFSET))(this);
		}

		::System::Int32 GetNetworkSignal()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETNETWORKSIGNAL_OFFSET))(this);
		}

		::System::Int32 GetNetworkStrength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETNETWORKSTRENGTH_OFFSET))(this);
		}

		::System::Int32 GetNetworkWifiState()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETNETWORKWIFISTATE_OFFSET))(this);
		}

		::System::Int32 GetNetworkWifiRssi()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETNETWORKWIFIRSSI_OFFSET))(this);
		}

		::System::Int32 GetNetworkWifiStrength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETNETWORKWIFISTRENGTH_OFFSET))(this);
		}

		::System::Int64 GetNetworkTotalRxBytes()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETNETWORKTOTALRXBYTES_OFFSET))(this);
		}

		::System::Int64 GetNetworkTotalTxBytes()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETNETWORKTOTALTXBYTES_OFFSET))(this);
		}

		::System::Int64 GetNetworkTotalRxRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETNETWORKTOTALRXRATE_OFFSET))(this);
		}

		::System::Int64 GetNetworkTotalTxRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETNETWORKTOTALTXRATE_OFFSET))(this);
		}

		::System::Int64 GetNetworkMobileRxBytes()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETNETWORKMOBILERXBYTES_OFFSET))(this);
		}

		::System::Int64 GetNetworkMobileTxBytes()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETNETWORKMOBILETXBYTES_OFFSET))(this);
		}

		::System::Int64 GetNetworkMobileRxRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETNETWORKMOBILERXRATE_OFFSET))(this);
		}

		::System::Int64 GetNetworkMobileTxRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETNETWORKMOBILETXRATE_OFFSET))(this);
		}

		::System::Int64 GetNetworkAppRxBytes()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETNETWORKAPPRXBYTES_OFFSET))(this);
		}

		::System::Int64 GetNetworkAppTxBytes()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETNETWORKAPPTXBYTES_OFFSET))(this);
		}

		::System::Int64 GetNetworkAppRxRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETNETWORKAPPRXRATE_OFFSET))(this);
		}

		::System::Int64 GetNetworkAppTxRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETNETWORKAPPTXRATE_OFFSET))(this);
		}

		::System::String* GetNetworkAddress()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETNETWORKADDRESS_OFFSET))(this);
		}

		::System::Int64 GetStorageAvailableSize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETSTORAGEAVAILABLESIZE_OFFSET))(this);
		}

		::System::Int64 GetStorageTotalSize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICE_GETSTORAGETOTALSIZE_OFFSET))(this);
		}
	};
}
