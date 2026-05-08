#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_79AE422BA06F6D26_8;
class Class_2_A9A857AD270B9CE1;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadTabButtonGroup; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_938422ACC5F2A616_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x12DE6790)
#define CLASS_2_938422ACC5F2A616_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x12DE6520)
#define CLASS_2_938422ACC5F2A616_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12DE6880)
#define CLASS_2_938422ACC5F2A616__CTOR_OFFSET UNITYSDK_OFFSET(0x12DE6870)

inline static constexpr unsigned int Class_2_938422ACC5F2A616_TypeDefinitionIndex = 76596;

class Class_2_938422ACC5F2A616 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_11; // 0x18
	::UnityEngine::RectTransform* Field_2_10; // 0x20
	::MoleMole::MonoGamepadTabButtonGroup* Field_2_5; // 0x28
	::UnityEngine::GameObject* Field_2_8; // 0x30
	::Class_2_0D31A1661D004892<::Class_2_79AE422BA06F6D26_8*>* Field_2_6; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x40
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_2; // 0x48
	::MonoUITableScrollV2* Field_2_1; // 0x50
	::Class_2_1A39E1B51756BF41* Field_2_9; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x60
	::UnityEngine::RectTransform* Field_2_7; // 0x68
	::UnityEngine::Transform* Field_2_0; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_938422ACC5F2A616__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_938422ACC5F2A616_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_938422ACC5F2A616_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_938422ACC5F2A616_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}
};
