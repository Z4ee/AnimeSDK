#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_41E07A9DDAB7FC78.h"
#include "unitysdk/Enum_3_75A1C8C41006A504.h"

namespace RPG::Client { class GridFightRole; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTEAM_GRIDFIGHTTRAITSELLROLESUMMARIZER_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x1A5EA440)
#define RPG_CLIENT_GRIDFIGHTTEAM_GRIDFIGHTTRAITSELLROLESUMMARIZER_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x1A5EA7D0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GRIDFIGHTTRAITSELLROLESUMMARIZER_UPDATECOIN_OFFSET UNITYSDK_OFFSET(0x1A5EA700)
#define RPG_CLIENT_GRIDFIGHTTEAM_GRIDFIGHTTRAITSELLROLESUMMARIZER_UPDATEREMOVEROLE_OFFSET UNITYSDK_OFFSET(0x1A5EA490)
#define RPG_CLIENT_GRIDFIGHTTEAM_GRIDFIGHTTRAITSELLROLESUMMARIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5EA8F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTeam_GridFightTraitSellRoleSummarizer_TypeDefinitionIndex = 62233;

	class GridFightTeam_GridFightTraitSellRoleSummarizer : public ::Class_1_41E07A9DDAB7FC78
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* _RemoveRoles; // 0x10
		::System::Int32 AddCoin; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GRIDFIGHTTRAITSELLROLESUMMARIZER__CTOR_OFFSET))(this);
		}

		::System::Boolean IsConcernedWith(::Enum_3_75A1C8C41006A504 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A1C8C41006A504))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GRIDFIGHTTRAITSELLROLESUMMARIZER_ISCONCERNEDWITH_OFFSET))(this, a1);
		}

		::System::Void UpdateRemoveRole(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GRIDFIGHTTRAITSELLROLESUMMARIZER_UPDATEREMOVEROLE_OFFSET))(this, a1);
		}

		::System::Void UpdateCoin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GRIDFIGHTTRAITSELLROLESUMMARIZER_UPDATECOIN_OFFSET))(this, a1);
		}

		::System::Void UpdateAfter(::Enum_3_75A1C8C41006A504 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_75A1C8C41006A504))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GRIDFIGHTTRAITSELLROLESUMMARIZER_UPDATEAFTER_OFFSET))(this, a1);
		}
	};
}
