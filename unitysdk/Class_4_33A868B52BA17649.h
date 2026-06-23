#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_FC8546EC097E6B41.h"

namespace MoleMole::Config { class ConfigGachaPerformanceFadeOutEffectNode; }

#define CLASS_4_33A868B52BA17649_METHOD_4_B35E7E320C6E607B_OFFSET UNITYSDK_OFFSET(0x150A98E0)
#define CLASS_4_33A868B52BA17649_METHOD_4_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x150A9830)
#define CLASS_4_33A868B52BA17649__CTOR_OFFSET UNITYSDK_OFFSET(0x150A9AF0)

inline static constexpr unsigned int Class_4_33A868B52BA17649_TypeDefinitionIndex = 46969;

class Class_4_33A868B52BA17649 : public ::Class_3_FC8546EC097E6B41
{
public:
	::MoleMole::Config::ConfigGachaPerformanceFadeOutEffectNode* Field_4_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_33A868B52BA17649__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_F4ADC37B63F4E9EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_33A868B52BA17649_METHOD_4_F4ADC37B63F4E9EF_OFFSET))(this);
	}

	::System::Void Method_4_B35E7E320C6E607B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_33A868B52BA17649_METHOD_4_B35E7E320C6E607B_OFFSET))(this);
	}
};
