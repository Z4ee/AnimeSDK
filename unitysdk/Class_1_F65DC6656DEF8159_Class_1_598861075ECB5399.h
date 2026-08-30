#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_1_F65DC6656DEF8159_CLASS_1_598861075ECB5399_CLEAR_OFFSET UNITYSDK_OFFSET(0xC11E770)
#define CLASS_1_F65DC6656DEF8159_CLASS_1_598861075ECB5399__CTOR_OFFSET UNITYSDK_OFFSET(0xC11E7C0)

inline static constexpr unsigned int Class_1_F65DC6656DEF8159_Class_1_598861075ECB5399_TypeDefinitionIndex = 60890;

class Class_1_F65DC6656DEF8159_Class_1_598861075ECB5399 : public ::System::Object
{
public:
	::System::Func_1<::System::Boolean>* EKIJFPIPCKF; // 0x10
	::System::Single GAFENHHEBPG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_CLASS_1_598861075ECB5399__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65DC6656DEF8159_CLASS_1_598861075ECB5399_CLEAR_OFFSET))(this);
	}
};
