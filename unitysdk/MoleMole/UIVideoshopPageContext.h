#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole { class UIRoleEquipReplaceWidgetController; }

#define MOLEMOLE_UIVIDEOSHOPPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15C472E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVideoshopPageContext_TypeDefinitionIndex = 73810;

	class UIVideoshopPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::UIRoleEquipReplaceWidgetController* equipReplaceWidget; // 0x28
		::System::Int32 FromDevelopmentAvatarID; // 0x30
		::System::UInt32 DefaultUpSuitID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
