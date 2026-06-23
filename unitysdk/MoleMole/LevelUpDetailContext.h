#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_76345B31E4FE3344.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Struct_2_72D718364F0A8071.h"

class Class_2_6DA22669E4D1C4BF;

#define MOLEMOLE_LEVELUPDETAILCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1914D180)

namespace MoleMole
{
	inline static constexpr unsigned int LevelUpDetailContext_TypeDefinitionIndex = 53923;

	class LevelUpDetailContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Struct_2_72D718364F0A8071 skillViewMode; // 0x28
		::Class_2_6DA22669E4D1C4BF* battleBuddyData; // 0x38
		::Enum_3_76345B31E4FE3344 levelUpType; // 0x40
		::System::UInt32 weaponUid; // 0x44
		::System::Int32 avatarId; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELUPDETAILCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
