#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class Class_2_CA67A9CEB871FFD3;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UITutorialScrollWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_9F6F8F4A76DD9B1D_METHOD_2_8CE71901D76EEEA9_OFFSET UNITYSDK_OFFSET(0x112B7410)
#define CLASS_2_9F6F8F4A76DD9B1D_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x112B7660)
#define CLASS_2_9F6F8F4A76DD9B1D_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x112B77A0)
#define CLASS_2_9F6F8F4A76DD9B1D__CTOR_OFFSET UNITYSDK_OFFSET(0x112B7790)

inline static constexpr unsigned int Class_2_9F6F8F4A76DD9B1D_TypeDefinitionIndex = 84710;

class Class_2_9F6F8F4A76DD9B1D : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_826A30478DA34A69<::MoleMole::UITutorialScrollWidgetController*>* Field_2_9; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_10; // 0x20
	::MonoUITableScrollV2* Field_2_5; // 0x28
	::Class_2_CA67A9CEB871FFD3* Field_2_11; // 0x30
	::UnityEngine::RectTransform* Field_2_4; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x48
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_6; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F6F8F4A76DD9B1D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8CE71901D76EEEA9(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9F6F8F4A76DD9B1D_METHOD_2_8CE71901D76EEEA9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9F6F8F4A76DD9B1D_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F6F8F4A76DD9B1D_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}
};
