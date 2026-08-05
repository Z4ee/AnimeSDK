#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class MonoUITableScrollV2;
namespace MoleMole { class UIActivityBossChallengeHardInfoWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_F80368D3EA795458_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x1400B200)
#define CLASS_2_F80368D3EA795458_METHOD_2_9B59B42BE13F39B8_OFFSET UNITYSDK_OFFSET(0x1400B090)
#define CLASS_2_F80368D3EA795458_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1400B290)
#define CLASS_2_F80368D3EA795458__CTOR_OFFSET UNITYSDK_OFFSET(0x1400B280)

inline static constexpr unsigned int Class_2_F80368D3EA795458_TypeDefinitionIndex = 63227;

class Class_2_F80368D3EA795458 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_826A30478DA34A69<::MoleMole::UIActivityBossChallengeHardInfoWidgetController*>* Field_2_6; // 0x18
	::MonoUITableScrollV2* Field_2_7; // 0x20
	::UnityEngine::RectTransform* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F80368D3EA795458__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9B59B42BE13F39B8(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F80368D3EA795458_METHOD_2_9B59B42BE13F39B8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F80368D3EA795458_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F80368D3EA795458_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
