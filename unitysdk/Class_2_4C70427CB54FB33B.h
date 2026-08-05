#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class MonoUITableScrollV2;
namespace MoleMole { class UIAvatarActivityCoinBrushingWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_4C70427CB54FB33B_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x141BF360)
#define CLASS_2_4C70427CB54FB33B_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x141BF430)
#define CLASS_2_4C70427CB54FB33B_METHOD_2_ECD1B788BD780B17_OFFSET UNITYSDK_OFFSET(0x141BF1F0)
#define CLASS_2_4C70427CB54FB33B__CTOR_OFFSET UNITYSDK_OFFSET(0x141BF420)

inline static constexpr unsigned int Class_2_4C70427CB54FB33B_TypeDefinitionIndex = 62054;

class Class_2_4C70427CB54FB33B : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_826A30478DA34A69<::MoleMole::UIAvatarActivityCoinBrushingWidgetController*>* Field_2_6; // 0x18
	::UnityEngine::CanvasGroup* Field_2_7; // 0x20
	::MonoUITableScrollV2* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C70427CB54FB33B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_ECD1B788BD780B17(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4C70427CB54FB33B_METHOD_2_ECD1B788BD780B17_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C70427CB54FB33B_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4C70427CB54FB33B_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
