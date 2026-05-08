#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_CEAA19957D609991_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x15327EF0)
#define CLASS_2_CEAA19957D609991_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x15327FA0)
#define CLASS_2_CEAA19957D609991_METHOD_2_CBC0149B5D954D19_OFFSET UNITYSDK_OFFSET(0x15327D50)
#define CLASS_2_CEAA19957D609991__CTOR_OFFSET UNITYSDK_OFFSET(0x15327F90)

inline static constexpr unsigned int Class_2_CEAA19957D609991_TypeDefinitionIndex = 65261;

class Class_2_CEAA19957D609991 : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::MonoGamepadSelectable* Field_2_3; // 0x18
	::MoleMole::NotificationBadgeEx* Field_2_2; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CEAA19957D609991__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CBC0149B5D954D19(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_CEAA19957D609991_METHOD_2_CBC0149B5D954D19_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CEAA19957D609991_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_CEAA19957D609991_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
