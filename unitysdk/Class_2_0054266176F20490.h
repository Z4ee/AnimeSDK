#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoGamepadNestedListDelegate; }
namespace MoleMole { class MonoInputKey; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralFilterGroupRowWidgetController; }
namespace MoleMole { class UIRecommendGroupRowWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_0054266176F20490_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x16E96050)
#define CLASS_2_0054266176F20490_METHOD_2_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x16E95EE0)
#define CLASS_2_0054266176F20490_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x16E95BF0)
#define CLASS_2_0054266176F20490__CTOR_OFFSET UNITYSDK_OFFSET(0x16E96040)

inline static constexpr unsigned int Class_2_0054266176F20490_TypeDefinitionIndex = 85687;

class Class_2_0054266176F20490 : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::MonoInputKey* Field_2_10; // 0x18
	::UnityEngine::Transform* Field_2_1; // 0x20
	::UnityEngine::GameObject* Field_2_9; // 0x28
	::Class_3_826A30478DA34A69<::MoleMole::UIGeneralFilterGroupRowWidgetController*>* Field_2_8; // 0x30
	::UnityEngine::Transform* Field_2_15; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x40
	::Class_3_826A30478DA34A69<::MoleMole::UIRecommendGroupRowWidgetController*>* Field_2_4; // 0x48
	::Class_2_B4378B46E0020E85* Field_2_11; // 0x50
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x58
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x60
	::Class_3_826A30478DA34A69<::MoleMole::UIRecommendGroupRowWidgetController*>* Field_2_5; // 0x68
	::MoleMole::MonoGamepadNestedListDelegate* Field_2_6; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0054266176F20490__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0054266176F20490_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0054266176F20490_METHOD_2_DE52BD42C4B0B772_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0054266176F20490_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
