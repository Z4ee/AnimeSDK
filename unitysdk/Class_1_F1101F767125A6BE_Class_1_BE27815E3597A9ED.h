#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUITriDiceOracle; }
namespace System { class Action; }

#define CLASS_1_F1101F767125A6BE_CLASS_1_BE27815E3597A9ED_METHOD_1_FF721F718B5CFF6B_OFFSET UNITYSDK_OFFSET(0x13D91BA0)
#define CLASS_1_F1101F767125A6BE_CLASS_1_BE27815E3597A9ED__CTOR_OFFSET UNITYSDK_OFFSET(0x13D91B90)

inline static constexpr unsigned int Class_1_F1101F767125A6BE_Class_1_BE27815E3597A9ED_TypeDefinitionIndex = 50679;

class Class_1_F1101F767125A6BE_Class_1_BE27815E3597A9ED : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1101F767125A6BE_CLASS_1_BE27815E3597A9ED__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FF721F718B5CFF6B(::MoleMole::Config::ConfigUITriDiceOracle* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUITriDiceOracle*))((::PBYTE)hIl2Cpp + CLASS_1_F1101F767125A6BE_CLASS_1_BE27815E3597A9ED_METHOD_1_FF721F718B5CFF6B_OFFSET))(this, a1);
	}
};
