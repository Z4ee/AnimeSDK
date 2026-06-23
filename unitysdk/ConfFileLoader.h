#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define CONFFILELOADER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D78F790)
#define CONFFILELOADER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D78F7C0)
#define CONFFILELOADER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D78F250)
#define CONFFILELOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D78F230)

inline static constexpr unsigned int ConfFileLoader_TypeDefinitionIndex = 28654;

class ConfFileLoader : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CONFFILELOADER__CTOR_OFFSET))(this, object, method);
	}

	::FlatBuffers::ByteBuffer* Invoke(::System::String* filename)
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CONFFILELOADER_INVOKE_OFFSET))(this, filename);
	}

	::System::IAsyncResult* BeginInvoke(::System::String* filename, ::System::AsyncCallback* callback, ::System::Object* object)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CONFFILELOADER_BEGININVOKE_OFFSET))(this, filename, callback, object);
	}

	::FlatBuffers::ByteBuffer* EndInvoke(::System::IAsyncResult* result)
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CONFFILELOADER_ENDINVOKE_OFFSET))(this, result);
	}
};
