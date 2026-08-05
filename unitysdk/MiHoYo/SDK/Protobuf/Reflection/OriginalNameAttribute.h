#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_ORIGINALNAMEATTRIBUTE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1FC38310)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ORIGINALNAMEATTRIBUTE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1FC38320)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ORIGINALNAMEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC38330)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int OriginalNameAttribute_TypeDefinitionIndex = 29186;

	class OriginalNameAttribute : public ::System::Attribute
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ORIGINALNAMEATTRIBUTE__CTOR_OFFSET))(this, name);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ORIGINALNAMEATTRIBUTE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ORIGINALNAMEATTRIBUTE_SET_NAME_OFFSET))(this, value);
		}
	};
}
