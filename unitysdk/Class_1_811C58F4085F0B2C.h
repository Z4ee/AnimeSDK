#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_671;
namespace RPG::GameCore { class MiParameterConfigBase; }

#define CLASS_1_811C58F4085F0B2C_METHOD_1_CC8A0B3B7B642A95_OFFSET UNITYSDK_OFFSET(0xC4FA4A0)
#define CLASS_1_811C58F4085F0B2C__CTOR_OFFSET UNITYSDK_OFFSET(0xC4FA560)

inline static constexpr unsigned int Class_1_811C58F4085F0B2C_TypeDefinitionIndex = 64200;

class Class_1_811C58F4085F0B2C : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_811C58F4085F0B2C__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_671* Method_1_CC8A0B3B7B642A95(::RPG::GameCore::MiParameterConfigBase* a1)
	{
		return ((::Class_0_16E4307DCC419505_671*(*)(::PVOID, ::RPG::GameCore::MiParameterConfigBase*))((::PBYTE)hIl2Cpp + CLASS_1_811C58F4085F0B2C_METHOD_1_CC8A0B3B7B642A95_OFFSET))(this, a1);
	}
};
