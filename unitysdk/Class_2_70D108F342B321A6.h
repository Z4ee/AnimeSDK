#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_70D108F342B321A6_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x1A153B00)
#define CLASS_2_70D108F342B321A6_METHOD_2_43ED31B02AD5E38E_OFFSET UNITYSDK_OFFSET(0x1A153960)
#define CLASS_2_70D108F342B321A6_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1A153B90)
#define CLASS_2_70D108F342B321A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1A153B80)

inline static constexpr unsigned int Class_2_70D108F342B321A6_TypeDefinitionIndex = 67746;

class Class_2_70D108F342B321A6 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x20
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* Field_2_3; // 0x28
	::UnityEngine::RectTransform* Field_2_2; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70D108F342B321A6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_43ED31B02AD5E38E(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_70D108F342B321A6_METHOD_2_43ED31B02AD5E38E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70D108F342B321A6_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_70D108F342B321A6_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
