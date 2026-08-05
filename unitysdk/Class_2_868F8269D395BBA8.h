#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_2_868F8269D395BBA8_METHOD_2_5B900C0AEB2813BC_OFFSET UNITYSDK_OFFSET(0x1574F780)
#define CLASS_2_868F8269D395BBA8_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x1574F970)
#define CLASS_2_868F8269D395BBA8_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1574FA70)
#define CLASS_2_868F8269D395BBA8__CTOR_OFFSET UNITYSDK_OFFSET(0x1574FA60)

inline static constexpr unsigned int Class_2_868F8269D395BBA8_TypeDefinitionIndex = 89936;

class Class_2_868F8269D395BBA8 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_5; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x28
	::MoleMole::NotificationBadgeEx* Field_2_0; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x38
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_868F8269D395BBA8__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5B900C0AEB2813BC(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_868F8269D395BBA8_METHOD_2_5B900C0AEB2813BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_868F8269D395BBA8_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_868F8269D395BBA8_METHOD_2_737220D2233A9067_OFFSET))(this);
	}
};
