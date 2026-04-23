#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CRIWARE_CRIATOMEXOUTPUTANALYZER_INTERNALPCMCAPTURECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12BE6E50)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_INTERNALPCMCAPTURECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x12BE6F00)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_INTERNALPCMCAPTURECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x12BE6AB0)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_INTERNALPCMCAPTURECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x12BE6190)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExOutputAnalyzer_InternalPcmCaptureCallback_TypeDefinitionIndex = 36797;

	class CriAtomExOutputAnalyzer_InternalPcmCaptureCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_INTERNALPCMCAPTURECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::IntPtr dataL, ::System::IntPtr dataR, ::System::Int32 numChannels, ::System::Int32 numData)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::IntPtr, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_INTERNALPCMCAPTURECALLBACK_INVOKE_OFFSET))(this, dataL, dataR, numChannels, numData);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr dataL, ::System::IntPtr dataR, ::System::Int32 numChannels, ::System::Int32 numData, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::IntPtr, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_INTERNALPCMCAPTURECALLBACK_BEGININVOKE_OFFSET))(this, dataL, dataR, numChannels, numData, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_INTERNALPCMCAPTURECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
