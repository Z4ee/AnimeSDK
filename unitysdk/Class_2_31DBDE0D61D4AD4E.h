#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_31DBDE0D61D4AD4E_FilterUsage.h"
#include "unitysdk/System/Attribute.h"

#define CLASS_2_31DBDE0D61D4AD4E__CTOR_OFFSET UNITYSDK_OFFSET(0x1898D8B0)

inline static constexpr unsigned int Class_2_31DBDE0D61D4AD4E_TypeDefinitionIndex = 23791;

class Class_2_31DBDE0D61D4AD4E : public ::System::Attribute
{
public:
	::Class_2_31DBDE0D61D4AD4E_FilterUsage Field_2_0; // 0x10

	::System::Void _ctor(::Class_2_31DBDE0D61D4AD4E_FilterUsage a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_31DBDE0D61D4AD4E_FilterUsage))((::PBYTE)hIl2Cpp + CLASS_2_31DBDE0D61D4AD4E__CTOR_OFFSET))(this, a1);
	}
};
