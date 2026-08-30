#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightDamageStatisticInfo.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_17A912F7181BCCFA;
namespace RPG::Client { class GridFightSeasonRole; }

#define RPG_CLIENT_GRIDFIGHTROLEDAMAGESTATISTICINFO_GET_ROLE_OFFSET UNITYSDK_OFFSET(0x1CA71B80)
#define RPG_CLIENT_GRIDFIGHTROLEDAMAGESTATISTICINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA71840)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleDamageStatisticInfo_TypeDefinitionIndex = 64475;

	class GridFightRoleDamageStatisticInfo : public ::RPG::Client::GridFightDamageStatisticInfo
	{
	public:
		::System::Void _ctor(::Class_1_17A912F7181BCCFA* a1, ::System::Double a2, ::System::Nullable_1<::System::UInt32> a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_17A912F7181BCCFA*, ::System::Double, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEDAMAGESTATISTICINFO__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::GridFightSeasonRole* get_Role()
		{
			return ((::RPG::Client::GridFightSeasonRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEDAMAGESTATISTICINFO_GET_ROLE_OFFSET))(this);
		}
	};
}
