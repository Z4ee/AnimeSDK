#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_9A96AEB2BBF284A2_METHOD_2_8CE71901D76EEEA9_OFFSET UNITYSDK_OFFSET(0x139A3800)
#define CLASS_2_9A96AEB2BBF284A2_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x139A3A00)
#define CLASS_2_9A96AEB2BBF284A2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x139A3B40)
#define CLASS_2_9A96AEB2BBF284A2__CTOR_OFFSET UNITYSDK_OFFSET(0x139A3B30)

inline static constexpr unsigned int Class_2_9A96AEB2BBF284A2_TypeDefinitionIndex = 55298;

class Class_2_9A96AEB2BBF284A2 : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::NotificationBadge* Field_2_9; // 0x18
	::UnityEngine::Transform* Field_2_10; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_11; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x38
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x48
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A96AEB2BBF284A2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8CE71901D76EEEA9(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9A96AEB2BBF284A2_METHOD_2_8CE71901D76EEEA9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A96AEB2BBF284A2_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9A96AEB2BBF284A2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
