#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigGachaPerformanceEffects; }
namespace System { class Action; }

#define CLASS_1_5893027ACC0762C1_CLASS_1_8545446CC2D6B9A1_METHOD_1_90AADB4CAA4DF59B_OFFSET UNITYSDK_OFFSET(0x13450370)
#define CLASS_1_5893027ACC0762C1_CLASS_1_8545446CC2D6B9A1__CTOR_OFFSET UNITYSDK_OFFSET(0x13450360)

inline static constexpr unsigned int Class_1_5893027ACC0762C1_Class_1_8545446CC2D6B9A1_TypeDefinitionIndex = 69175;

class Class_1_5893027ACC0762C1_Class_1_8545446CC2D6B9A1 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5893027ACC0762C1_CLASS_1_8545446CC2D6B9A1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_90AADB4CAA4DF59B(::MoleMole::Config::ConfigGachaPerformanceEffects* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGachaPerformanceEffects*))((::PBYTE)hIl2Cpp + CLASS_1_5893027ACC0762C1_CLASS_1_8545446CC2D6B9A1_METHOD_1_90AADB4CAA4DF59B_OFFSET))(this, a1);
	}
};
