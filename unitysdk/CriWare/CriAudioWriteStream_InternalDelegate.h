#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CRIWARE_CRIAUDIOWRITESTREAM_INTERNALDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x146BC3A0)
#define CRIWARE_CRIAUDIOWRITESTREAM_INTERNALDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x146BC430)
#define CRIWARE_CRIAUDIOWRITESTREAM_INTERNALDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x146BC380)
#define CRIWARE_CRIAUDIOWRITESTREAM_INTERNALDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x146BC310)

namespace CriWare
{
	inline static constexpr unsigned int CriAudioWriteStream_InternalDelegate_TypeDefinitionIndex = 37136;

	class CriAudioWriteStream_InternalDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIAUDIOWRITESTREAM_INTERNALDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 Invoke(::System::IntPtr a1, ::System::IntPtr a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IntPtr, ::System::IntPtr, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIAUDIOWRITESTREAM_INTERNALDELEGATE_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr a1, ::System::IntPtr a2, ::System::UInt32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::IntPtr, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CRIWARE_CRIAUDIOWRITESTREAM_INTERNALDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::UInt32 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CRIWARE_CRIAUDIOWRITESTREAM_INTERNALDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
