#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIBabeltowerFightingBuffItemWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIDailyChallengeCardRowWidgetController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_30A064D7BE47C07D;
template <typename T> class Class_3_6630F8877346891C;

#define CLASS_2_6C576119380E31D1_METHOD_2_6C558EE56523ECD4_OFFSET UNITYSDK_OFFSET(0xBDC86E0)
#define CLASS_2_6C576119380E31D1_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0xBDC88D0)
#define CLASS_2_6C576119380E31D1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xBDC89D0)
#define CLASS_2_6C576119380E31D1__CTOR_OFFSET UNITYSDK_OFFSET(0xBDC89C0)

inline static constexpr unsigned int Class_2_6C576119380E31D1_TypeDefinitionIndex = 81477;

class Class_2_6C576119380E31D1 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x18
	::Class_3_30A064D7BE47C07D<::MoleMole::UIBabeltowerFightingBuffItemWidgetController*>* Field_2_2; // 0x20
	::Class_3_6630F8877346891C<::MoleMole::UIDailyChallengeCardRowWidgetController*>* Field_2_3; // 0x28
	::Class_3_30A064D7BE47C07D<::MoleMole::UIBabeltowerFightingBuffItemWidgetController*>* Field_2_1; // 0x30
	::Class_3_30A064D7BE47C07D<::MoleMole::UIBabeltowerFightingBuffItemWidgetController*>* Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C576119380E31D1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_6C558EE56523ECD4(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6C576119380E31D1_METHOD_2_6C558EE56523ECD4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6C576119380E31D1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C576119380E31D1_METHOD_2_737220D2233A9067_OFFSET))(this);
	}
};
