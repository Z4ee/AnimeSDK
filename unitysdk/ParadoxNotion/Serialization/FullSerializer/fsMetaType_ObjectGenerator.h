#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSMETATYPE_OBJECTGENERATOR_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CC4E3B0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSMETATYPE_OBJECTGENERATOR_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CC4E3E0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSMETATYPE_OBJECTGENERATOR_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CC4E110)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSMETATYPE_OBJECTGENERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC4E0F0)

namespace ParadoxNotion::Serialization::FullSerializer
{
	inline static constexpr unsigned int fsMetaType_ObjectGenerator_TypeDefinitionIndex = 29651;

	class fsMetaType_ObjectGenerator : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSMETATYPE_OBJECTGENERATOR__CTOR_OFFSET))(this, object, method);
		}

		::System::Object* Invoke()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSMETATYPE_OBJECTGENERATOR_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSMETATYPE_OBJECTGENERATOR_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Object* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSMETATYPE_OBJECTGENERATOR_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
