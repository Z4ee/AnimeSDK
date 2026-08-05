#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_BB9188D18E53A5DA_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x16AECA80)
#define CLASS_2_BB9188D18E53A5DA_METHOD_2_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0x16AECD30)
#define CLASS_2_BB9188D18E53A5DA_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x16AECE90)
#define CLASS_2_BB9188D18E53A5DA__CTOR_OFFSET UNITYSDK_OFFSET(0x16AECE80)

inline static constexpr unsigned int Class_2_BB9188D18E53A5DA_TypeDefinitionIndex = 57184;

class Class_2_BB9188D18E53A5DA : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_9; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_10; // 0x20
	::UnityEngine::RectTransform* Field_2_8; // 0x28
	::UnityEngine::GameObject* Field_2_0; // 0x30
	::UnityEngine::GameObject* Field_2_5; // 0x38
	::MoleMole::NotificationBadge* Field_2_14; // 0x40
	::Class_2_1A39E1B51756BF41* Field_2_12; // 0x48
	::Class_2_1A39E1B51756BF41* Field_2_11; // 0x50
	::UnityEngine::GameObject* Field_2_4; // 0x58
	::UnityEngine::GameObject* Field_2_6; // 0x60
	::UnityEngine::Animation* Field_2_15; // 0x68
	::UnityEngine::GameObject* Field_2_7; // 0x70
	::Class_2_1A39E1B51756BF41* Field_2_13; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB9188D18E53A5DA__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BB9188D18E53A5DA_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BB9188D18E53A5DA_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB9188D18E53A5DA_METHOD_2_8BCB3191E6BEE7CB_OFFSET))(this);
	}
};
