#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CRIWARE_CRIATOMEXOUTPUTANALYZER_PCMCAPTURECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11A18730)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_PCMCAPTURECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11A187B0)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_PCMCAPTURECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x11A17BB0)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_PCMCAPTURECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x11A18710)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExOutputAnalyzer_PcmCaptureCallback_TypeDefinitionIndex = 31075;

	class CriAtomExOutputAnalyzer_PcmCaptureCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_PCMCAPTURECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Il2CppArray<::System::Single>* dataL, ::Il2CppArray<::System::Single>* dataR, ::System::Int32 numChannels, ::System::Int32 numData)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_PCMCAPTURECALLBACK_INVOKE_OFFSET))(this, dataL, dataR, numChannels, numData);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::System::Single>* dataL, ::Il2CppArray<::System::Single>* dataR, ::System::Int32 numChannels, ::System::Int32 numData, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_PCMCAPTURECALLBACK_BEGININVOKE_OFFSET))(this, dataL, dataR, numChannels, numData, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_PCMCAPTURECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
