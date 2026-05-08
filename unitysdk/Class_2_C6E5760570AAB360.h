#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_C6E5760570AAB360_METHOD_2_30765AFAABE3B930_OFFSET UNITYSDK_OFFSET(0xDAC2520)
#define CLASS_2_C6E5760570AAB360_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0xDAC2710)
#define CLASS_2_C6E5760570AAB360_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xDAC2800)
#define CLASS_2_C6E5760570AAB360__CTOR_OFFSET UNITYSDK_OFFSET(0xDAC27F0)

inline static constexpr unsigned int Class_2_C6E5760570AAB360_TypeDefinitionIndex = 78655;

class Class_2_C6E5760570AAB360 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x18
	::MoleMole::UIGeneralButtonController* Field_2_7; // 0x20
	::MoleMole::MonoGamepadNavigatableList* Field_2_6; // 0x28
	::MonoUITableScrollV2* Field_2_0; // 0x30
	::UnityEngine::Transform* Field_2_1; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C6E5760570AAB360__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_30765AFAABE3B930(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C6E5760570AAB360_METHOD_2_30765AFAABE3B930_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C6E5760570AAB360_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C6E5760570AAB360_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}
};
