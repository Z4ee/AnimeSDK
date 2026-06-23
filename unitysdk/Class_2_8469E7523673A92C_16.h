#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_8469E7523673A92C_16_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x189153E0)
#define CLASS_2_8469E7523673A92C_16_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x18915470)
#define CLASS_2_8469E7523673A92C_16_METHOD_2_CBC0149B5D954D19_OFFSET UNITYSDK_OFFSET(0x18915220)
#define CLASS_2_8469E7523673A92C_16__CTOR_OFFSET UNITYSDK_OFFSET(0x18915460)

inline static constexpr unsigned int Class_2_8469E7523673A92C_16_TypeDefinitionIndex = 79353;

class Class_2_8469E7523673A92C_16 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_FDFE69FE7B72463B* Field_2_2; // 0x18
	::UnityEngine::RectTransform* Field_2_1; // 0x20
	::UnityEngine::RectTransform* Field_2_0; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x30
	::UnityEngine::RectTransform* Field_2_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8469E7523673A92C_16__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CBC0149B5D954D19(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8469E7523673A92C_16_METHOD_2_CBC0149B5D954D19_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8469E7523673A92C_16_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8469E7523673A92C_16_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
