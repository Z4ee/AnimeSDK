#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoHollowGuideConfig; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_EC95E4DBAA37F712_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x10811FE0)
#define CLASS_2_EC95E4DBAA37F712_METHOD_2_8CE71901D76EEEA9_OFFSET UNITYSDK_OFFSET(0x10811DB0)
#define CLASS_2_EC95E4DBAA37F712_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x108120D0)
#define CLASS_2_EC95E4DBAA37F712__CTOR_OFFSET UNITYSDK_OFFSET(0x108120C0)

inline static constexpr unsigned int Class_2_EC95E4DBAA37F712_TypeDefinitionIndex = 59775;

class Class_2_EC95E4DBAA37F712 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_0; // 0x18
	::UnityEngine::RectTransform* Field_2_8; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x30
	::UnityEngine::CanvasGroup* Field_2_3; // 0x38
	::MoleMole::MonoHollowGuideConfig* Field_2_2; // 0x40
	::UnityEngine::RectTransform* Field_2_4; // 0x48
	::UnityEngine::Animation* Field_2_7; // 0x50
	::UnityEngine::Animation* Field_2_1; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC95E4DBAA37F712__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8CE71901D76EEEA9(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_EC95E4DBAA37F712_METHOD_2_8CE71901D76EEEA9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC95E4DBAA37F712_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_EC95E4DBAA37F712_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
