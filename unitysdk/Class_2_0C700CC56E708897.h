#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_0C700CC56E708897_METHOD_2_0E09E70D88F8EDD3_OFFSET UNITYSDK_OFFSET(0x12FCC630)
#define CLASS_2_0C700CC56E708897_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x12FCC860)
#define CLASS_2_0C700CC56E708897_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12FCC970)
#define CLASS_2_0C700CC56E708897__CTOR_OFFSET UNITYSDK_OFFSET(0x12FCC960)

inline static constexpr unsigned int Class_2_0C700CC56E708897_TypeDefinitionIndex = 64237;

class Class_2_0C700CC56E708897 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_11; // 0x18
	::UnityEngine::RectTransform* Field_2_5; // 0x20
	::UnityEngine::GameObject* Field_2_0; // 0x28
	::UnityEngine::RectTransform* Field_2_6; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_10; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x58
	::UnityEngine::Transform* Field_2_7; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C700CC56E708897__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0E09E70D88F8EDD3(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0C700CC56E708897_METHOD_2_0E09E70D88F8EDD3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0C700CC56E708897_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C700CC56E708897_METHOD_2_572E53F76E315839_OFFSET))(this);
	}
};
