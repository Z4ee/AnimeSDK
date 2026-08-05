#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MONOUILOOPEMPTY__CTOR_OFFSET UNITYSDK_OFFSET(0x10F1BC40)

inline static constexpr unsigned int MonoUILoopEmpty_TypeDefinitionIndex = 88394;

class MonoUILoopEmpty : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUILOOPEMPTY__CTOR_OFFSET))(this);
	}
};
