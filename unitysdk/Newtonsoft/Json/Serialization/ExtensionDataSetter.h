#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define NEWTONSOFT_JSON_SERIALIZATION_EXTENSIONDATASETTER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15B99F40)
#define NEWTONSOFT_JSON_SERIALIZATION_EXTENSIONDATASETTER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15B99F80)
#define NEWTONSOFT_JSON_SERIALIZATION_EXTENSIONDATASETTER_INVOKE_OFFSET UNITYSDK_OFFSET(0x15B99F20)
#define NEWTONSOFT_JSON_SERIALIZATION_EXTENSIONDATASETTER__CTOR_OFFSET UNITYSDK_OFFSET(0x15B99E30)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int ExtensionDataSetter_TypeDefinitionIndex = 9386;

	class ExtensionDataSetter : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_EXTENSIONDATASETTER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Object* a1, ::System::String* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_EXTENSIONDATASETTER_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::System::String* a2, ::System::Object* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::String*, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_EXTENSIONDATASETTER_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_EXTENSIONDATASETTER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
