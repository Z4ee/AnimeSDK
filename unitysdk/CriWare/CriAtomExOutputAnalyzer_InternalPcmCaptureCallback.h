#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CRIWARE_CRIATOMEXOUTPUTANALYZER_INTERNALPCMCAPTURECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x146A3CE0)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_INTERNALPCMCAPTURECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x146A3D90)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_INTERNALPCMCAPTURECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x146A3CB0)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_INTERNALPCMCAPTURECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x146A3C40)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExOutputAnalyzer_InternalPcmCaptureCallback_TypeDefinitionIndex = 37097;

	class CriAtomExOutputAnalyzer_InternalPcmCaptureCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_INTERNALPCMCAPTURECALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::IntPtr a1, ::System::IntPtr a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::IntPtr, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_INTERNALPCMCAPTURECALLBACK_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr a1, ::System::IntPtr a2, ::System::Int32 a3, ::System::Int32 a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::IntPtr, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_INTERNALPCMCAPTURECALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_INTERNALPCMCAPTURECALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
