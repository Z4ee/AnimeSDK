#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CRIWARE_CRIAUDIOREADSTREAM_INTERNALDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12C00460)
#define CRIWARE_CRIAUDIOREADSTREAM_INTERNALDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x12C004F0)
#define CRIWARE_CRIAUDIOREADSTREAM_INTERNALDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x12C000C0)
#define CRIWARE_CRIAUDIOREADSTREAM_INTERNALDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x12BFF9E0)

namespace CriWare
{
	inline static constexpr unsigned int CriAudioReadStream_InternalDelegate_TypeDefinitionIndex = 36832;

	class CriAudioReadStream_InternalDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIAUDIOREADSTREAM_INTERNALDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::UInt32 Invoke(::System::IntPtr cbobj, ::System::IntPtr data, ::System::UInt32 numSamples)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IntPtr, ::System::IntPtr, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIAUDIOREADSTREAM_INTERNALDELEGATE_INVOKE_OFFSET))(this, cbobj, data, numSamples);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr cbobj, ::System::IntPtr data, ::System::UInt32 numSamples, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::IntPtr, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CRIWARE_CRIAUDIOREADSTREAM_INTERNALDELEGATE_BEGININVOKE_OFFSET))(this, cbobj, data, numSamples, callback, object);
		}

		::System::UInt32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CRIWARE_CRIAUDIOREADSTREAM_INTERNALDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
