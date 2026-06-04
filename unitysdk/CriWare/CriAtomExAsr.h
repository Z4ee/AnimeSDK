#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExAsr_BusAnalyzerConfig.h"
#include "unitysdk/CriWare/CriAtomExAsr_BusAnalyzerInfo.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CRIWARE_CRIATOMEXASR_ATTACHBUSANALYZER_1_OFFSET UNITYSDK_OFFSET(0x14681480)
#define CRIWARE_CRIATOMEXASR_ATTACHBUSANALYZER_OFFSET UNITYSDK_OFFSET(0x14681320)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_ATTACHBUSANALYZERBYNAME_OFFSET UNITYSDK_OFFSET(0x146996F0)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_ATTACHBUSANALYZER_OFFSET UNITYSDK_OFFSET(0x14699790)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_DETACHBUSANALYZERBYNAME_OFFSET UNITYSDK_OFFSET(0x14699810)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_DETACHBUSANALYZER_OFFSET UNITYSDK_OFFSET(0x146998B0)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_GETBUSANALYZERINFOBYNAME_OFFSET UNITYSDK_OFFSET(0x14699930)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_GETBUSANALYZERINFO_OFFSET UNITYSDK_OFFSET(0x14699FA0)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_GETBUSVOLUMEBYNAME_OFFSET UNITYSDK_OFFSET(0x1469B0D0)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_GETEFFECTPARAMETER_OFFSET UNITYSDK_OFFSET(0x1469AD60)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_REGISTEREFFECTINTERFACE_OFFSET UNITYSDK_OFFSET(0x1469AEB0)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_SETBUSMATRIXBYNAME_OFFSET UNITYSDK_OFFSET(0x1469A610)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_SETBUSMATRIX_OFFSET UNITYSDK_OFFSET(0x1469A760)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_SETBUSSENDLEVELBYNAME_OFFSET UNITYSDK_OFFSET(0x1469A370)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_SETBUSSENDLEVEL_OFFSET UNITYSDK_OFFSET(0x1469A4D0)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_SETBUSVOLUMEBYNAME_OFFSET UNITYSDK_OFFSET(0x1469A0D0)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_SETBUSVOLUME_OFFSET UNITYSDK_OFFSET(0x1469A210)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_SETEFFECTBYPASS_OFFSET UNITYSDK_OFFSET(0x1469A8C0)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_SETEFFECTPARAMETER_OFFSET UNITYSDK_OFFSET(0x1469AB00)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_UNREGISTEREFFECTINTERFACE_OFFSET UNITYSDK_OFFSET(0x1469AFB0)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_UPDATEEFFECTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1469ABD0)
#define CRIWARE_CRIATOMEXASR_DETACHBUSANALYZER_1_OFFSET UNITYSDK_OFFSET(0x14681810)
#define CRIWARE_CRIATOMEXASR_DETACHBUSANALYZER_OFFSET UNITYSDK_OFFSET(0x146813C0)
#define CRIWARE_CRIATOMEXASR_GETBUSANALYZERINFO_1_OFFSET UNITYSDK_OFFSET(0x14681E10)
#define CRIWARE_CRIATOMEXASR_GETBUSANALYZERINFO_OFFSET UNITYSDK_OFFSET(0x14681BB0)
#define CRIWARE_CRIATOMEXASR_GETBUSVOLUME_OFFSET UNITYSDK_OFFSET(0x1469B030)
#define CRIWARE_CRIATOMEXASR_GETEFFECTPARAMETER_OFFSET UNITYSDK_OFFSET(0x1469AC90)
#define CRIWARE_CRIATOMEXASR_GETNUMBUFFEREDPCMOUTPUTSAMPLES_OFFSET UNITYSDK_OFFSET(0x1469B180)
#define CRIWARE_CRIATOMEXASR_GETPCMOUTPUT_OFFSET UNITYSDK_OFFSET(0x1469B170)
#define CRIWARE_CRIATOMEXASR_REGISTEREFFECTINTERFACE_OFFSET UNITYSDK_OFFSET(0x1469AE30)
#define CRIWARE_CRIATOMEXASR_SETBUSMATRIX_1_OFFSET UNITYSDK_OFFSET(0x1469A6C0)
#define CRIWARE_CRIATOMEXASR_SETBUSMATRIX_OFFSET UNITYSDK_OFFSET(0x1469A560)
#define CRIWARE_CRIATOMEXASR_SETBUSSENDLEVEL_1_OFFSET UNITYSDK_OFFSET(0x1469A440)
#define CRIWARE_CRIATOMEXASR_SETBUSSENDLEVEL_OFFSET UNITYSDK_OFFSET(0x1469A2A0)
#define CRIWARE_CRIATOMEXASR_SETBUSVOLUME_1_OFFSET UNITYSDK_OFFSET(0x1469A180)
#define CRIWARE_CRIATOMEXASR_SETBUSVOLUME_OFFSET UNITYSDK_OFFSET(0x1469A020)
#define CRIWARE_CRIATOMEXASR_SETEFFECTBYPASS_OFFSET UNITYSDK_OFFSET(0x1469A800)
#define CRIWARE_CRIATOMEXASR_SETEFFECTPARAMETER_OFFSET UNITYSDK_OFFSET(0x1469A980)
#define CRIWARE_CRIATOMEXASR_SETPCMBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x1469B190)
#define CRIWARE_CRIATOMEXASR_UNREGISTEREFFECTINTERFACE_OFFSET UNITYSDK_OFFSET(0x1469AF30)
#define CRIWARE_CRIATOMEXASR__CTOR_OFFSET UNITYSDK_OFFSET(0x1469B1A0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAsr_TypeDefinitionIndex = 37048;

	class CriAtomExAsr : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR__CTOR_OFFSET))(this);
		}

		static ::System::Void AttachBusAnalyzer(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_ATTACHBUSANALYZER_OFFSET))(a1, a2, a3);
		}

		static ::System::Void AttachBusAnalyzer_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_ATTACHBUSANALYZER_1_OFFSET))(a1, a2);
		}

		static ::System::Void DetachBusAnalyzer(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_DETACHBUSANALYZER_OFFSET))(a1);
		}

		static ::System::Void DetachBusAnalyzer_1()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_DETACHBUSANALYZER_1_OFFSET))();
		}

		static ::System::Void GetBusAnalyzerInfo(::System::String* a1, ::CriWare::CriAtomExAsr_BusAnalyzerInfo& a2)
		{
			return ((::System::Void(*)(::System::String*, ::CriWare::CriAtomExAsr_BusAnalyzerInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_GETBUSANALYZERINFO_OFFSET))(a1, a2);
		}

		static ::System::Void GetBusAnalyzerInfo_1(::System::Int32 a1, ::CriWare::CriAtomExAsr_BusAnalyzerInfo& a2)
		{
			return ((::System::Void(*)(::System::Int32, ::CriWare::CriAtomExAsr_BusAnalyzerInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_GETBUSANALYZERINFO_1_OFFSET))(a1, a2);
		}

		static ::System::Void SetBusVolume(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_SETBUSVOLUME_OFFSET))(a1, a2);
		}

		static ::System::Void SetBusVolume_1(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_SETBUSVOLUME_1_OFFSET))(a1, a2);
		}

		static ::System::Void SetBusSendLevel(::System::String* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_SETBUSSENDLEVEL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetBusSendLevel_1(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_SETBUSSENDLEVEL_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetBusMatrix(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Single>* a4)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_SETBUSMATRIX_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void SetBusMatrix_1(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Single>* a4)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_SETBUSMATRIX_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void SetEffectBypass(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_SETEFFECTBYPASS_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetEffectParameter(::System::String* a1, ::System::String* a2, ::System::UInt32 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_SETEFFECTPARAMETER_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single GetEffectParameter(::System::String* a1, ::System::String* a2, ::System::UInt32 a3)
		{
			return ((::System::Single(*)(::System::String*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_GETEFFECTPARAMETER_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean RegisterEffectInterface(::System::IntPtr a1)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_REGISTEREFFECTINTERFACE_OFFSET))(a1);
		}

		static ::System::Void UnregisterEffectInterface(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_UNREGISTEREFFECTINTERFACE_OFFSET))(a1);
		}

		static ::System::Void GetBusVolume(::System::String* a1, ::System::Single& a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Single&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_GETBUSVOLUME_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetPcmOutput(::System::Int32 a1, ::System::Int32 a2, ::Il2CppArray<::Il2CppArray<::System::Single>*>* a3)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::Il2CppArray<::System::Single>*>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_GETPCMOUTPUT_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 GetNumBufferedPcmOutputSamples()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_GETNUMBUFFEREDPCMOUTPUTSAMPLES_OFFSET))();
		}

		static ::System::Void SetPcmBufferSize(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_SETPCMBUFFERSIZE_OFFSET))(a1);
		}

		static ::System::Void criAtomExAsr_AttachBusAnalyzerByName(::System::String* a1, ::CriWare::CriAtomExAsr_BusAnalyzerConfig& a2)
		{
			return ((::System::Void(*)(::System::String*, ::CriWare::CriAtomExAsr_BusAnalyzerConfig&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_CRIATOMEXASR_ATTACHBUSANALYZERBYNAME_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomExAsr_AttachBusAnalyzer(::System::Int32 a1, ::CriWare::CriAtomExAsr_BusAnalyzerConfig& a2)
		{
			return ((::System::Void(*)(::System::Int32, ::CriWare::CriAtomExAsr_BusAnalyzerConfig&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_CRIATOMEXASR_ATTACHBUSANALYZER_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomExAsr_DetachBusAnalyzerByName(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_CRIATOMEXASR_DETACHBUSANALYZERBYNAME_OFFSET))(a1);
		}

		static ::System::Void criAtomExAsr_DetachBusAnalyzer(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_CRIATOMEXASR_DETACHBUSANALYZER_OFFSET))(a1);
		}

		static ::System::Void criAtomExAsr_GetBusAnalyzerInfoByName(::System::String* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_CRIATOMEXASR_GETBUSANALYZERINFOBYNAME_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomExAsr_GetBusAnalyzerInfo(::System::Int32 a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_CRIATOMEXASR_GETBUSANALYZERINFO_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomExAsr_SetBusVolumeByName(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_CRIATOMEXASR_SETBUSVOLUMEBYNAME_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomExAsr_SetBusVolume(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_CRIATOMEXASR_SETBUSVOLUME_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomExAsr_SetBusSendLevelByName(::System::String* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_CRIATOMEXASR_SETBUSSENDLEVELBYNAME_OFFSET))(a1, a2, a3);
		}

		static ::System::Void criAtomExAsr_SetBusSendLevel(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_CRIATOMEXASR_SETBUSSENDLEVEL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void criAtomExAsr_SetBusMatrixByName(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Single>* a4)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_CRIATOMEXASR_SETBUSMATRIXBYNAME_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void criAtomExAsr_SetBusMatrix(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Single>* a4)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_CRIATOMEXASR_SETBUSMATRIX_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void criAtomExAsr_SetEffectBypass(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_CRIATOMEXASR_SETEFFECTBYPASS_OFFSET))(a1, a2, a3);
		}

		static ::System::Void criAtomExAsr_UpdateEffectParameters(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_CRIATOMEXASR_UPDATEEFFECTPARAMETERS_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomExAsr_SetEffectParameter(::System::String* a1, ::System::String* a2, ::System::UInt32 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_CRIATOMEXASR_SETEFFECTPARAMETER_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single criAtomExAsr_GetEffectParameter(::System::String* a1, ::System::String* a2, ::System::UInt32 a3)
		{
			return ((::System::Single(*)(::System::String*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_CRIATOMEXASR_GETEFFECTPARAMETER_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean criAtomExAsr_RegisterEffectInterface(::System::IntPtr a1)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_CRIATOMEXASR_REGISTEREFFECTINTERFACE_OFFSET))(a1);
		}

		static ::System::Void criAtomExAsr_UnregisterEffectInterface(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_CRIATOMEXASR_UNREGISTEREFFECTINTERFACE_OFFSET))(a1);
		}

		static ::System::Void criAtomExAsr_GetBusVolumeByName(::System::String* a1, ::System::Single& a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Single&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_CRIATOMEXASR_GETBUSVOLUMEBYNAME_OFFSET))(a1, a2);
		}
	};
}
