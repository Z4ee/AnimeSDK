#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CRIWARE_CRIAUDIOREADSTREAM_INTERNALDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B7AAF70)
#define CRIWARE_CRIAUDIOREADSTREAM_INTERNALDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B7AB000)
#define CRIWARE_CRIAUDIOREADSTREAM_INTERNALDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B7AAF50)
#define CRIWARE_CRIAUDIOREADSTREAM_INTERNALDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7AAEE0)

namespace CriWare
{
	inline static constexpr unsigned int CriAudioReadStream_InternalDelegate_TypeDefinitionIndex = 37932;

	class CriAudioReadStream_InternalDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIAUDIOREADSTREAM_INTERNALDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 Invoke(::System::IntPtr a1, ::System::IntPtr a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IntPtr, ::System::IntPtr, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIAUDIOREADSTREAM_INTERNALDELEGATE_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr a1, ::System::IntPtr a2, ::System::UInt32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::IntPtr, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CRIWARE_CRIAUDIOREADSTREAM_INTERNALDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::UInt32 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CRIWARE_CRIAUDIOREADSTREAM_INTERNALDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
