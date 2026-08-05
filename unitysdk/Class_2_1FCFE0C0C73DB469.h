#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_2_1FCFE0C0C73DB469_METHOD_2_0541B466D90A7C72_OFFSET UNITYSDK_OFFSET(0xF101950)
#define CLASS_2_1FCFE0C0C73DB469_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0xF101B10)
#define CLASS_2_1FCFE0C0C73DB469_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xF101BE0)
#define CLASS_2_1FCFE0C0C73DB469__CTOR_OFFSET UNITYSDK_OFFSET(0xF101BD0)

inline static constexpr unsigned int Class_2_1FCFE0C0C73DB469_TypeDefinitionIndex = 88903;

class Class_2_1FCFE0C0C73DB469 : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::NotificationBadgeEx* Field_2_1; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x20
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_3; // 0x28
	::UnityEngine::RectTransform* Field_2_0; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FCFE0C0C73DB469__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0541B466D90A7C72(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1FCFE0C0C73DB469_METHOD_2_0541B466D90A7C72_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1FCFE0C0C73DB469_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FCFE0C0C73DB469_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
