#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define CLASS_2_C4824D3A7BD4F6AD_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x183C73A0)
#define CLASS_2_C4824D3A7BD4F6AD__CTOR_OFFSET UNITYSDK_OFFSET(0x183C73B0)

inline static constexpr unsigned int Class_2_C4824D3A7BD4F6AD_TypeDefinitionIndex = 23483;

class Class_2_C4824D3A7BD4F6AD : public ::System::Attribute
{
public:
	::System::Int32 _Order_k__BackingField; // 0x10

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C4824D3A7BD4F6AD__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 get_Order()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4824D3A7BD4F6AD_GET_ORDER_OFFSET))(this);
	}
};
