#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define MESSAGEPACK_UNIONATTRIBUTE_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1F013ED0)
#define MESSAGEPACK_UNIONATTRIBUTE_GET_SUBTYPE_OFFSET UNITYSDK_OFFSET(0x1F013EE0)

namespace MessagePack
{
	inline static constexpr unsigned int UnionAttribute_TypeDefinitionIndex = 6160;

	class UnionAttribute : public ::System::Attribute
	{
	public:
		::System::Type* _SubType_k__BackingField; // 0x10
		::System::Int32 _Key_k__BackingField; // 0x18

		::System::Int32 get_Key()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNIONATTRIBUTE_GET_KEY_OFFSET))(this);
		}

		::System::Type* get_SubType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNIONATTRIBUTE_GET_SUBTYPE_OFFSET))(this);
		}
	};
}
