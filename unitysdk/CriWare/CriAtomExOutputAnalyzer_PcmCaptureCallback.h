#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CRIWARE_CRIATOMEXOUTPUTANALYZER_PCMCAPTURECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x146A3E20)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_PCMCAPTURECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x146A3EA0)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_PCMCAPTURECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x146A3BF0)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_PCMCAPTURECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x146A3DA0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExOutputAnalyzer_PcmCaptureCallback_TypeDefinitionIndex = 37095;

	class CriAtomExOutputAnalyzer_PcmCaptureCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_PCMCAPTURECALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Il2CppArray<::System::Single>* a1, ::Il2CppArray<::System::Single>* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_PCMCAPTURECALLBACK_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::System::Single>* a1, ::Il2CppArray<::System::Single>* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_PCMCAPTURECALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_PCMCAPTURECALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
