#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_2_70D6C98B71AF3BDF_METHOD_2_0E09E70D88F8EDD3_OFFSET UNITYSDK_OFFSET(0x133F4680)
#define CLASS_2_70D6C98B71AF3BDF_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x133F48B0)
#define CLASS_2_70D6C98B71AF3BDF_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x133F4980)
#define CLASS_2_70D6C98B71AF3BDF__CTOR_OFFSET UNITYSDK_OFFSET(0x133F4970)

inline static constexpr unsigned int Class_2_70D6C98B71AF3BDF_TypeDefinitionIndex = 74639;

class Class_2_70D6C98B71AF3BDF : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Animation* Field_2_0; // 0x18
	::UnityEngine::Animation* Field_2_5; // 0x20
	::UnityEngine::RectTransform* Field_2_8; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_15; // 0x30
	::UnityEngine::RectTransform* Field_2_9; // 0x38
	::UnityEngine::RectTransform* Field_2_10; // 0x40
	::UnityEngine::Transform* Field_2_11; // 0x48
	::UnityEngine::Animation* Field_2_6; // 0x50
	::UnityEngine::RectTransform* Field_2_4; // 0x58
	::UnityEngine::RectTransform* Field_2_1; // 0x60
	::UnityEngine::Animation* Field_2_7; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70D6C98B71AF3BDF__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0E09E70D88F8EDD3(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_70D6C98B71AF3BDF_METHOD_2_0E09E70D88F8EDD3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_70D6C98B71AF3BDF_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70D6C98B71AF3BDF_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}
};
