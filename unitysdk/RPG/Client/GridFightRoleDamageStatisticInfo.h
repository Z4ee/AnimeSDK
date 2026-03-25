#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightDamageStatisticInfo.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_8E5A9F762BDF32F5;
namespace RPG::Client { class GridFightSeasonRole; }

#define RPG_CLIENT_GRIDFIGHTROLEDAMAGESTATISTICINFO_GET_ROLE_OFFSET UNITYSDK_OFFSET(0x98930A0)
#define RPG_CLIENT_GRIDFIGHTROLEDAMAGESTATISTICINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9892DC0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleDamageStatisticInfo_TypeDefinitionIndex = 52315;

	class GridFightRoleDamageStatisticInfo : public ::RPG::Client::GridFightDamageStatisticInfo
	{
	public:
		::System::Void _ctor(::Class_1_8E5A9F762BDF32F5* damageInfo, ::System::Double maxDamage, ::System::Nullable_1<::System::UInt32> seasonUID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8E5A9F762BDF32F5*, ::System::Double, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEDAMAGESTATISTICINFO__CTOR_OFFSET))(this, damageInfo, maxDamage, seasonUID);
		}

		::RPG::Client::GridFightSeasonRole* get_Role()
		{
			return ((::RPG::Client::GridFightSeasonRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEDAMAGESTATISTICINFO_GET_ROLE_OFFSET))(this);
		}
	};
}
