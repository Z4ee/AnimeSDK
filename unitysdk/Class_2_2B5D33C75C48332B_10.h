#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define CLASS_2_2B5D33C75C48332B_10_GET_AGGREGATEROOTTYPE_OFFSET UNITYSDK_OFFSET(0x1858C6B0)
#define CLASS_2_2B5D33C75C48332B_10__CTOR_OFFSET UNITYSDK_OFFSET(0x1858C6C0)

inline static constexpr unsigned int Class_2_2B5D33C75C48332B_10_TypeDefinitionIndex = 47803;

class Class_2_2B5D33C75C48332B_10 : public ::System::Attribute
{
public:
	::System::Type* _AggregateRootType_k__BackingField; // 0x10

	::System::Void _ctor(::System::Type* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_2_2B5D33C75C48332B_10__CTOR_OFFSET))(this, a1);
	}

	::System::Type* get_AggregateRootType()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B5D33C75C48332B_10_GET_AGGREGATEROOTTYPE_OFFSET))(this);
	}
};
