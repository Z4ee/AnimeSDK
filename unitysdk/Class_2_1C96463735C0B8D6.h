#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class UIControllerExtensionData;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIWorkBenchAppBgForTransitionWidgetController; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_1C96463735C0B8D6_METHOD_2_37917191637BFFF4_OFFSET UNITYSDK_OFFSET(0x15067B90)
#define CLASS_2_1C96463735C0B8D6_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x15067CE0)
#define CLASS_2_1C96463735C0B8D6_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x15067DB0)
#define CLASS_2_1C96463735C0B8D6__CTOR_OFFSET UNITYSDK_OFFSET(0x15067DA0)

inline static constexpr unsigned int Class_2_1C96463735C0B8D6_TypeDefinitionIndex = 85688;

class Class_2_1C96463735C0B8D6 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_826A30478DA34A69<::MoleMole::UIWorkBenchAppBgForTransitionWidgetController*>* Field_2_1; // 0x18
	::UIControllerExtensionData* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C96463735C0B8D6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_37917191637BFFF4(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1C96463735C0B8D6_METHOD_2_37917191637BFFF4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1C96463735C0B8D6_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C96463735C0B8D6_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}
};
