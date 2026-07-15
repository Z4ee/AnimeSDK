#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_635;
namespace RPG::GameCore { class MiParameterConfigBase; }

#define CLASS_1_7AE815483C7EA408_METHOD_1_A4142E9AD62C1DB9_OFFSET UNITYSDK_OFFSET(0x1630CD10)
#define CLASS_1_7AE815483C7EA408__CTOR_OFFSET UNITYSDK_OFFSET(0x1630CE10)

inline static constexpr unsigned int Class_1_7AE815483C7EA408_TypeDefinitionIndex = 61225;

class Class_1_7AE815483C7EA408 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AE815483C7EA408__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_635* Method_1_A4142E9AD62C1DB9(::RPG::GameCore::MiParameterConfigBase* a1)
	{
		return ((::Class_0_16E4307DCC419505_635*(*)(::PVOID, ::RPG::GameCore::MiParameterConfigBase*))((::PBYTE)hIl2Cpp + CLASS_1_7AE815483C7EA408_METHOD_1_A4142E9AD62C1DB9_OFFSET))(this, a1);
	}
};
