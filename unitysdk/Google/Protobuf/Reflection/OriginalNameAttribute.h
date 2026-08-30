#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define GOOGLE_PROTOBUF_REFLECTION_ORIGINALNAMEATTRIBUTE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1DBAE270)
#define GOOGLE_PROTOBUF_REFLECTION_ORIGINALNAMEATTRIBUTE_GET_PREFERREDALIAS_OFFSET UNITYSDK_OFFSET(0x1DBAE290)
#define GOOGLE_PROTOBUF_REFLECTION_ORIGINALNAMEATTRIBUTE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1DBAE280)
#define GOOGLE_PROTOBUF_REFLECTION_ORIGINALNAMEATTRIBUTE_SET_PREFERREDALIAS_OFFSET UNITYSDK_OFFSET(0x1DBAE2A0)
#define GOOGLE_PROTOBUF_REFLECTION_ORIGINALNAMEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DBAE2B0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int OriginalNameAttribute_TypeDefinitionIndex = 5550;

	class OriginalNameAttribute : public ::System::Attribute
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::System::Boolean _PreferredAlias_k__BackingField; // 0x18

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ORIGINALNAMEATTRIBUTE__CTOR_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ORIGINALNAMEATTRIBUTE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ORIGINALNAMEATTRIBUTE_SET_NAME_OFFSET))(this, a1);
		}

		::System::Boolean get_PreferredAlias()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ORIGINALNAMEATTRIBUTE_GET_PREFERREDALIAS_OFFSET))(this);
		}

		::System::Void set_PreferredAlias(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ORIGINALNAMEATTRIBUTE_SET_PREFERREDALIAS_OFFSET))(this, a1);
		}
	};
}
