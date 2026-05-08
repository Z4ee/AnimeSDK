#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6E06DF87808F0190;

#define CLASS_1_F0F4CC6B86E3E627_METHOD_1_6F2375DB88761C4E_OFFSET UNITYSDK_OFFSET(0x113E4E00)
#define CLASS_1_F0F4CC6B86E3E627_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x113E4E90)
#define CLASS_1_F0F4CC6B86E3E627__CTOR_OFFSET UNITYSDK_OFFSET(0x113E4EE0)

inline static constexpr unsigned int Class_1_F0F4CC6B86E3E627_TypeDefinitionIndex = 78018;

class Class_1_F0F4CC6B86E3E627 : public ::System::Object
{
public:
	::Class_1_6E06DF87808F0190* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0F4CC6B86E3E627__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6F2375DB88761C4E(::Class_1_6E06DF87808F0190* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E06DF87808F0190*))((::PBYTE)hIl2Cpp + CLASS_1_F0F4CC6B86E3E627_METHOD_1_6F2375DB88761C4E_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0F4CC6B86E3E627_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
