#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define CLASS_2_2B5D33C75C48332B_11_GET_CONFIGTYPE_OFFSET UNITYSDK_OFFSET(0x14FE5990)
#define CLASS_2_2B5D33C75C48332B_11__CTOR_OFFSET UNITYSDK_OFFSET(0x14FE5980)

inline static constexpr unsigned int Class_2_2B5D33C75C48332B_11_TypeDefinitionIndex = 57291;

class Class_2_2B5D33C75C48332B_11 : public ::System::Attribute
{
public:
	::System::Type* _ConfigType_k__BackingField; // 0x10

	::System::Void _ctor(::System::Type* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_2_2B5D33C75C48332B_11__CTOR_OFFSET))(this, a1);
	}

	::System::Type* get_ConfigType()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B5D33C75C48332B_11_GET_CONFIGTYPE_OFFSET))(this);
	}
};
