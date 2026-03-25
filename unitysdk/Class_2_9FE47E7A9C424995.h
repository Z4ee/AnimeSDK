#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define CLASS_2_9FE47E7A9C424995_GET_LIGHTTYPE_OFFSET UNITYSDK_OFFSET(0x886DCA0)
#define CLASS_2_9FE47E7A9C424995__CTOR_OFFSET UNITYSDK_OFFSET(0x886DCB0)

inline static constexpr unsigned int Class_2_9FE47E7A9C424995_TypeDefinitionIndex = 39722;

class Class_2_9FE47E7A9C424995 : public ::System::Attribute
{
public:
	::System::Type* _LightType_k__BackingField; // 0x10

	::System::Void _ctor(::System::Type* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_2_9FE47E7A9C424995__CTOR_OFFSET))(this, a1);
	}

	::System::Type* get_LightType()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FE47E7A9C424995_GET_LIGHTTYPE_OFFSET))(this);
	}
};
