#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define CLASS_2_2B5D33C75C48332B_12_GET_CONFIGTYPE_OFFSET UNITYSDK_OFFSET(0x19CA4E60)
#define CLASS_2_2B5D33C75C48332B_12__CTOR_OFFSET UNITYSDK_OFFSET(0x19CA4E50)

inline static constexpr unsigned int Class_2_2B5D33C75C48332B_12_TypeDefinitionIndex = 80759;

class Class_2_2B5D33C75C48332B_12 : public ::System::Attribute
{
public:
	::System::Type* _ConfigType_k__BackingField; // 0x10

	::System::Void _ctor(::System::Type* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_2_2B5D33C75C48332B_12__CTOR_OFFSET))(this, a1);
	}

	::System::Type* get_ConfigType()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B5D33C75C48332B_12_GET_CONFIGTYPE_OFFSET))(this);
	}
};
