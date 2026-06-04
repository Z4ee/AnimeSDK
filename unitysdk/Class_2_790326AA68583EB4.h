#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_5816B66AC6910205;
namespace RPG::GameCore { class MarbleSetDead; }

#define CLASS_2_790326AA68583EB4_METHOD_2_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x18D3F820)
#define CLASS_2_790326AA68583EB4_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18D3F900)
#define CLASS_2_790326AA68583EB4__CTOR_OFFSET UNITYSDK_OFFSET(0x18D3F810)

inline static constexpr unsigned int Class_2_790326AA68583EB4_TypeDefinitionIndex = 39735;

class Class_2_790326AA68583EB4 : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::RPG::GameCore::MarbleSetDead* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleSetDead* a1, ::Class_1_5816B66AC6910205* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleSetDead*, ::Class_1_5816B66AC6910205*))((::PBYTE)hIl2Cpp + CLASS_2_790326AA68583EB4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_790326AA68583EB4_METHOD_2_83DA3EC57FF907F4_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_790326AA68583EB4_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
