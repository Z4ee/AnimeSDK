#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExOutputAnalyzer_Config.h"
#include "unitysdk/CriWare/CriDisposable.h"

namespace CriWare { class CriAtomExOutputAnalyzer_InternalPcmCaptureCallback; }
namespace CriWare { class CriAtomExOutputAnalyzer_PcmCaptureCallback; }
namespace CriWare { class CriAtomExPlayer; }
namespace System { class String; }

#define CRIWARE_CRIATOMEXOUTPUTANALYZER_ATTACHDSPBUS_OFFSET UNITYSDK_OFFSET(0x12BE56A0)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_ATTACHEXPLAYER_OFFSET UNITYSDK_OFFSET(0x12BE53F0)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_CALLBACK_OFFSET UNITYSDK_OFFSET(0x12BE49C0)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_ATTACHDSPBUSBYNAME_OFFSET UNITYSDK_OFFSET(0x12BE57C0)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_ATTACHEXPLAYER_OFFSET UNITYSDK_OFFSET(0x12BE55A0)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_CREATE_OFFSET UNITYSDK_OFFSET(0x12BE6310)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_DESTROY_OFFSET UNITYSDK_OFFSET(0x12BE5370)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_DETACHDSPBUSBYNAME_OFFSET UNITYSDK_OFFSET(0x12BE5860)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_DETACHEXPLAYER_OFFSET UNITYSDK_OFFSET(0x12BE5620)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_EXECUTEQUEUEDPCMCAPTURERCALLBACKS_OFFSET UNITYSDK_OFFSET(0x12BE61B0)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_GETPCMDATA_OFFSET UNITYSDK_OFFSET(0x12BE5F00)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_GETRMS_OFFSET UNITYSDK_OFFSET(0x12BE5B30)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_GETSPECTRUMLEVELS_OFFSET UNITYSDK_OFFSET(0x12BE5D10)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_DETACHDSPBUS_OFFSET UNITYSDK_OFFSET(0x12BE5260)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_DETACHEXPLAYER_OFFSET UNITYSDK_OFFSET(0x12BE4F40)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x12BE4DC0)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12BE4DB0)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_EXECUTEPCMCAPTURECALLBACK_1_OFFSET UNITYSDK_OFFSET(0x12BE6230)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_EXECUTEPCMCAPTURECALLBACK_OFFSET UNITYSDK_OFFSET(0x12BE5FA0)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x12BE62A0)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_GETPCMDATA_OFFSET UNITYSDK_OFFSET(0x12BE5D90)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_GETRMS_OFFSET UNITYSDK_OFFSET(0x12BE5900)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_GETSPECTRUMLEVELS_OFFSET UNITYSDK_OFFSET(0x12BE5BB0)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_GET_NATIVEHANDLE_OFFSET UNITYSDK_OFFSET(0x12BE4BA0)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_INITIALIZEWITHCONFIG_OFFSET UNITYSDK_OFFSET(0x12BE4C30)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_SETPCMCAPTURECALLBACK_OFFSET UNITYSDK_OFFSET(0x12BE5F90)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER__CCTOR_OFFSET UNITYSDK_OFFSET(0x12BE6A60)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x12BE6240)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER__CTOR_OFFSET UNITYSDK_OFFSET(0x12BE4BB0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExOutputAnalyzer_TypeDefinitionIndex = 36794;

	class CriAtomExOutputAnalyzer : public ::CriWare::CriDisposable
	{
	public:
		static ::Il2CppArray<::System::Single>** StaticGet_DataR()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(CriAtomExOutputAnalyzer_TypeDefinitionIndex)->GetStaticField(0xB530);
		}
		static ::Il2CppArray<::System::Single>** StaticGet_DataL()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(CriAtomExOutputAnalyzer_TypeDefinitionIndex)->GetStaticField(0xB538);
		}
		static ::CriWare::CriAtomExOutputAnalyzer_PcmCaptureCallback** StaticGet_UserPcmCaptureCallback()
		{
			return (::CriWare::CriAtomExOutputAnalyzer_PcmCaptureCallback**)Il2CppClass::FromTypeDefinitionIndex(CriAtomExOutputAnalyzer_TypeDefinitionIndex)->GetStaticField(0xB540);
		}
		static ::CriWare::CriAtomExOutputAnalyzer_InternalPcmCaptureCallback** StaticGet_DelegateObject()
		{
			return (::CriWare::CriAtomExOutputAnalyzer_InternalPcmCaptureCallback**)Il2CppClass::FromTypeDefinitionIndex(CriAtomExOutputAnalyzer_TypeDefinitionIndex)->GetStaticField(0xB548);
		}
		static ::System::IntPtr* StaticGet_InternalCallbackFunctionPointer()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CriAtomExOutputAnalyzer_TypeDefinitionIndex)->GetStaticField(0x4400);
		}
		// static const ::System::Int32 MaximumSpectrumBands = 0x200; // 0x0
		// static const ::System::Int32 pcmCapturerNumMaxData = 0x200; // 0x0
		::CriWare::CriAtomExOutputAnalyzer_PcmCaptureCallback* userPcmCaptureCallback; // 0x20
		::Il2CppArray<::System::Single>* dataL; // 0x28
		::Il2CppArray<::System::Single>* dataR; // 0x30
		::CriWare::CriAtomExPlayer* player; // 0x38
		::System::String* busName; // 0x40
		::System::Int32 numCapturedPcmSamples; // 0x48
		::System::Int32 numBands; // 0x4C
		::System::IntPtr handle; // 0x50

		::System::Void _ctor(::CriWare::CriAtomExOutputAnalyzer_Config config)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExOutputAnalyzer_Config))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER__CTOR_OFFSET))(this, config);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER__CTOR_1_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER__CCTOR_OFFSET))();
		}

		::System::IntPtr get_nativeHandle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_GET_NATIVEHANDLE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Boolean AttachExPlayer(::CriWare::CriAtomExPlayer* player)
		{
			return ((::System::Boolean(*)(::PVOID, ::CriWare::CriAtomExPlayer*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_ATTACHEXPLAYER_OFFSET))(this, player);
		}

		::System::Void DetachExPlayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_DETACHEXPLAYER_OFFSET))(this);
		}

		::System::Boolean AttachDspBus(::System::String* busName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_ATTACHDSPBUS_OFFSET))(this, busName);
		}

		::System::Void DetachDspBus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_DETACHDSPBUS_OFFSET))(this);
		}

		::System::Single GetRms(::System::Int32 channel)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_GETRMS_OFFSET))(this, channel);
		}

		::System::Void GetSpectrumLevels(::Il2CppArray<::System::Single>*& levels)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_GETSPECTRUMLEVELS_OFFSET))(this, levels);
		}

		::System::Void GetPcmData(::Il2CppArray<::System::Single>*& data, ::System::Int32 ch)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*&, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_GETPCMDATA_OFFSET))(this, data, ch);
		}

		::System::Void SetPcmCaptureCallback(::CriWare::CriAtomExOutputAnalyzer_PcmCaptureCallback* callback)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExOutputAnalyzer_PcmCaptureCallback*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_SETPCMCAPTURECALLBACK_OFFSET))(this, callback);
		}

		::System::Void ExecutePcmCaptureCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_EXECUTEPCMCAPTURECALLBACK_OFFSET))(this);
		}

		::System::Void ExecutePcmCaptureCallback_1(::CriWare::CriAtomExOutputAnalyzer_PcmCaptureCallback* callback)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExOutputAnalyzer_PcmCaptureCallback*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_EXECUTEPCMCAPTURECALLBACK_1_OFFSET))(this, callback);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_FINALIZE_OFFSET))(this);
		}

		::System::Void InitializeWithConfig(::CriWare::CriAtomExOutputAnalyzer_Config config)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExOutputAnalyzer_Config))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_INITIALIZEWITHCONFIG_OFFSET))(this, config);
		}

		static ::System::Void Callback(::System::IntPtr ptrL, ::System::IntPtr ptrR, ::System::Int32 numChannels, ::System::Int32 numData)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_CALLBACK_OFFSET))(ptrL, ptrR, numChannels, numData);
		}

		static ::System::IntPtr criAtomExOutputAnalyzer_Create(::CriWare::CriAtomExOutputAnalyzer_Config& config)
		{
			return ((::System::IntPtr(*)(::CriWare::CriAtomExOutputAnalyzer_Config&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_CREATE_OFFSET))(config);
		}

		static ::System::Void criAtomExOutputAnalyzer_Destroy(::System::IntPtr analyzer)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_DESTROY_OFFSET))(analyzer);
		}

		static ::System::Void criAtomExOutputAnalyzer_AttachExPlayer(::System::IntPtr analyzer, ::System::IntPtr player)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_ATTACHEXPLAYER_OFFSET))(analyzer, player);
		}

		static ::System::Void criAtomExOutputAnalyzer_DetachExPlayer(::System::IntPtr analyzer, ::System::IntPtr player)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_DETACHEXPLAYER_OFFSET))(analyzer, player);
		}

		static ::System::Void criAtomExOutputAnalyzer_AttachDspBusByName(::System::IntPtr analyzer, ::System::String* busName)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_ATTACHDSPBUSBYNAME_OFFSET))(analyzer, busName);
		}

		static ::System::Void criAtomExOutputAnalyzer_DetachDspBusByName(::System::IntPtr analyzer, ::System::String* busName)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_DETACHDSPBUSBYNAME_OFFSET))(analyzer, busName);
		}

		static ::System::Single criAtomExOutputAnalyzer_GetRms(::System::IntPtr analyzer, ::System::Int32 channel)
		{
			return ((::System::Single(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_GETRMS_OFFSET))(analyzer, channel);
		}

		static ::System::IntPtr criAtomExOutputAnalyzer_GetSpectrumLevels(::System::IntPtr analyzer)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_GETSPECTRUMLEVELS_OFFSET))(analyzer);
		}

		static ::System::IntPtr criAtomExOutputAnalyzer_GetPcmData(::System::IntPtr analyzer, ::System::Int32 ch)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_GETPCMDATA_OFFSET))(analyzer, ch);
		}

		static ::System::Void criAtomExOutputAnalyzer_ExecuteQueuedPcmCapturerCallbacks(::System::IntPtr analyzer, ::System::IntPtr callback)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_EXECUTEQUEUEDPCMCAPTURERCALLBACKS_OFFSET))(analyzer, callback);
		}
	};
}
