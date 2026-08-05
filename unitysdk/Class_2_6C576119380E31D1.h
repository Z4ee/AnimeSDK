#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIBabeltowerFightingBuffItemWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIDailyChallengeCardRowWidgetController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_826A30478DA34A69;
template <typename T> class Class_3_8EFAD1842D6DB295;

#define CLASS_2_6C576119380E31D1_METHOD_2_6C558EE56523ECD4_OFFSET UNITYSDK_OFFSET(0x15C02D80)
#define CLASS_2_6C576119380E31D1_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x15C02F60)
#define CLASS_2_6C576119380E31D1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x15C03060)
#define CLASS_2_6C576119380E31D1__CTOR_OFFSET UNITYSDK_OFFSET(0x15C03050)

inline static constexpr unsigned int Class_2_6C576119380E31D1_TypeDefinitionIndex = 61003;

class Class_2_6C576119380E31D1 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_8EFAD1842D6DB295<::MoleMole::UIDailyChallengeCardRowWidgetController*>* Field_2_7; // 0x18
	::Class_3_826A30478DA34A69<::MoleMole::UIBabeltowerFightingBuffItemWidgetController*>* Field_2_0; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x28
	::Class_3_826A30478DA34A69<::MoleMole::UIBabeltowerFightingBuffItemWidgetController*>* Field_2_1; // 0x30
	::Class_3_826A30478DA34A69<::MoleMole::UIBabeltowerFightingBuffItemWidgetController*>* Field_2_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C576119380E31D1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_6C558EE56523ECD4(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6C576119380E31D1_METHOD_2_6C558EE56523ECD4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C576119380E31D1_METHOD_2_737220D2233A9067_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6C576119380E31D1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
