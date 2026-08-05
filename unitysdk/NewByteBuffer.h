#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define NEWBYTEBUFFER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EDD7EE0)
#define NEWBYTEBUFFER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EDD7F10)
#define NEWBYTEBUFFER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EDD79C0)
#define NEWBYTEBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDD79A0)

inline static constexpr unsigned int NewByteBuffer_TypeDefinitionIndex = 29609;

class NewByteBuffer : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + NEWBYTEBUFFER__CTOR_OFFSET))(this, object, method);
	}

	::FlatBuffers::ByteBuffer* Invoke(::Il2CppArray<::System::Byte>* rawBytes)
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NEWBYTEBUFFER_INVOKE_OFFSET))(this, rawBytes);
	}

	::System::IAsyncResult* BeginInvoke(::Il2CppArray<::System::Byte>* rawBytes, ::System::AsyncCallback* callback, ::System::Object* object)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWBYTEBUFFER_BEGININVOKE_OFFSET))(this, rawBytes, callback, object);
	}

	::FlatBuffers::ByteBuffer* EndInvoke(::System::IAsyncResult* result)
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + NEWBYTEBUFFER_ENDINVOKE_OFFSET))(this, result);
	}
};
