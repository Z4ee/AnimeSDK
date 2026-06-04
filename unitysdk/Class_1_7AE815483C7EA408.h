#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_600;
namespace RPG::GameCore { class MiParameterConfigBase; }

#define CLASS_1_7AE815483C7EA408_METHOD_1_A4142E9AD62C1DB9_OFFSET UNITYSDK_OFFSET(0x145A60B0)
#define CLASS_1_7AE815483C7EA408__CTOR_OFFSET UNITYSDK_OFFSET(0x145A61B0)

inline static constexpr unsigned int Class_1_7AE815483C7EA408_TypeDefinitionIndex = 59940;

class Class_1_7AE815483C7EA408 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AE815483C7EA408__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_600* Method_1_A4142E9AD62C1DB9(::RPG::GameCore::MiParameterConfigBase* a1)
	{
		return ((::Class_0_16E4307DCC419505_600*(*)(::PVOID, ::RPG::GameCore::MiParameterConfigBase*))((::PBYTE)hIl2Cpp + CLASS_1_7AE815483C7EA408_METHOD_1_A4142E9AD62C1DB9_OFFSET))(this, a1);
	}
};
