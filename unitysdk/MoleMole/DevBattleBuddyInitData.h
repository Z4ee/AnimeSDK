#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DevBuddyInitData.h"

#define MOLEMOLE_DEVBATTLEBUDDYINITDATA_GET_TEMPLATEID_OFFSET UNITYSDK_OFFSET(0x16276BE0)
#define MOLEMOLE_DEVBATTLEBUDDYINITDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16276BF0)

namespace MoleMole
{
	inline static constexpr unsigned int DevBattleBuddyInitData_TypeDefinitionIndex = 65581;

	class DevBattleBuddyInitData : public ::MoleMole::DevBuddyInitData
	{
	public:
		::System::Int32 BuddyTemplateID; // 0x20
		::System::Boolean CreateAsAvatar; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DEVBATTLEBUDDYINITDATA__CTOR_OFFSET))(this);
		}

		::System::Int32 get_TemplateID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DEVBATTLEBUDDYINITDATA_GET_TEMPLATEID_OFFSET))(this);
		}
	};
}
