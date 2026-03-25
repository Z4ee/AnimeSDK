#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_499;
namespace RPG::GameCore { class MiParameterConfigBase; }

#define CLASS_1_00C52C8CEF3AF5FA_METHOD_1_B8D9E91CD1CAF26F_OFFSET UNITYSDK_OFFSET(0x114AFCD0)
#define CLASS_1_00C52C8CEF3AF5FA__CTOR_OFFSET UNITYSDK_OFFSET(0x114AFE40)

inline static constexpr unsigned int Class_1_00C52C8CEF3AF5FA_TypeDefinitionIndex = 64480;

class Class_1_00C52C8CEF3AF5FA : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00C52C8CEF3AF5FA__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_499* Method_1_B8D9E91CD1CAF26F(::RPG::GameCore::MiParameterConfigBase* a1)
	{
		return ((::Class_0_16E4307DCC419505_499*(*)(::PVOID, ::RPG::GameCore::MiParameterConfigBase*))((::PBYTE)hIl2Cpp + CLASS_1_00C52C8CEF3AF5FA_METHOD_1_B8D9E91CD1CAF26F_OFFSET))(this, a1);
	}
};
