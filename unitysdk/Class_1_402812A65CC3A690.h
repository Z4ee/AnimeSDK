#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EItemType.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;

#define CLASS_1_402812A65CC3A690__CTOR_OFFSET UNITYSDK_OFFSET(0x14B57D50)

inline static constexpr unsigned int Class_1_402812A65CC3A690_TypeDefinitionIndex = 45599;

class Class_1_402812A65CC3A690 : public ::System::Object
{
public:
	::System::UInt64 Field_1_2; // 0x10
	::Share::EItemType Field_1_1; // 0x18
	::System::Int32 Field_1_0; // 0x1C

	::System::Void _ctor(::Class_1_0D6706375CDAAE8C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + CLASS_1_402812A65CC3A690__CTOR_OFFSET))(this, a1);
	}
};
