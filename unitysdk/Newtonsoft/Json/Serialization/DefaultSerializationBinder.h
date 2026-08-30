#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Serialization/DefaultSerializationBinder_TypeNameKey.h"
#include "unitysdk/System/Runtime/Serialization/SerializationBinder.h"

namespace Newtonsoft::Json::Utilities { template <typename T1, typename T2> class ThreadSafeStore_2; }
namespace System { class String; }
namespace System { class Type; }

#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_BINDTOTYPE_OFFSET UNITYSDK_OFFSET(0x1BED2C00)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_GETTYPEFROMTYPENAMEKEY_OFFSET UNITYSDK_OFFSET(0x1BED2800)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTSERIALIZATIONBINDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BED2D00)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTSERIALIZATIONBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BED2C80)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int DefaultSerializationBinder_TypeDefinitionIndex = 9656;

	class DefaultSerializationBinder : public ::System::Runtime::Serialization::SerializationBinder
	{
	public:
		static ::Newtonsoft::Json::Serialization::DefaultSerializationBinder** StaticGet_Instance()
		{
			return (::Newtonsoft::Json::Serialization::DefaultSerializationBinder**)Il2CppClass::FromTypeDefinitionIndex(DefaultSerializationBinder_TypeDefinitionIndex)->GetStaticField(0x3AFD0);
		}
		::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Serialization::DefaultSerializationBinder_TypeNameKey, ::System::Type*>* _typeCache; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTSERIALIZATIONBINDER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTSERIALIZATIONBINDER__CCTOR_OFFSET))();
		}

		static ::System::Type* GetTypeFromTypeNameKey(::Newtonsoft::Json::Serialization::DefaultSerializationBinder_TypeNameKey a1)
		{
			return ((::System::Type*(*)(::Newtonsoft::Json::Serialization::DefaultSerializationBinder_TypeNameKey))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_GETTYPEFROMTYPENAMEKEY_OFFSET))(a1);
		}

		::System::Type* BindToType(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_BINDTOTYPE_OFFSET))(this, a1, a2);
		}
	};
}
