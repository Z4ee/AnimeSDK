#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define CLASS_2_2B5D33C75C48332B_7_GET_TARGETTYPE_OFFSET UNITYSDK_OFFSET(0x9764010)
#define CLASS_2_2B5D33C75C48332B_7_SET_TARGETTYPE_OFFSET UNITYSDK_OFFSET(0x9764020)
#define CLASS_2_2B5D33C75C48332B_7__CTOR_OFFSET UNITYSDK_OFFSET(0x9764030)

inline static constexpr unsigned int Class_2_2B5D33C75C48332B_7_TypeDefinitionIndex = 45930;

class Class_2_2B5D33C75C48332B_7 : public ::System::Attribute
{
public:
	::System::Type* _TargetType_k__BackingField; // 0x10

	::System::Void _ctor(::System::Type* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_2_2B5D33C75C48332B_7__CTOR_OFFSET))(this, a1);
	}

	::System::Type* get_TargetType()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B5D33C75C48332B_7_GET_TARGETTYPE_OFFSET))(this);
	}

	::System::Void set_TargetType(::System::Type* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_2_2B5D33C75C48332B_7_SET_TARGETTYPE_OFFSET))(this, value);
	}
};
