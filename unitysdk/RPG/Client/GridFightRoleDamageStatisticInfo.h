#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightDamageStatisticInfo.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_F1F83A16E5B8B459_3;
namespace RPG::Client { class GridFightSeasonRole; }

#define RPG_CLIENT_GRIDFIGHTROLEDAMAGESTATISTICINFO_GET_ROLE_OFFSET UNITYSDK_OFFSET(0xA5742E0)
#define RPG_CLIENT_GRIDFIGHTROLEDAMAGESTATISTICINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA573D70)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleDamageStatisticInfo_TypeDefinitionIndex = 59268;

	class GridFightRoleDamageStatisticInfo : public ::RPG::Client::GridFightDamageStatisticInfo
	{
	public:
		::System::Void _ctor(::Class_1_F1F83A16E5B8B459_3* damageInfo, ::System::Double maxDamage, ::System::Nullable_1<::System::UInt32> seasonUID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F1F83A16E5B8B459_3*, ::System::Double, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEDAMAGESTATISTICINFO__CTOR_OFFSET))(this, damageInfo, maxDamage, seasonUID);
		}

		::RPG::Client::GridFightSeasonRole* get_Role()
		{
			return ((::RPG::Client::GridFightSeasonRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEDAMAGESTATISTICINFO_GET_ROLE_OFFSET))(this);
		}
	};
}
