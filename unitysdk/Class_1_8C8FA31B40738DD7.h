#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_066AB55B5826B0C9;

#define CLASS_1_8C8FA31B40738DD7_COMPARE_OFFSET UNITYSDK_OFFSET(0x17EE7BF0)
#define CLASS_1_8C8FA31B40738DD7__CTOR_OFFSET UNITYSDK_OFFSET(0x17EE7C90)

inline static constexpr unsigned int Class_1_8C8FA31B40738DD7_TypeDefinitionIndex = 38882;

class Class_1_8C8FA31B40738DD7 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C8FA31B40738DD7__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::Class_1_066AB55B5826B0C9* a1, ::Class_1_066AB55B5826B0C9* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_066AB55B5826B0C9*, ::Class_1_066AB55B5826B0C9*))((::PBYTE)hIl2Cpp + CLASS_1_8C8FA31B40738DD7_COMPARE_OFFSET))(this, a1, a2);
	}
};
