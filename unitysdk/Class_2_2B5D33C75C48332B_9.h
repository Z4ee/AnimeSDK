#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define CLASS_2_2B5D33C75C48332B_9_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x16F4B8A0)
#define CLASS_2_2B5D33C75C48332B_9__CTOR_OFFSET UNITYSDK_OFFSET(0x16F4B8B0)

inline static constexpr unsigned int Class_2_2B5D33C75C48332B_9_TypeDefinitionIndex = 47801;

class Class_2_2B5D33C75C48332B_9 : public ::System::Attribute
{
public:
	::System::Type* _Type_k__BackingField; // 0x10

	::System::Void _ctor(::System::Type* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_2_2B5D33C75C48332B_9__CTOR_OFFSET))(this, a1);
	}

	::System::Type* get_Type()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B5D33C75C48332B_9_GET_TYPE_OFFSET))(this);
	}
};
