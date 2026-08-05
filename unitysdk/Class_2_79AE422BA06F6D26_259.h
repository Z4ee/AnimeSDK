#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIFriendChatCommonInfoUIWidgetController; }
namespace MoleMole { class UIFriendChatCommonTopUIWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_79AE422BA06F6D26_259_METHOD_2_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0x142C8700)
#define CLASS_2_79AE422BA06F6D26_259_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x142C83D0)
#define CLASS_2_79AE422BA06F6D26_259_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x142C8850)
#define CLASS_2_79AE422BA06F6D26_259__CTOR_OFFSET UNITYSDK_OFFSET(0x142C8840)

inline static constexpr unsigned int Class_2_79AE422BA06F6D26_259_TypeDefinitionIndex = 84484;

class Class_2_79AE422BA06F6D26_259 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_12; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_19; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_14; // 0x30
	::Class_3_826A30478DA34A69<::MoleMole::UIFriendChatCommonInfoUIWidgetController*>* Field_2_7; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_13; // 0x50
	::UnityEngine::RectTransform* Field_2_5; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_15; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_11; // 0x68
	::UnityEngine::RectTransform* Field_2_6; // 0x70
	::Class_2_1A39E1B51756BF41* Field_2_17; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x80
	::Class_3_826A30478DA34A69<::MoleMole::UIFriendChatCommonTopUIWidgetController*>* Field_2_0; // 0x88
	::Class_2_1A39E1B51756BF41* Field_2_18; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79AE422BA06F6D26_259__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_79AE422BA06F6D26_259_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79AE422BA06F6D26_259_METHOD_2_52607DE4C357D269_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_79AE422BA06F6D26_259_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
