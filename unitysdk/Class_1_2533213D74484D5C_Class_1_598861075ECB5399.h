#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_1_2533213D74484D5C_CLASS_1_598861075ECB5399_CLEAR_OFFSET UNITYSDK_OFFSET(0x118C7780)
#define CLASS_1_2533213D74484D5C_CLASS_1_598861075ECB5399__CTOR_OFFSET UNITYSDK_OFFSET(0x118C1B70)

inline static constexpr unsigned int Class_1_2533213D74484D5C_Class_1_598861075ECB5399_TypeDefinitionIndex = 49257;

class Class_1_2533213D74484D5C_Class_1_598861075ECB5399 : public ::System::Object
{
public:
	::System::Func_1<::System::Boolean>* Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_CLASS_1_598861075ECB5399__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2533213D74484D5C_CLASS_1_598861075ECB5399_CLEAR_OFFSET))(this);
	}
};
