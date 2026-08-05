#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralRewardListBtnWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class RawImage; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_ADA42B47CD405E31_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x18B8FEA0)
#define CLASS_2_ADA42B47CD405E31_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x18B90350)
#define CLASS_2_ADA42B47CD405E31_METHOD_2_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0x18B90190)
#define CLASS_2_ADA42B47CD405E31__CTOR_OFFSET UNITYSDK_OFFSET(0x18B90340)

inline static constexpr unsigned int Class_2_ADA42B47CD405E31_TypeDefinitionIndex = 62947;

class Class_2_ADA42B47CD405E31 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_15; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x20
	::UnityEngine::UI::RawImage* Field_2_8; // 0x28
	::UnityEngine::Transform* Field_2_11; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_10; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x40
	::MonoUITableScrollV2* Field_2_4; // 0x48
	::Class_2_B4378B46E0020E85* Field_2_9; // 0x50
	::Class_2_B4378B46E0020E85* Field_2_14; // 0x58
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x60
	::Class_3_826A30478DA34A69<::MoleMole::UIGeneralRewardListBtnWidgetController*>* Field_2_13; // 0x68
	::UnityEngine::RectTransform* Field_2_7; // 0x70
	::UnityEngine::RectTransform* Field_2_0; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ADA42B47CD405E31__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_ADA42B47CD405E31_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_ADA42B47CD405E31_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_EC2B405D0723571D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ADA42B47CD405E31_METHOD_2_EC2B405D0723571D_OFFSET))(this);
	}
};
