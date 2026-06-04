#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GOOGLE_PROTOBUF_JSONFORMATTER_ORIGINALENUMVALUEHELPER_GETNAMEMAPPING_OFFSET UNITYSDK_OFFSET(0x17E453F0)
#define GOOGLE_PROTOBUF_JSONFORMATTER_ORIGINALENUMVALUEHELPER_GETORIGINALNAME_OFFSET UNITYSDK_OFFSET(0x17E42930)
#define GOOGLE_PROTOBUF_JSONFORMATTER_ORIGINALENUMVALUEHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E45820)

namespace Google::Protobuf
{
	inline static constexpr unsigned int JsonFormatter_OriginalEnumValueHelper_TypeDefinitionIndex = 5403;

	class JsonFormatter_OriginalEnumValueHelper : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::String*>*>** StaticGet_dictionaries()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(JsonFormatter_OriginalEnumValueHelper_TypeDefinitionIndex)->GetStaticField(0x3CE60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_ORIGINALENUMVALUEHELPER__CCTOR_OFFSET))();
		}

		static ::System::String* GetOriginalName(::System::Object* a1)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_ORIGINALENUMVALUEHELPER_GETORIGINALNAME_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::String*>* GetNameMapping(::System::Type* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::String*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_ORIGINALENUMVALUEHELPER_GETNAMEMAPPING_OFFSET))(a1);
		}
	};
}
