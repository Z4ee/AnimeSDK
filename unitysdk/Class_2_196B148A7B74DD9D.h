#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_196B148A7B74DD9D_Class_2_657FCF08AA744B3D_2;
class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoInputKey; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_196B148A7B74DD9D_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x178D9C60)
#define CLASS_2_196B148A7B74DD9D_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x178D9D30)
#define CLASS_2_196B148A7B74DD9D_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x178D99F0)
#define CLASS_2_196B148A7B74DD9D__CTOR_OFFSET UNITYSDK_OFFSET(0x178D9D20)

inline static constexpr unsigned int Class_2_196B148A7B74DD9D_TypeDefinitionIndex = 63793;

class Class_2_196B148A7B74DD9D : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_0D31A1661D004892<::Class_2_196B148A7B74DD9D_Class_2_657FCF08AA744B3D_2*>* Field_2_4; // 0x18
	::MoleMole::MonoInputKey* Field_2_0; // 0x20
	::UnityEngine::GameObject* Field_2_11; // 0x28
	::MoleMole::MonoGamepadModule* Field_2_1; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x38
	::UnityEngine::RectTransform* Field_2_10; // 0x40
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x48
	::MoleMole::NotificationBadgeEx* Field_2_6; // 0x50
	::MoleMole::UIGeneralButtonController* Field_2_2; // 0x58
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_196B148A7B74DD9D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_196B148A7B74DD9D_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_196B148A7B74DD9D_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_196B148A7B74DD9D_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
