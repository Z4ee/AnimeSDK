#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/System/Object.h"

class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIBaseScenePageController; }

#define CLASS_1_25479A17D745887B_METHOD_1_4E705512CD0D1478_OFFSET UNITYSDK_OFFSET(0x17A9D910)
#define CLASS_1_25479A17D745887B_METHOD_1_9F10E6E7925E011B_OFFSET UNITYSDK_OFFSET(0x17A9CD70)
#define CLASS_1_25479A17D745887B__CTOR_OFFSET UNITYSDK_OFFSET(0x17A9CD60)

inline static constexpr unsigned int Class_1_25479A17D745887B_TypeDefinitionIndex = 61680;

class Class_1_25479A17D745887B : public ::System::Object
{
public:
	::MoleMole::UIBaseScenePageController* Field_1_0; // 0x10

	::System::Void _ctor(::MoleMole::UIBaseScenePageController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseScenePageController*))((::PBYTE)hIl2Cpp + CLASS_1_25479A17D745887B__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9F10E6E7925E011B(::MoleMole::InputActionEvent a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + CLASS_1_25479A17D745887B_METHOD_1_9F10E6E7925E011B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4E705512CD0D1478(::MoleMole::InputActionEvent a1, ::Class_2_B4378B46E0020E85* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent, ::Class_2_B4378B46E0020E85*))((::PBYTE)hIl2Cpp + CLASS_1_25479A17D745887B_METHOD_1_4E705512CD0D1478_OFFSET))(this, a1, a2);
	}
};
