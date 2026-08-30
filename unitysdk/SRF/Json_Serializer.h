#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IDictionary; }
namespace System::Collections { class IList; }
namespace System::Text { class StringBuilder; }

#define SRF_JSON_SERIALIZER_SERIALIZEARRAY_OFFSET UNITYSDK_OFFSET(0x1E6ABF90)
#define SRF_JSON_SERIALIZER_SERIALIZEOBJECT_OFFSET UNITYSDK_OFFSET(0x1E6AC700)
#define SRF_JSON_SERIALIZER_SERIALIZEOTHER_OFFSET UNITYSDK_OFFSET(0x1E6AD270)
#define SRF_JSON_SERIALIZER_SERIALIZESTRING_OFFSET UNITYSDK_OFFSET(0x1E6ABB30)
#define SRF_JSON_SERIALIZER_SERIALIZEVALUE_OFFSET UNITYSDK_OFFSET(0x1E6ABA10)
#define SRF_JSON_SERIALIZER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E6AA530)
#define SRF_JSON_SERIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6AB990)

namespace SRF
{
	inline static constexpr unsigned int Json_Serializer_TypeDefinitionIndex = 34689;

	class Json_Serializer : public ::System::Object
	{
	public:
		::System::Text::StringBuilder* builder; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_JSON_SERIALIZER__CTOR_OFFSET))(this);
		}

		static ::System::String* Serialize(::System::Object* a1)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SRF_JSON_SERIALIZER_SERIALIZE_OFFSET))(a1);
		}

		::System::Void SerializeValue(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SRF_JSON_SERIALIZER_SERIALIZEVALUE_OFFSET))(this, a1);
		}

		::System::Void SerializeObject(::System::Collections::IDictionary* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + SRF_JSON_SERIALIZER_SERIALIZEOBJECT_OFFSET))(this, a1);
		}

		::System::Void SerializeArray(::System::Collections::IList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IList*))((::PBYTE)hIl2Cpp + SRF_JSON_SERIALIZER_SERIALIZEARRAY_OFFSET))(this, a1);
		}

		::System::Void SerializeString(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SRF_JSON_SERIALIZER_SERIALIZESTRING_OFFSET))(this, a1);
		}

		::System::Void SerializeOther(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SRF_JSON_SERIALIZER_SERIALIZEOTHER_OFFSET))(this, a1);
		}
	};
}
