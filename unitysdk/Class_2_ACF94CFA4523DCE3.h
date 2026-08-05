#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIStrategyGuideSkillRecommendRowWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_ACF94CFA4523DCE3_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0x15F05F50)
#define CLASS_2_ACF94CFA4523DCE3_METHOD_2_80376BD75C905526_OFFSET UNITYSDK_OFFSET(0x15F06110)
#define CLASS_2_ACF94CFA4523DCE3_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x15F06340)
#define CLASS_2_ACF94CFA4523DCE3_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15F062F0)
#define CLASS_2_ACF94CFA4523DCE3__CTOR_OFFSET UNITYSDK_OFFSET(0x15F06330)

inline static constexpr unsigned int Class_2_ACF94CFA4523DCE3_TypeDefinitionIndex = 91081;

class Class_2_ACF94CFA4523DCE3 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_0; // 0x18
	::UnityEngine::RectTransform* Field_2_1; // 0x20
	::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIStrategyGuideSkillRecommendRowWidgetController*>*>* Field_2_3; // 0x28
	::UnityEngine::RectTransform* Field_2_7; // 0x30
	::UnityEngine::RectTransform* Field_2_2; // 0x38
	::UnityEngine::RectTransform* Field_2_6; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACF94CFA4523DCE3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_ACF94CFA4523DCE3_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIStrategyGuideSkillRecommendRowWidgetController*>*>* Method_2_80376BD75C905526(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIStrategyGuideSkillRecommendRowWidgetController*>*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_ACF94CFA4523DCE3_METHOD_2_80376BD75C905526_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_ACF94CFA4523DCE3_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACF94CFA4523DCE3_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
