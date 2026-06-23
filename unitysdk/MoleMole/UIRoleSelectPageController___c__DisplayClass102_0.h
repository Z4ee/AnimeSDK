#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRoleSelectPageController; }
namespace MoleMole { class UserLocalDataItem; }

#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS102_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13814530)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSelectPageController___c__DisplayClass102_0_TypeDefinitionIndex = 76909;

	class UIRoleSelectPageController___c__DisplayClass102_0 : public ::System::Object
	{
	public:
		::MoleMole::UIRoleSelectPageController* __4__this; // 0x10
		::MoleMole::UserLocalDataItem* localData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS102_0__CTOR_OFFSET))(this);
		}
	};
}
