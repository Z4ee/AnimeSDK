#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_600;
namespace RPG::GameCore { class MiParameterConfigBase; }

#define CLASS_1_348FD0AA356DE35E_METHOD_1_87EEB38F9268EE90_OFFSET UNITYSDK_OFFSET(0x14455D00)
#define CLASS_1_348FD0AA356DE35E__CTOR_OFFSET UNITYSDK_OFFSET(0x14455E00)

inline static constexpr unsigned int Class_1_348FD0AA356DE35E_TypeDefinitionIndex = 74348;

class Class_1_348FD0AA356DE35E : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_348FD0AA356DE35E__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_600* Method_1_87EEB38F9268EE90(::RPG::GameCore::MiParameterConfigBase* a1)
	{
		return ((::Class_0_16E4307DCC419505_600*(*)(::PVOID, ::RPG::GameCore::MiParameterConfigBase*))((::PBYTE)hIl2Cpp + CLASS_1_348FD0AA356DE35E_METHOD_1_87EEB38F9268EE90_OFFSET))(this, a1);
	}
};
