#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A047D65884258648.h"

class Class_1_D37BADBAF66E56C6;
namespace RPG::GameCore { class MarbleBySpineDamage; }

#define CLASS_3_2C49CD31AE77997E_METHOD_3_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x17E4F680)
#define CLASS_3_2C49CD31AE77997E__CTOR_OFFSET UNITYSDK_OFFSET(0x17E4F660)

inline static constexpr unsigned int Class_3_2C49CD31AE77997E_TypeDefinitionIndex = 39003;

class Class_3_2C49CD31AE77997E : public ::Class_2_A047D65884258648
{
public:
	::RPG::GameCore::MarbleBySpineDamage* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::MarbleBySpineDamage* a1, ::Class_1_D37BADBAF66E56C6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleBySpineDamage*, ::Class_1_D37BADBAF66E56C6*))((::PBYTE)hIl2Cpp + CLASS_3_2C49CD31AE77997E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C49CD31AE77997E_METHOD_3_1D4018D4200358D0_OFFSET))(this);
	}
};
