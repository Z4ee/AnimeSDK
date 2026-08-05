#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_79AE422BA06F6D26_7;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_AEBA44044261375C_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x14B912F0)
#define CLASS_2_AEBA44044261375C_METHOD_2_8CE71901D76EEEA9_OFFSET UNITYSDK_OFFSET(0x14B910C0)
#define CLASS_2_AEBA44044261375C_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x14B913E0)
#define CLASS_2_AEBA44044261375C__CTOR_OFFSET UNITYSDK_OFFSET(0x14B913D0)

inline static constexpr unsigned int Class_2_AEBA44044261375C_TypeDefinitionIndex = 79180;

class Class_2_AEBA44044261375C : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x18
	::MoleMole::UIGeneralButtonController* Field_2_11; // 0x20
	::UnityEngine::GameObject* Field_2_3; // 0x28
	::MonoUITableScrollV2* Field_2_1; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x38
	::Class_2_0D31A1661D004892<::Class_2_79AE422BA06F6D26_7*>* Field_2_6; // 0x40
	::UnityEngine::Transform* Field_2_0; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x50
	::UnityEngine::UI::Text* Field_2_2; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEBA44044261375C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8CE71901D76EEEA9(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_AEBA44044261375C_METHOD_2_8CE71901D76EEEA9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_AEBA44044261375C_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEBA44044261375C_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}
};
