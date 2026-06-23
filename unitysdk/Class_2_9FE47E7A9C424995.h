#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define CLASS_2_9FE47E7A9C424995_METHOD_2_A99467CE9479C990_OFFSET UNITYSDK_OFFSET(0x1CA0E660)
#define CLASS_2_9FE47E7A9C424995__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA0E5E0)

inline static constexpr unsigned int Class_2_9FE47E7A9C424995_TypeDefinitionIndex = 29035;

class Class_2_9FE47E7A9C424995 : public ::System::Attribute
{
public:
	::System::Type* Field_2_0; // 0x10

	::System::Void _ctor(::System::Type* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_2_9FE47E7A9C424995__CTOR_OFFSET))(this, a1);
	}

	::System::Type* Method_2_A99467CE9479C990()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FE47E7A9C424995_METHOD_2_A99467CE9479C990_OFFSET))(this);
	}
};
