#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Reflection { class TypeRegistry; }

#define GOOGLE_PROTOBUF_JSONFORMATTER_SETTINGS_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x17E45A50)
#define GOOGLE_PROTOBUF_JSONFORMATTER_SETTINGS_GET_FORMATDEFAULTVALUES_OFFSET UNITYSDK_OFFSET(0x17E45E30)
#define GOOGLE_PROTOBUF_JSONFORMATTER_SETTINGS_GET_FORMATENUMSASINTEGERS_OFFSET UNITYSDK_OFFSET(0x17E45E50)
#define GOOGLE_PROTOBUF_JSONFORMATTER_SETTINGS_GET_TYPEREGISTRY_OFFSET UNITYSDK_OFFSET(0x17E45E40)
#define GOOGLE_PROTOBUF_JSONFORMATTER_SETTINGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E45AB0)
#define GOOGLE_PROTOBUF_JSONFORMATTER_SETTINGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E45E60)
#define GOOGLE_PROTOBUF_JSONFORMATTER_SETTINGS__CTOR_2_OFFSET UNITYSDK_OFFSET(0x17E45F20)
#define GOOGLE_PROTOBUF_JSONFORMATTER_SETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x17E45C80)

namespace Google::Protobuf
{
	inline static constexpr unsigned int JsonFormatter_Settings_TypeDefinitionIndex = 5402;

	class JsonFormatter_Settings : public ::System::Object
	{
	public:
		static ::Google::Protobuf::JsonFormatter_Settings** StaticGet__Default_k__BackingField()
		{
			return (::Google::Protobuf::JsonFormatter_Settings**)Il2CppClass::FromTypeDefinitionIndex(JsonFormatter_Settings_TypeDefinitionIndex)->GetStaticField(0x3CED0);
		}
		::Google::Protobuf::Reflection::TypeRegistry* _TypeRegistry_k__BackingField; // 0x10
		::System::Boolean _FormatDefaultValues_k__BackingField; // 0x18
		::System::Boolean _FormatEnumsAsIntegers_k__BackingField; // 0x19

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_SETTINGS__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_SETTINGS__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Boolean a1, ::Google::Protobuf::Reflection::TypeRegistry* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Google::Protobuf::Reflection::TypeRegistry*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_SETTINGS__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::Boolean a1, ::Google::Protobuf::Reflection::TypeRegistry* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Google::Protobuf::Reflection::TypeRegistry*, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_SETTINGS__CTOR_2_OFFSET))(this, a1, a2, a3);
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
