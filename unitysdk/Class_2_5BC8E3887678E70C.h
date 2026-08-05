#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_5BC8E3887678E70C_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x1213A410)
#define CLASS_2_5BC8E3887678E70C_METHOD_2_87DF7AD2E0AB49C9_OFFSET UNITYSDK_OFFSET(0x1213A1D0)
#define CLASS_2_5BC8E3887678E70C_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1213A510)
#define CLASS_2_5BC8E3887678E70C__CTOR_OFFSET UNITYSDK_OFFSET(0x1213A500)

inline static constexpr unsigned int Class_2_5BC8E3887678E70C_TypeDefinitionIndex = 70817;

class Class_2_5BC8E3887678E70C : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_11; // 0x18
	::MoleMole::NotificationBadgeEx* Field_2_10; // 0x20
	::UnityEngine::Transform* Field_2_6; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x38
	::UnityEngine::Transform* Field_2_7; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x48
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5BC8E3887678E70C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_87DF7AD2E0AB49C9(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5BC8E3887678E70C_METHOD_2_87DF7AD2E0AB49C9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5BC8E3887678E70C_METHOD_2_737220D2233A9067_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5BC8E3887678E70C_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
