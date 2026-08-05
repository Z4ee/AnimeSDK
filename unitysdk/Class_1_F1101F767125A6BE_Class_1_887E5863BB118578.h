#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUITriDiceOracle; }
namespace System { class Action; }

#define CLASS_1_F1101F767125A6BE_CLASS_1_887E5863BB118578_METHOD_1_01246B24A965CD46_OFFSET UNITYSDK_OFFSET(0x15BC7BD0)
#define CLASS_1_F1101F767125A6BE_CLASS_1_887E5863BB118578__CTOR_OFFSET UNITYSDK_OFFSET(0x15BC7BC0)

inline static constexpr unsigned int Class_1_F1101F767125A6BE_Class_1_887E5863BB118578_TypeDefinitionIndex = 51781;

class Class_1_F1101F767125A6BE_Class_1_887E5863BB118578 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1101F767125A6BE_CLASS_1_887E5863BB118578__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_01246B24A965CD46(::MoleMole::Config::ConfigUITriDiceOracle* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUITriDiceOracle*))((::PBYTE)hIl2Cpp + CLASS_1_F1101F767125A6BE_CLASS_1_887E5863BB118578_METHOD_1_01246B24A965CD46_OFFSET))(this, a1);
	}
};
