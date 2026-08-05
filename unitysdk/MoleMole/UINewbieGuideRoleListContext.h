#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UINEWBIEGUIDEROLELISTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x179736F0)

namespace MoleMole
{
	inline static constexpr unsigned int UINewbieGuideRoleListContext_TypeDefinitionIndex = 90167;

	class UINewbieGuideRoleListContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 WeaponItemId; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEROLELISTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
