#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_2_B2303AC82AEE5F2A_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x141A7740)
#define CLASS_2_B2303AC82AEE5F2A_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x141A7580)
#define CLASS_2_B2303AC82AEE5F2A__CTOR_OFFSET UNITYSDK_OFFSET(0x141A7730)

inline static constexpr unsigned int Class_2_B2303AC82AEE5F2A_TypeDefinitionIndex = 64856;

class Class_2_B2303AC82AEE5F2A : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_7; // 0x18
	::UnityEngine::RectTransform* Field_2_8; // 0x20
	::UnityEngine::RectTransform* Field_2_13; // 0x28
	::UnityEngine::RectTransform* Field_2_10; // 0x30
	::UnityEngine::RectTransform* Field_2_14; // 0x38
	::UnityEngine::RectTransform* Field_2_15; // 0x40
	::UnityEngine::RectTransform* Field_2_11; // 0x48
	::MoleMole::MonoGamepadModule* Field_2_9; // 0x50
	::UnityEngine::RectTransform* Field_2_6; // 0x58
	::UnityEngine::RectTransform* Field_2_4; // 0x60
	::UnityEngine::Transform* Field_2_0; // 0x68
	::UnityEngine::RectTransform* Field_2_5; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B2303AC82AEE5F2A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B2303AC82AEE5F2A_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B2303AC82AEE5F2A_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
