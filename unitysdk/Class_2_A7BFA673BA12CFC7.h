#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_2_A7BFA673BA12CFC7_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x124E7C50)
#define CLASS_2_A7BFA673BA12CFC7_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x124E7AC0)
#define CLASS_2_A7BFA673BA12CFC7__CTOR_OFFSET UNITYSDK_OFFSET(0x124E7C40)

inline static constexpr unsigned int Class_2_A7BFA673BA12CFC7_TypeDefinitionIndex = 40432;

class Class_2_A7BFA673BA12CFC7 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Animation* Field_2_7; // 0x18
	::UnityEngine::RectTransform* Field_2_2; // 0x20
	::UnityEngine::RectTransform* Field_2_5; // 0x28
	::UnityEngine::RectTransform* Field_2_9; // 0x30
	::UnityEngine::Transform* Field_2_4; // 0x38
	::UnityEngine::RectTransform* Field_2_11; // 0x40
	::UnityEngine::Animation* Field_2_6; // 0x48
	::UnityEngine::Animation* Field_2_1; // 0x50
	::UnityEngine::Animation* Field_2_0; // 0x58
	::UnityEngine::RectTransform* Field_2_10; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7BFA673BA12CFC7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A7BFA673BA12CFC7_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A7BFA673BA12CFC7_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
