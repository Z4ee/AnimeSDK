#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FOUNDATION_SERIALIZEX_SERIALIZETOBASE64_OFFSET UNITYSDK_OFFSET(0x1ED90340)
#define FOUNDATION_SERIALIZEX_SERIALIZETOBYTES_OFFSET UNITYSDK_OFFSET(0x1ED90030)
#define FOUNDATION_SERIALIZEX_SERIALIZETOUTF8STRING_OFFSET UNITYSDK_OFFSET(0x1ED90210)
#define FOUNDATION_SERIALIZEX_TOBINARY_OFFSET UNITYSDK_OFFSET(0x1ED8FC30)
#define FOUNDATION_SERIALIZEX_TOJSON_OFFSET UNITYSDK_OFFSET(0x1ED8FBE0)

namespace Foundation
{
	inline static constexpr unsigned int SerializeX_TypeDefinitionIndex = 7837;

	class SerializeX : public ::System::Object
	{
	public:
		static ::System::String* ToJson(::System::Object* data, ::System::Boolean prettyPrint)
		{
			return ((::System::String*(*)(::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_SERIALIZEX_TOJSON_OFFSET))(data, prettyPrint);
		}

		static ::Il2CppArray<::System::Byte>* ToBinary(::System::Object* data)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_SERIALIZEX_TOBINARY_OFFSET))(data);
		}

		static ::Il2CppArray<::System::Byte>* SerializeToBytes(::System::Object* obj)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_SERIALIZEX_SERIALIZETOBYTES_OFFSET))(obj);
		}

		static ::System::String* SerializeToUtf8String(::System::Object* obj)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_SERIALIZEX_SERIALIZETOUTF8STRING_OFFSET))(obj);
		}

		static ::System::String* SerializeToBase64(::System::Object* obj)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_SERIALIZEX_SERIALIZETOBASE64_OFFSET))(obj);
		}
	};
}
