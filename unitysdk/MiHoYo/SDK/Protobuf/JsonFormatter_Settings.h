#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class TypeRegistry; }

#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_SETTINGS_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x1C375110)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_SETTINGS_GET_FORMATDEFAULTVALUES_OFFSET UNITYSDK_OFFSET(0x1C375340)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_SETTINGS_GET_TYPEREGISTRY_OFFSET UNITYSDK_OFFSET(0x1C375350)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_SETTINGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C375170)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_SETTINGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C375360)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_SETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3751C0)

namespace MiHoYo::SDK::Protobuf
{
	inline static constexpr unsigned int JsonFormatter_Settings_TypeDefinitionIndex = 25969;

	class JsonFormatter_Settings : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::JsonFormatter_Settings** StaticGet__Default_k__BackingField()
		{
			return (::MiHoYo::SDK::Protobuf::JsonFormatter_Settings**)Il2CppClass::FromTypeDefinitionIndex(JsonFormatter_Settings_TypeDefinitionIndex)->GetStaticField(0x1F540);
		}
		::MiHoYo::SDK::Protobuf::Reflection::TypeRegistry* _TypeRegistry_k__BackingField; // 0x10
		::System::Boolean _FormatDefaultValues_k__BackingField; // 0x18

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_SETTINGS__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::Boolean formatDefaultValues)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_SETTINGS__CTOR_OFFSET))(this, formatDefaultValues);
		}

		::System::Void _ctor_1(::System::Boolean formatDefaultValues, ::MiHoYo::SDK::Protobuf::Reflection::TypeRegistry* typeRegistry)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MiHoYo::SDK::Protobuf::Reflection::TypeRegistry*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_SETTINGS__CTOR_1_OFFSET))(this, formatDefaultValues, typeRegistry);
		}

		static ::MiHoYo::SDK::Protobuf::JsonFormatter_Settings* get_Default()
		{
			return ((::MiHoYo::SDK::Protobuf::JsonFormatter_Settings*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_SETTINGS_GET_DEFAULT_OFFSET))();
		}

		::System::Boolean get_FormatDefaultValues()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_SETTINGS_GET_FORMATDEFAULTVALUES_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::TypeRegistry* get_TypeRegistry()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::TypeRegistry*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_SETTINGS_GET_TYPEREGISTRY_OFFSET))(this);
		}
	};
}
