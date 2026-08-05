#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_79AE422BA06F6D26_186_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x138BBE50)
#define CLASS_2_79AE422BA06F6D26_186_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x138BC120)
#define CLASS_2_79AE422BA06F6D26_186_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x138BC200)
#define CLASS_2_79AE422BA06F6D26_186__CTOR_OFFSET UNITYSDK_OFFSET(0x138BC1F0)

inline static constexpr unsigned int Class_2_79AE422BA06F6D26_186_TypeDefinitionIndex = 61714;

class Class_2_79AE422BA06F6D26_186 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_0; // 0x18
	::MoleMole::NotificationBadgeEx* Field_2_9; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x28
	::UnityEngine::GameObject* Field_2_5; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x38
	::UnityEngine::GameObject* Field_2_10; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_13; // 0x48
	::UnityEngine::Transform* Field_2_8; // 0x50
	::UnityEngine::GameObject* Field_2_4; // 0x58
	::UnityEngine::RectTransform* Field_2_15; // 0x60
	::UnityEngine::GameObject* Field_2_11; // 0x68
	::UnityEngine::Transform* Field_2_7; // 0x70
	::UnityEngine::RectTransform* Field_2_14; // 0x78
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x80
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79AE422BA06F6D26_186__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_79AE422BA06F6D26_186_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79AE422BA06F6D26_186_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_79AE422BA06F6D26_186_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
