#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_202A28762617354F_METHOD_2_5A4C962718782000_OFFSET UNITYSDK_OFFSET(0x13D8D160)
#define CLASS_2_202A28762617354F_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x13D8D390)
#define CLASS_2_202A28762617354F_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13D8D440)
#define CLASS_2_202A28762617354F__CTOR_OFFSET UNITYSDK_OFFSET(0x13D8D430)

inline static constexpr unsigned int Class_2_202A28762617354F_TypeDefinitionIndex = 39562;

class Class_2_202A28762617354F : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollV2* Field_2_4; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x28
	::UnityEngine::GameObject* Field_2_6; // 0x30
	::UnityEngine::RectTransform* Field_2_5; // 0x38
	::MonoUITableScrollV2* Field_2_2; // 0x40
	::UnityEngine::RectTransform* Field_2_1; // 0x48
	::MonoUITableScrollV2* Field_2_3; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x58
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x60
	::Class_2_B4378B46E0020E85* Field_2_8; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_202A28762617354F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5A4C962718782000(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_202A28762617354F_METHOD_2_5A4C962718782000_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_202A28762617354F_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_202A28762617354F_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
