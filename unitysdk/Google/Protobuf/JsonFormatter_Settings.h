#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Reflection { class TypeRegistry; }

#define GOOGLE_PROTOBUF_JSONFORMATTER_SETTINGS_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x15AE7470)
#define GOOGLE_PROTOBUF_JSONFORMATTER_SETTINGS_GET_FORMATDEFAULTVALUES_OFFSET UNITYSDK_OFFSET(0x15AE7850)
#define GOOGLE_PROTOBUF_JSONFORMATTER_SETTINGS_GET_FORMATENUMSASINTEGERS_OFFSET UNITYSDK_OFFSET(0x15AE7870)
#define GOOGLE_PROTOBUF_JSONFORMATTER_SETTINGS_GET_TYPEREGISTRY_OFFSET UNITYSDK_OFFSET(0x15AE7860)
#define GOOGLE_PROTOBUF_JSONFORMATTER_SETTINGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x15AE74D0)
#define GOOGLE_PROTOBUF_JSONFORMATTER_SETTINGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15AE7880)
#define GOOGLE_PROTOBUF_JSONFORMATTER_SETTINGS__CTOR_2_OFFSET UNITYSDK_OFFSET(0x15AE7940)
#define GOOGLE_PROTOBUF_JSONFORMATTER_SETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x15AE76A0)

namespace Google::Protobuf
{
	inline static constexpr unsigned int JsonFormatter_Settings_TypeDefinitionIndex = 6190;

	class JsonFormatter_Settings : public ::System::Object
	{
	public:
		static ::Google::Protobuf::JsonFormatter_Settings** StaticGet__Default_k__BackingField()
		{
			return (::Google::Protobuf::JsonFormatter_Settings**)Il2CppClass::FromTypeDefinitionIndex(JsonFormatter_Settings_TypeDefinitionIndex)->GetStaticField(0xC8A0);
		}
		::Google::Protobuf::Reflection::TypeRegistry* _TypeRegistry_k__BackingField; // 0x10
		::System::Boolean _FormatEnumsAsIntegers_k__BackingField; // 0x18
		::System::Boolean _FormatDefaultValues_k__BackingField; // 0x19

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_SETTINGS__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::Boolean formatDefaultValues)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_SETTINGS__CTOR_OFFSET))(this, formatDefaultValues);
		}

		::System::Void _ctor_1(::System::Boolean formatDefaultValues, ::Google::Protobuf::Reflection::TypeRegistry* typeRegistry)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Google::Protobuf::Reflection::TypeRegistry*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_SETTINGS__CTOR_1_OFFSET))(this, formatDefaultValues, typeRegistry);
		}

		::System::Void _ctor_2(::System::Boolean formatDefaultValues, ::Google::Protobuf::Reflection::TypeRegistry* typeRegistry, ::System::Boolean formatEnumsAsIntegers)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Google::Protobuf::Reflection::TypeRegistry*, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_SETTINGS__CTOR_2_OFFSET))(this, formatDefaultValues, typeRegistry, formatEnumsAsIntegers);
		}

		static ::Google::Protobuf::JsonFormatter_Settings* get_Default()
		{
			return ((::Google::Protobuf::JsonFormatter_Settings*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_SETTINGS_GET_DEFAULT_OFFSET))();
		}

		::System::Boolean get_FormatDefaultValues()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_SETTINGS_GET_FORMATDEFAULTVALUES_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::TypeRegistry* get_TypeRegistry()
		{
			return ((::Google::Protobuf::Reflection::TypeRegistry*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_SETTINGS_GET_TYPEREGISTRY_OFFSET))(this);
		}

		::System::Boolean get_FormatEnumsAsIntegers()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_SETTINGS_GET_FORMATENUMSASINTEGERS_OFFSET))(this);
		}
	};
}
