#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_C6E5760570AAB360_METHOD_2_30765AFAABE3B930_OFFSET UNITYSDK_OFFSET(0x12190FF0)
#define CLASS_2_C6E5760570AAB360_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x1D320C30)
#define CLASS_2_C6E5760570AAB360_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1D320D10)
#define CLASS_2_C6E5760570AAB360__CTOR_OFFSET UNITYSDK_OFFSET(0x1D320C20)

inline static constexpr unsigned int Class_2_C6E5760570AAB360_TypeDefinitionIndex = 42937;

class Class_2_C6E5760570AAB360 : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::UIGeneralButtonController* Field_2_9; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_11; // 0x28
	::MonoUITableScrollV2* Field_2_0; // 0x30
	::UnityEngine::Transform* Field_2_7; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x48
	::MoleMole::MonoGamepadNavigatableList* Field_2_10; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C6E5760570AAB360__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_30765AFAABE3B930(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C6E5760570AAB360_METHOD_2_30765AFAABE3B930_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C6E5760570AAB360_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C6E5760570AAB360_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
