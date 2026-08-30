#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A11BE7693BACC4F5.h"

namespace System { class String; }

#define CLASS_2_9C4F8205C3DCBA57_1_METHOD_2_0FE1853C6CA56D99_OFFSET UNITYSDK_OFFSET(0x16CCBE80)
#define CLASS_2_9C4F8205C3DCBA57_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16CCBF80)

inline static constexpr unsigned int Class_2_9C4F8205C3DCBA57_1_TypeDefinitionIndex = 77086;

class Class_2_9C4F8205C3DCBA57_1 : public ::Class_1_A11BE7693BACC4F5
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C4F8205C3DCBA57_1__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_0FE1853C6CA56D99(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_9C4F8205C3DCBA57_1_METHOD_2_0FE1853C6CA56D99_OFFSET))(this, a1);
	}
};
