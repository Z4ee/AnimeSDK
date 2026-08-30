#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E9521D589CA4AB8B.h"

#define CLASS_2_A48F3719AA1CF200_14_ONSTARTLOADING_OFFSET UNITYSDK_OFFSET(0xBADC190)
#define CLASS_2_A48F3719AA1CF200_14__CTOR_OFFSET UNITYSDK_OFFSET(0xBADC1E0)

inline static constexpr unsigned int Class_2_A48F3719AA1CF200_14_TypeDefinitionIndex = 61163;

class Class_2_A48F3719AA1CF200_14 : public ::Class_1_E9521D589CA4AB8B
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A48F3719AA1CF200_14__CTOR_OFFSET))(this);
	}

	::System::Void OnStartLoading()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A48F3719AA1CF200_14_ONSTARTLOADING_OFFSET))(this);
	}
};
