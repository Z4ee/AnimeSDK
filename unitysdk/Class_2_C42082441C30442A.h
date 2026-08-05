#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_C42082441C30442A_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x16547610)
#define CLASS_2_C42082441C30442A_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x165474B0)
#define CLASS_2_C42082441C30442A__CTOR_OFFSET UNITYSDK_OFFSET(0x16547600)

inline static constexpr unsigned int Class_2_C42082441C30442A_TypeDefinitionIndex = 87517;

class Class_2_C42082441C30442A : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::MonoGamepadSelectable* Field_2_5; // 0x18
	::UnityEngine::Transform* Field_2_6; // 0x20
	::UnityEngine::Transform* Field_2_0; // 0x28
	::UnityEngine::Transform* Field_2_7; // 0x30
	::MoleMole::MonoGamepadSelectable* Field_2_4; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x40
	::UnityEngine::Transform* Field_2_1; // 0x48
	::MoleMole::MonoGamepadSelectable* Field_2_11; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C42082441C30442A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C42082441C30442A_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C42082441C30442A_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
