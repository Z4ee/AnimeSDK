#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class UIControllerExtensionData;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_2_5BA0256FCCEF80F3_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x14D05180)
#define CLASS_2_5BA0256FCCEF80F3_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x14D04F20)
#define CLASS_2_5BA0256FCCEF80F3_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x14D05270)
#define CLASS_2_5BA0256FCCEF80F3__CTOR_OFFSET UNITYSDK_OFFSET(0x14D05260)

inline static constexpr unsigned int Class_2_5BA0256FCCEF80F3_TypeDefinitionIndex = 40330;

class Class_2_5BA0256FCCEF80F3 : public ::Class_1_EEA0111A28582B57
{
public:
	::UIControllerExtensionData* Field_2_10; // 0x18
	::UnityEngine::Transform* Field_2_1; // 0x20
	::UnityEngine::RectTransform* Field_2_6; // 0x28
	::UnityEngine::CanvasGroup* Field_2_4; // 0x30
	::UnityEngine::Animation* Field_2_3; // 0x38
	::UnityEngine::RectTransform* Field_2_7; // 0x40
	::UnityEngine::CanvasGroup* Field_2_5; // 0x48
	::Class_2_1A39E1B51756BF41* Field_2_9; // 0x50
	::UnityEngine::RectTransform* Field_2_2; // 0x58
	::UnityEngine::GameObject* Field_2_8; // 0x60
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5BA0256FCCEF80F3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5BA0256FCCEF80F3_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5BA0256FCCEF80F3_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5BA0256FCCEF80F3_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}
};
