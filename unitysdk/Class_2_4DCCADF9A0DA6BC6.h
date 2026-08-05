#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_4DCCADF9A0DA6BC6_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0x155F0020)
#define CLASS_2_4DCCADF9A0DA6BC6_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x155F0230)
#define CLASS_2_4DCCADF9A0DA6BC6_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x155F0330)
#define CLASS_2_4DCCADF9A0DA6BC6__CTOR_OFFSET UNITYSDK_OFFSET(0x155F0320)

inline static constexpr unsigned int Class_2_4DCCADF9A0DA6BC6_TypeDefinitionIndex = 86162;

class Class_2_4DCCADF9A0DA6BC6 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x18
	::UnityEngine::RectTransform* Field_2_1; // 0x20
	::UnityEngine::GameObject* Field_2_7; // 0x28
	::UnityEngine::RectTransform* Field_2_3; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x40
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4DCCADF9A0DA6BC6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4DCCADF9A0DA6BC6_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4DCCADF9A0DA6BC6_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4DCCADF9A0DA6BC6_METHOD_2_737220D2233A9067_OFFSET))(this);
	}
};
