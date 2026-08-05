#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_6EA8A8B9AF316FB4_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0x1945BEC0)
#define CLASS_2_6EA8A8B9AF316FB4_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1945C330)
#define CLASS_2_6EA8A8B9AF316FB4_METHOD_2_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0x1945C1A0)
#define CLASS_2_6EA8A8B9AF316FB4__CTOR_OFFSET UNITYSDK_OFFSET(0x1945C320)

inline static constexpr unsigned int Class_2_6EA8A8B9AF316FB4_TypeDefinitionIndex = 41635;

class Class_2_6EA8A8B9AF316FB4 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_19; // 0x18
	::UnityEngine::RectTransform* Field_2_15; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_12; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x38
	::UnityEngine::RectTransform* Field_2_9; // 0x40
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x48
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x50
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x58
	::Class_2_B4378B46E0020E85* Field_2_14; // 0x60
	::UnityEngine::GameObject* Field_2_13; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x70
	::Class_2_1A39E1B51756BF41* Field_2_10; // 0x78
	::Class_2_1A39E1B51756BF41* Field_2_11; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6EA8A8B9AF316FB4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6EA8A8B9AF316FB4_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6EA8A8B9AF316FB4_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DD784213055292FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6EA8A8B9AF316FB4_METHOD_2_DD784213055292FB_OFFSET))(this);
	}
};
