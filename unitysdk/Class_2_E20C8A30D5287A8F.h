#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIStrategyGuideSkillRecommendRowWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_E20C8A30D5287A8F_METHOD_2_133ED87EA1512E24_OFFSET UNITYSDK_OFFSET(0x15DCDD30)
#define CLASS_2_E20C8A30D5287A8F_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0x15DCDB70)
#define CLASS_2_E20C8A30D5287A8F_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x15DCDF60)
#define CLASS_2_E20C8A30D5287A8F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15DCDF10)
#define CLASS_2_E20C8A30D5287A8F__CTOR_OFFSET UNITYSDK_OFFSET(0x15DCDF50)

inline static constexpr unsigned int Class_2_E20C8A30D5287A8F_TypeDefinitionIndex = 64506;

class Class_2_E20C8A30D5287A8F : public ::Class_1_EEA0111A28582B57
{
public:
	::System::Collections::Generic::List_1<::Class_3_6F805C3FA3D1D41D<::MoleMole::UIStrategyGuideSkillRecommendRowWidgetController*>*>* Field_2_0; // 0x18
	::UnityEngine::RectTransform* Field_2_5; // 0x20
	::UnityEngine::RectTransform* Field_2_1; // 0x28
	::UnityEngine::RectTransform* Field_2_4; // 0x30
	::UnityEngine::RectTransform* Field_2_2; // 0x38
	::UnityEngine::RectTransform* Field_2_3; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E20C8A30D5287A8F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E20C8A30D5287A8F_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E20C8A30D5287A8F_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E20C8A30D5287A8F_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_3_6F805C3FA3D1D41D<::MoleMole::UIStrategyGuideSkillRecommendRowWidgetController*>*>* Method_2_133ED87EA1512E24(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_6F805C3FA3D1D41D<::MoleMole::UIStrategyGuideSkillRecommendRowWidgetController*>*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E20C8A30D5287A8F_METHOD_2_133ED87EA1512E24_OFFSET))(this, a1, a2);
	}
};
