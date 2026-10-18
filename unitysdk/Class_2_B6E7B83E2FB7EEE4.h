#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CADD51BD70DFA696.h"

class Class_1_5E2D533DC7C7E714;

#define CLASS_2_B6E7B83E2FB7EEE4_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1C56CA20)
#define CLASS_2_B6E7B83E2FB7EEE4_METHOD_2_8073A3C8BD4F2EE0_1_OFFSET UNITYSDK_OFFSET(0x1C56CAC0)
#define CLASS_2_B6E7B83E2FB7EEE4_METHOD_2_8073A3C8BD4F2EE0_OFFSET UNITYSDK_OFFSET(0x1C56CA40)
#define CLASS_2_B6E7B83E2FB7EEE4_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x1C56CA30)
#define CLASS_2_B6E7B83E2FB7EEE4__CTOR_OFFSET UNITYSDK_OFFSET(0x1C56CB40)

inline static constexpr unsigned int Class_2_B6E7B83E2FB7EEE4_TypeDefinitionIndex = 41770;

class Class_2_B6E7B83E2FB7EEE4 : public ::Class_1_CADD51BD70DFA696
{
public:
	::System::Int32 _Count_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6E7B83E2FB7EEE4__CTOR_OFFSET))(this);
	}

	::System::Int32 get_Count()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6E7B83E2FB7EEE4_GET_COUNT_OFFSET))(this);
	}

	::System::Void set_Count(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B6E7B83E2FB7EEE4_SET_COUNT_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_8073A3C8BD4F2EE0(::Class_1_5E2D533DC7C7E714* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5E2D533DC7C7E714*))((::PBYTE)hIl2Cpp + CLASS_2_B6E7B83E2FB7EEE4_METHOD_2_8073A3C8BD4F2EE0_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_8073A3C8BD4F2EE0_1(::Class_1_5E2D533DC7C7E714* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5E2D533DC7C7E714*))((::PBYTE)hIl2Cpp + CLASS_2_B6E7B83E2FB7EEE4_METHOD_2_8073A3C8BD4F2EE0_1_OFFSET))(this, a1);
	}
};
