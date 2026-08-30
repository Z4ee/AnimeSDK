#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/ReadType.h"
#include "unitysdk/Newtonsoft/Json/Serialization/JsonContract.h"
#include "unitysdk/Newtonsoft/Json/Utilities/PrimitiveTypeCode.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NEWTONSOFT_JSON_SERIALIZATION_JSONPRIMITIVECONTRACT_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1BED81A0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPRIMITIVECONTRACT_SET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1BED81B0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPRIMITIVECONTRACT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BED81C0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPRIMITIVECONTRACT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BECE3F0)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonPrimitiveContract_TypeDefinitionIndex = 9641;

	class JsonPrimitiveContract : public ::Newtonsoft::Json::Serialization::JsonContract
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Newtonsoft::Json::ReadType>** StaticGet_ReadTypeMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::Newtonsoft::Json::ReadType>**)Il2CppClass::FromTypeDefinitionIndex(JsonPrimitiveContract_TypeDefinitionIndex)->GetStaticField(0x40190);
		}
		::Newtonsoft::Json::Utilities::PrimitiveTypeCode _TypeCode_k__BackingField; // 0x80

		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPRIMITIVECONTRACT__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPRIMITIVECONTRACT__CCTOR_OFFSET))();
		}

		::Newtonsoft::Json::Utilities::PrimitiveTypeCode get_TypeCode()
		{
			return ((::Newtonsoft::Json::Utilities::PrimitiveTypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPRIMITIVECONTRACT_GET_TYPECODE_OFFSET))(this);
		}

		::System::Void set_TypeCode(::Newtonsoft::Json::Utilities::PrimitiveTypeCode a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Utilities::PrimitiveTypeCode))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPRIMITIVECONTRACT_SET_TYPECODE_OFFSET))(this, a1);
		}
	};
}
