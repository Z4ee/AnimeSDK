#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUISubItemParamDict_ESubItemParamType.h"
#include "unitysdk/System/Object.h"

class MonoUISubItemParamDict_SubItemParam;

#define MONOUISUBITEMPARAMDICT_SUBITEMPARAMPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x11BA7D00)

inline static constexpr unsigned int MonoUISubItemParamDict_SubItemParamPair_TypeDefinitionIndex = 73313;

class MonoUISubItemParamDict_SubItemParamPair : public ::System::Object
{
public:
	::MonoUISubItemParamDict_ESubItemParamType type; // 0x10
	::MonoUISubItemParamDict_SubItemParam* param; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUISUBITEMPARAMDICT_SUBITEMPARAMPAIR__CTOR_OFFSET))(this);
	}
};
