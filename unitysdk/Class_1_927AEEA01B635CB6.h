#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_927AEEA01B635CB6_METHOD_1_7A772A33A90355AA_OFFSET UNITYSDK_OFFSET(0x19142FB0)
#define CLASS_1_927AEEA01B635CB6__CTOR_OFFSET UNITYSDK_OFFSET(0x19143120)

inline static constexpr unsigned int Class_1_927AEEA01B635CB6_TypeDefinitionIndex = 13250;

class Class_1_927AEEA01B635CB6 : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x14
	::System::UInt32 Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_927AEEA01B635CB6__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_7A772A33A90355AA(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_927AEEA01B635CB6*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_927AEEA01B635CB6*&))((::PBYTE)hIl2Cpp + CLASS_1_927AEEA01B635CB6_METHOD_1_7A772A33A90355AA_OFFSET))(a1, a2);
	}
};
