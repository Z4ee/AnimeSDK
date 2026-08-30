#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournTitanTalentInfo; }

#define RPG_CLIENT_ROGUETOURNARCHIVEDTALENTINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AEEC6B0)
#define RPG_CLIENT_ROGUETOURNARCHIVEDTALENTINFO_GET_TITANTALENTINFO_OFFSET UNITYSDK_OFFSET(0x1AEEC700)
#define RPG_CLIENT_ROGUETOURNARCHIVEDTALENTINFO_INIT_OFFSET UNITYSDK_OFFSET(0x1AEEC660)
#define RPG_CLIENT_ROGUETOURNARCHIVEDTALENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEEC630)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournArchivedTalentInfo_TypeDefinitionIndex = 67852;

	class RogueTournArchivedTalentInfo : public ::System::Object
	{
	public:
		::RPG::Client::RogueTournTitanTalentInfo* _TitanTalentInfo_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDTALENTINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDTALENTINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDTALENTINFO_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::RogueTournTitanTalentInfo* get_TitanTalentInfo()
		{
			return ((::RPG::Client::RogueTournTitanTalentInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDTALENTINFO_GET_TITANTALENTINFO_OFFSET))(this);
		}
	};
}
