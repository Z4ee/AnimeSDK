#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UINewbieGuideStageRowWidgetController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_01F4D41541F26FEA_METHOD_2_2B52DBEEACA798D8_OFFSET UNITYSDK_OFFSET(0x1543F010)
#define CLASS_2_01F4D41541F26FEA_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x1543F1F0)
#define CLASS_2_01F4D41541F26FEA_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1543F2A0)
#define CLASS_2_01F4D41541F26FEA__CTOR_OFFSET UNITYSDK_OFFSET(0x1543F290)

inline static constexpr unsigned int Class_2_01F4D41541F26FEA_TypeDefinitionIndex = 61704;

class Class_2_01F4D41541F26FEA : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_11; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x20
	::MonoUITableScrollV2* Field_2_0; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x38
	::Class_3_826A30478DA34A69<::MoleMole::UINewbieGuideStageRowWidgetController*>* Field_2_6; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01F4D41541F26FEA__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2B52DBEEACA798D8(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_01F4D41541F26FEA_METHOD_2_2B52DBEEACA798D8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01F4D41541F26FEA_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_01F4D41541F26FEA_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
