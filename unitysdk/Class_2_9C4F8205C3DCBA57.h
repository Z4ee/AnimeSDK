#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A11BE7693BACC4F5.h"

namespace System { class String; }

#define CLASS_2_9C4F8205C3DCBA57_METHOD_2_0FE1853C6CA56D99_OFFSET UNITYSDK_OFFSET(0x19C9A3D0)
#define CLASS_2_9C4F8205C3DCBA57__CTOR_OFFSET UNITYSDK_OFFSET(0x19C9A4D0)

inline static constexpr unsigned int Class_2_9C4F8205C3DCBA57_TypeDefinitionIndex = 77085;

class Class_2_9C4F8205C3DCBA57 : public ::Class_1_A11BE7693BACC4F5
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C4F8205C3DCBA57__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_0FE1853C6CA56D99(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_9C4F8205C3DCBA57_METHOD_2_0FE1853C6CA56D99_OFFSET))(this, a1);
	}
};
