#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class UIControllerExtensionData;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_2_5BA0256FCCEF80F3_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x12664D30)
#define CLASS_2_5BA0256FCCEF80F3_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x12664AE0)
#define CLASS_2_5BA0256FCCEF80F3_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12664E20)
#define CLASS_2_5BA0256FCCEF80F3__CTOR_OFFSET UNITYSDK_OFFSET(0x12664E10)

inline static constexpr unsigned int Class_2_5BA0256FCCEF80F3_TypeDefinitionIndex = 69468;

class Class_2_5BA0256FCCEF80F3 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_10; // 0x18
	::UIControllerExtensionData* Field_2_15; // 0x20
	::UnityEngine::GameObject* Field_2_9; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_8; // 0x30
	::UnityEngine::Animation* Field_2_6; // 0x38
	::UnityEngine::CanvasGroup* Field_2_5; // 0x40
	::UnityEngine::CanvasGroup* Field_2_4; // 0x48
	::UnityEngine::Transform* Field_2_0; // 0x50
	::UnityEngine::RectTransform* Field_2_11; // 0x58
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x60
	::UnityEngine::RectTransform* Field_2_7; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5BA0256FCCEF80F3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5BA0256FCCEF80F3_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5BA0256FCCEF80F3_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5BA0256FCCEF80F3_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
