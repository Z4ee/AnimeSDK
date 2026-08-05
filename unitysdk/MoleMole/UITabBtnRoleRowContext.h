#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_UITABBTNROLEROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1677F480)

namespace MoleMole
{
	inline static constexpr unsigned int UITabBtnRoleRowContext_TypeDefinitionIndex = 55330;

	class UITabBtnRoleRowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::Battle::Entity* ShowEntity; // 0x28
		::System::Int32 avatarID; // 0x30
		::System::Boolean showbackStage; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNROLEROWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
