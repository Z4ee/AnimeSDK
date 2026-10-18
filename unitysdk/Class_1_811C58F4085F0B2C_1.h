#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_763;
namespace RPG::GameCore { class MiParameterConfigBase; }

#define CLASS_1_811C58F4085F0B2C_1_METHOD_1_CC8A0B3B7B642A95_OFFSET UNITYSDK_OFFSET(0xB61D3E0)
#define CLASS_1_811C58F4085F0B2C_1__CTOR_OFFSET UNITYSDK_OFFSET(0xB61D4A0)

inline static constexpr unsigned int Class_1_811C58F4085F0B2C_1_TypeDefinitionIndex = 64142;

class Class_1_811C58F4085F0B2C_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_811C58F4085F0B2C_1__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_763* Method_1_CC8A0B3B7B642A95(::RPG::GameCore::MiParameterConfigBase* a1)
	{
		return ((::Class_0_16E4307DCC419505_763*(*)(::PVOID, ::RPG::GameCore::MiParameterConfigBase*))((::PBYTE)hIl2Cpp + CLASS_1_811C58F4085F0B2C_1_METHOD_1_CC8A0B3B7B642A95_OFFSET))(this, a1);
	}
};
