#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_D68EC59F0214DAC2_16_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x12A023A0)
#define CLASS_2_D68EC59F0214DAC2_16_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12A02470)
#define CLASS_2_D68EC59F0214DAC2_16_METHOD_2_F485ED5438CB5FFD_OFFSET UNITYSDK_OFFSET(0x12A02250)
#define CLASS_2_D68EC59F0214DAC2_16__CTOR_OFFSET UNITYSDK_OFFSET(0x12A02460)

inline static constexpr unsigned int Class_2_D68EC59F0214DAC2_16_TypeDefinitionIndex = 86011;

class Class_2_D68EC59F0214DAC2_16 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x18
	::UnityEngine::GameObject* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D68EC59F0214DAC2_16__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_F485ED5438CB5FFD(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D68EC59F0214DAC2_16_METHOD_2_F485ED5438CB5FFD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D68EC59F0214DAC2_16_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D68EC59F0214DAC2_16_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}
};
