#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_578;
namespace RPG::GameCore { class MiParameterConfigBase; }

#define CLASS_1_86773B53A6629B02_METHOD_1_F7BE3F4D479106F0_OFFSET UNITYSDK_OFFSET(0x9BD01B0)
#define CLASS_1_86773B53A6629B02__CTOR_OFFSET UNITYSDK_OFFSET(0x9BD02B0)

inline static constexpr unsigned int Class_1_86773B53A6629B02_TypeDefinitionIndex = 59010;

class Class_1_86773B53A6629B02 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86773B53A6629B02__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_578* Method_1_F7BE3F4D479106F0(::RPG::GameCore::MiParameterConfigBase* a1)
	{
		return ((::Class_0_16E4307DCC419505_578*(*)(::PVOID, ::RPG::GameCore::MiParameterConfigBase*))((::PBYTE)hIl2Cpp + CLASS_1_86773B53A6629B02_METHOD_1_F7BE3F4D479106F0_OFFSET))(this, a1);
	}
};
