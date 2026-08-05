#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExAsr_BusAnalyzerConfig.h"
#include "unitysdk/CriWare/CriAtomExAsr_BusAnalyzerInfo.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CRIWARE_CRIATOMEXASR_ATTACHBUSANALYZER_1_OFFSET UNITYSDK_OFFSET(0x1F4D2B70)
#define CRIWARE_CRIATOMEXASR_ATTACHBUSANALYZER_OFFSET UNITYSDK_OFFSET(0x1F4D2A30)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASRRACK_GETNUMBUSES_OFFSET UNITYSDK_OFFSET(0x1F4D2C80)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_ATTACHBUSANALYZERBYNAME_OFFSET UNITYSDK_OFFSET(0x1F4D2AD0)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_ATTACHBUSANALYZER_OFFSET UNITYSDK_OFFSET(0x1F4D2D00)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_DETACHBUSANALYZERBYNAME_OFFSET UNITYSDK_OFFSET(0x1F4D2E20)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_DETACHBUSANALYZER_OFFSET UNITYSDK_OFFSET(0x1F4D3220)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_GETBUSANALYZERINFOBYNAME_OFFSET UNITYSDK_OFFSET(0x1F4D3490)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_GETBUSANALYZERINFO_OFFSET UNITYSDK_OFFSET(0x1F4D4230)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_REGISTEREFFECTINTERFACE_OFFSET UNITYSDK_OFFSET(0x1F4D4330)
#define CRIWARE_CRIATOMEXASR_DETACHBUSANALYZER_1_OFFSET UNITYSDK_OFFSET(0x1F4D2EC0)
#define CRIWARE_CRIATOMEXASR_DETACHBUSANALYZER_OFFSET UNITYSDK_OFFSET(0x1F4D2D80)
#define CRIWARE_CRIATOMEXASR_GETBUSANALYZERINFO_1_OFFSET UNITYSDK_OFFSET(0x1F4D4060)
#define CRIWARE_CRIATOMEXASR_GETBUSANALYZERINFO_OFFSET UNITYSDK_OFFSET(0x1F4D32A0)
#define CRIWARE_CRIATOMEXASR_REGISTEREFFECTINTERFACE_OFFSET UNITYSDK_OFFSET(0x1F4D42B0)
#define CRIWARE_CRIATOMEXASR_SETPCMBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x1F4D43B0)
#define CRIWARE_CRIATOMEXASR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F4D43C0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAsr_TypeDefinitionIndex = 34924;

	class CriAtomExAsr : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR__CTOR_OFFSET))(this);
		}

		static ::System::Void AttachBusAnalyzer(::System::String* busName, ::System::Int32 interval, ::System::Int32 peakHoldTime)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_ATTACHBUSANALYZER_OFFSET))(busName, interval, peakHoldTime);
		}

		static ::System::Void AttachBusAnalyzer_1(::System::Int32 interval, ::System::Int32 peakHoldTime)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_ATTACHBUSANALYZER_1_OFFSET))(interval, peakHoldTime);
		}

		static ::System::Void DetachBusAnalyzer(::System::String* busName)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_DETACHBUSANALYZER_OFFSET))(busName);
		}

		static ::System::Void DetachBusAnalyzer_1()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_DETACHBUSANALYZER_1_OFFSET))();
		}

		static ::System::Void GetBusAnalyzerInfo(::System::String* busName, ::CriWare::CriAtomExAsr_BusAnalyzerInfo& info)
		{
			return ((::System::Void(*)(::System::String*, ::CriWare::CriAtomExAsr_BusAnalyzerInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_GETBUSANALYZERINFO_OFFSET))(busName, info);
		}

		static ::System::Void GetBusAnalyzerInfo_1(::System::Int32 busId, ::CriWare::CriAtomExAsr_BusAnalyzerInfo& info)
		{
			return ((::System::Void(*)(::System::Int32, ::CriWare::CriAtomExAsr_BusAnalyzerInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_GETBUSANALYZERINFO_1_OFFSET))(busId, info);
		}

		static ::System::Boolean RegisterEffectInterface(::System::IntPtr afx_interface)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_REGISTEREFFECTINTERFACE_OFFSET))(afx_interface);
		}

		static ::System::Void SetPcmBufferSize(::System::Int32 numSamples)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_SETPCMBUFFERSIZE_OFFSET))(numSamples);
		}

		static ::System::Void criAtomExAsr_AttachBusAnalyzerByName(::System::String* busName, ::CriWare::CriAtomExAsr_BusAnalyzerConfig& config)
		{
			return ((::System::Void(*)(::System::String*, ::CriWare::CriAtomExAsr_BusAnalyzerConfig&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_CRIATOMEXASR_ATTACHBUSANALYZERBYNAME_OFFSET))(busName, config);
		}

		static ::System::Void criAtomExAsr_AttachBusAnalyzer(::System::Int32 busNo, ::CriWare::CriAtomExAsr_BusAnalyzerConfig& config)
		{
			return ((::System::Void(*)(::System::Int32, ::CriWare::CriAtomExAsr_BusAnalyzerConfig&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_CRIATOMEXASR_ATTACHBUSANALYZER_OFFSET))(busNo, config);
		}

		static ::System::Void criAtomExAsr_DetachBusAnalyzerByName(::System::String* busName)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_CRIATOMEXASR_DETACHBUSANALYZERBYNAME_OFFSET))(busName);
		}

		static ::System::Void criAtomExAsr_DetachBusAnalyzer(::System::Int32 busNo)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_CRIATOMEXASR_DETACHBUSANALYZER_OFFSET))(busNo);
		}

		static ::System::Void criAtomExAsr_GetBusAnalyzerInfoByName(::System::String* busName, ::System::IntPtr info)
		{
			return ((::System::Void(*)(::System::String*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_CRIATOMEXASR_GETBUSANALYZERINFOBYNAME_OFFSET))(busName, info);
		}

		static ::System::Void criAtomExAsr_GetBusAnalyzerInfo(::System::Int32 busNo, ::System::IntPtr info)
		{
			return ((::System::Void(*)(::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_CRIATOMEXASR_GETBUSANALYZERINFO_OFFSET))(busNo, info);
		}

		static ::System::Boolean criAtomExAsr_RegisterEffectInterface(::System::IntPtr afx_interface)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_CRIATOMEXASR_REGISTEREFFECTINTERFACE_OFFSET))(afx_interface);
		}

		static ::System::Int32 criAtomExAsrRack_GetNumBuses(::System::Int32 rackId)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_CRIATOMEXASRRACK_GETNUMBUSES_OFFSET))(rackId);
		}
	};
}
