#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_26A921B88D565FDB.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Struct_2_72D718364F0A8071.h"

class Class_2_3BB4FDB082E23A99;

#define MOLEMOLE_LEVELUPDETAILCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x118E11E0)

namespace MoleMole
{
	inline static constexpr unsigned int LevelUpDetailContext_TypeDefinitionIndex = 85426;

	class LevelUpDetailContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_3BB4FDB082E23A99* battleBuddyData; // 0x28
		::Struct_2_72D718364F0A8071 skillViewMode; // 0x30
		::Enum_3_26A921B88D565FDB levelUpType; // 0x40
		::System::UInt32 weaponUid; // 0x44
		::System::Int32 avatarId; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELUPDETAILCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
