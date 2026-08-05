#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class Class_2_FDFE69FE7B72463B;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralActivityTagInfoWidgetController; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_623938995AB79E10_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x1BB71CA0)
#define CLASS_2_623938995AB79E10_METHOD_2_8AF27F640869EFF7_OFFSET UNITYSDK_OFFSET(0x1BB71A10)
#define CLASS_2_623938995AB79E10_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1BB71DA0)
#define CLASS_2_623938995AB79E10__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB71D90)

inline static constexpr unsigned int Class_2_623938995AB79E10_TypeDefinitionIndex = 45580;

class Class_2_623938995AB79E10 : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::UIGeneralButtonController* Field_2_6; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x28
	::MonoUITableScrollV2* Field_2_2; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x38
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x40
	::Class_3_826A30478DA34A69<::MoleMole::UIGeneralActivityTagInfoWidgetController*>* Field_2_10; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_11; // 0x50
	::Class_2_FDFE69FE7B72463B* Field_2_7; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_623938995AB79E10__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8AF27F640869EFF7(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_623938995AB79E10_METHOD_2_8AF27F640869EFF7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_623938995AB79E10_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_623938995AB79E10_METHOD_2_737220D2233A9067_OFFSET))(this);
	}
};
