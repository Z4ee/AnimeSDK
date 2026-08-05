#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_1D599EF6ED04D960_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x17011A60)
#define CLASS_2_1D599EF6ED04D960_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x17011AF0)
#define CLASS_2_1D599EF6ED04D960_METHOD_2_CBC0149B5D954D19_OFFSET UNITYSDK_OFFSET(0x170118B0)
#define CLASS_2_1D599EF6ED04D960__CTOR_OFFSET UNITYSDK_OFFSET(0x17011AE0)

inline static constexpr unsigned int Class_2_1D599EF6ED04D960_TypeDefinitionIndex = 46450;

class Class_2_1D599EF6ED04D960 : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::NotificationBadgeEx* Field_2_0; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x28
	::UnityEngine::GameObject* Field_2_6; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x38
	::UnityEngine::RectTransform* Field_2_3; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D599EF6ED04D960__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CBC0149B5D954D19(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1D599EF6ED04D960_METHOD_2_CBC0149B5D954D19_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D599EF6ED04D960_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1D599EF6ED04D960_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
