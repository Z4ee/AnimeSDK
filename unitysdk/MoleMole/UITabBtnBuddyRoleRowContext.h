#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UITabBtnRoleRowContext.h"

#define MOLEMOLE_UITABBTNBUDDYROLEROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15C3AF60)

namespace MoleMole
{
	inline static constexpr unsigned int UITabBtnBuddyRoleRowContext_TypeDefinitionIndex = 69279;

	class UITabBtnBuddyRoleRowContext : public ::MoleMole::UITabBtnRoleRowContext
	{
	public:
		::System::Int32 buddyID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNBUDDYROLEROWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
