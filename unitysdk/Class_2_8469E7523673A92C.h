#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_8469E7523673A92C_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x16EC9B80)
#define CLASS_2_8469E7523673A92C_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x16EC9C10)
#define CLASS_2_8469E7523673A92C_METHOD_2_D0F74BA0038650D0_OFFSET UNITYSDK_OFFSET(0x16EC99A0)
#define CLASS_2_8469E7523673A92C__CTOR_OFFSET UNITYSDK_OFFSET(0x16EC9C00)

inline static constexpr unsigned int Class_2_8469E7523673A92C_TypeDefinitionIndex = 40538;

class Class_2_8469E7523673A92C : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_0; // 0x18
	::UnityEngine::RectTransform* Field_2_4; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_5; // 0x28
	::Class_2_FDFE69FE7B72463B* Field_2_11; // 0x30
	::UnityEngine::RectTransform* Field_2_6; // 0x38
	::UnityEngine::RectTransform* Field_2_7; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8469E7523673A92C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D0F74BA0038650D0(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8469E7523673A92C_METHOD_2_D0F74BA0038650D0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8469E7523673A92C_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8469E7523673A92C_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
