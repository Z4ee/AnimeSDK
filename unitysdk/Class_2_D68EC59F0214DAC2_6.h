#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_D68EC59F0214DAC2_6_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x14645140)
#define CLASS_2_D68EC59F0214DAC2_6_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x14645080)
#define CLASS_2_D68EC59F0214DAC2_6__CTOR_OFFSET UNITYSDK_OFFSET(0x14645130)

inline static constexpr unsigned int Class_2_D68EC59F0214DAC2_6_TypeDefinitionIndex = 68650;

class Class_2_D68EC59F0214DAC2_6 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_0; // 0x18
	::UnityEngine::GameObject* Field_2_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D68EC59F0214DAC2_6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D68EC59F0214DAC2_6_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D68EC59F0214DAC2_6_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
