#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_D68EC59F0214DAC2_6_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x109296E0)
#define CLASS_2_D68EC59F0214DAC2_6_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x10929790)
#define CLASS_2_D68EC59F0214DAC2_6_METHOD_2_D0F74BA0038650D0_OFFSET UNITYSDK_OFFSET(0x10929520)
#define CLASS_2_D68EC59F0214DAC2_6__CTOR_OFFSET UNITYSDK_OFFSET(0x10929780)

inline static constexpr unsigned int Class_2_D68EC59F0214DAC2_6_TypeDefinitionIndex = 76516;

class Class_2_D68EC59F0214DAC2_6 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_4; // 0x18
	::UnityEngine::GameObject* Field_2_1; // 0x20
	::UnityEngine::GameObject* Field_2_0; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_3; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x38
	::UnityEngine::GameObject* Field_2_5; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D68EC59F0214DAC2_6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D0F74BA0038650D0(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D68EC59F0214DAC2_6_METHOD_2_D0F74BA0038650D0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D68EC59F0214DAC2_6_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D68EC59F0214DAC2_6_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
