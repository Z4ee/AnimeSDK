#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_F95EE9848F147B56_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x10C6CF40)
#define CLASS_2_F95EE9848F147B56_METHOD_2_929BD2659F9FA6CA_OFFSET UNITYSDK_OFFSET(0x10C6CD00)
#define CLASS_2_F95EE9848F147B56_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x10C6D030)
#define CLASS_2_F95EE9848F147B56__CTOR_OFFSET UNITYSDK_OFFSET(0x10C6D020)

inline static constexpr unsigned int Class_2_F95EE9848F147B56_TypeDefinitionIndex = 62320;

class Class_2_F95EE9848F147B56 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x38
	::MonoUITableScrollV2* Field_2_1; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x48
	::Class_3_30A064D7BE47C07D<::MoleMole::UIItemIconBtnWidgetController*>* Field_2_9; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x58
	::MonoUITableScrollV2* Field_2_2; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F95EE9848F147B56__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_929BD2659F9FA6CA(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F95EE9848F147B56_METHOD_2_929BD2659F9FA6CA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F95EE9848F147B56_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F95EE9848F147B56_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
