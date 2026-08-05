#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UISuibianDirectionIconWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_5E3D3972C89EB6E7_METHOD_2_43B30E80E60A7693_OFFSET UNITYSDK_OFFSET(0x17638AC0)
#define CLASS_2_5E3D3972C89EB6E7_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x17638C80)
#define CLASS_2_5E3D3972C89EB6E7_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x17638D30)
#define CLASS_2_5E3D3972C89EB6E7__CTOR_OFFSET UNITYSDK_OFFSET(0x17638D20)

inline static constexpr unsigned int Class_2_5E3D3972C89EB6E7_TypeDefinitionIndex = 71482;

class Class_2_5E3D3972C89EB6E7 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_11; // 0x18
	::UnityEngine::RectTransform* Field_2_0; // 0x20
	::UnityEngine::RectTransform* Field_2_7; // 0x28
	::Class_3_826A30478DA34A69<::MoleMole::UISuibianDirectionIconWidgetController*>* Field_2_4; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x38
	::Class_3_826A30478DA34A69<::MoleMole::UISuibianDirectionIconWidgetController*>* Field_2_6; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E3D3972C89EB6E7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_43B30E80E60A7693(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5E3D3972C89EB6E7_METHOD_2_43B30E80E60A7693_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5E3D3972C89EB6E7_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E3D3972C89EB6E7_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
