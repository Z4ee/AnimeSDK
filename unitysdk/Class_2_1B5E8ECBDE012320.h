#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIPhotoTaskRowWidgetController; }
namespace UnityEngine { class RectTransform; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_1B5E8ECBDE012320_METHOD_2_5200FEEACE882DF3_OFFSET UNITYSDK_OFFSET(0x16E948D0)
#define CLASS_2_1B5E8ECBDE012320_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x16E94AA0)
#define CLASS_2_1B5E8ECBDE012320_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x16E94B70)
#define CLASS_2_1B5E8ECBDE012320__CTOR_OFFSET UNITYSDK_OFFSET(0x16E94B60)

inline static constexpr unsigned int Class_2_1B5E8ECBDE012320_TypeDefinitionIndex = 47811;

class Class_2_1B5E8ECBDE012320 : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollV2* Field_2_7; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x20
	::Class_3_826A30478DA34A69<::MoleMole::UIPhotoTaskRowWidgetController*>* Field_2_5; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x30
	::UnityEngine::RectTransform* Field_2_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B5E8ECBDE012320__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5200FEEACE882DF3(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1B5E8ECBDE012320_METHOD_2_5200FEEACE882DF3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1B5E8ECBDE012320_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B5E8ECBDE012320_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
