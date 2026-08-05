#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_202A28762617354F_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x1398FF50)
#define CLASS_2_202A28762617354F_METHOD_2_5A4C962718782000_OFFSET UNITYSDK_OFFSET(0x1398FD20)
#define CLASS_2_202A28762617354F_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1398FFE0)
#define CLASS_2_202A28762617354F__CTOR_OFFSET UNITYSDK_OFFSET(0x1398FFD0)

inline static constexpr unsigned int Class_2_202A28762617354F_TypeDefinitionIndex = 52972;

class Class_2_202A28762617354F : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollV2* Field_2_1; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0x30
	::UnityEngine::RectTransform* Field_2_5; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_11; // 0x40
	::UnityEngine::GameObject* Field_2_7; // 0x48
	::UnityEngine::RectTransform* Field_2_8; // 0x50
	::UnityEngine::RectTransform* Field_2_15; // 0x58
	::UnityEngine::RectTransform* Field_2_4; // 0x60
	::UnityEngine::GameObject* Field_2_6; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_202A28762617354F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5A4C962718782000(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_202A28762617354F_METHOD_2_5A4C962718782000_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_202A28762617354F_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_202A28762617354F_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
