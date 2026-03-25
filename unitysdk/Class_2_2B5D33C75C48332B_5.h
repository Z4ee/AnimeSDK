#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define CLASS_2_2B5D33C75C48332B_5_GET_SCRIPTABLEOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x8710530)
#define CLASS_2_2B5D33C75C48332B_5__CTOR_OFFSET UNITYSDK_OFFSET(0x8710540)

inline static constexpr unsigned int Class_2_2B5D33C75C48332B_5_TypeDefinitionIndex = 40013;

class Class_2_2B5D33C75C48332B_5 : public ::System::Attribute
{
public:
	::System::Type* _ScriptableObjectType_k__BackingField; // 0x10

	::System::Void _ctor(::System::Type* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_2_2B5D33C75C48332B_5__CTOR_OFFSET))(this, a1);
	}

	::System::Type* get_ScriptableObjectType()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B5D33C75C48332B_5_GET_SCRIPTABLEOBJECTTYPE_OFFSET))(this);
	}
};
