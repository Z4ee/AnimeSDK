#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_41E07A9DDAB7FC78.h"
#include "unitysdk/Enum_3_75A1C8C41006A504.h"

class Class_1_8844A4E6AE686D5C_6;

#define CLASS_2_3416C017F6537C5B_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x16AD4210)
#define CLASS_2_3416C017F6537C5B_UPDATEADDITEM_OFFSET UNITYSDK_OFFSET(0x16AD4260)
#define CLASS_2_3416C017F6537C5B__CTOR_OFFSET UNITYSDK_OFFSET(0x16AD4420)

inline static constexpr unsigned int Class_2_3416C017F6537C5B_TypeDefinitionIndex = 62036;

class Class_2_3416C017F6537C5B : public ::Class_1_41E07A9DDAB7FC78
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3416C017F6537C5B__CTOR_OFFSET))(this);
	}

	::System::Boolean IsConcernedWith(::Enum_3_75A1C8C41006A504 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A1C8C41006A504))((::PBYTE)hIl2Cpp + CLASS_2_3416C017F6537C5B_ISCONCERNEDWITH_OFFSET))(this, a1);
	}

	::System::Void UpdateAddItem(::Class_1_8844A4E6AE686D5C_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8844A4E6AE686D5C_6*))((::PBYTE)hIl2Cpp + CLASS_2_3416C017F6537C5B_UPDATEADDITEM_OFFSET))(this, a1);
	}
};
