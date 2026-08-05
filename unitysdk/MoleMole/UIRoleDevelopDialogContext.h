#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B944D5F0FFA609A4.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIRoleDevelopPopWindowController_DevelopType.h"

namespace System { class Object; }

#define MOLEMOLE_UIROLEDEVELOPDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17597270)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleDevelopDialogContext_TypeDefinitionIndex = 82339;

	class UIRoleDevelopDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Object* _param; // 0x28
		::Enum_3_B944D5F0FFA609A4 _subType; // 0x30
		::MoleMole::UIRoleDevelopPopWindowController_DevelopType developType; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
