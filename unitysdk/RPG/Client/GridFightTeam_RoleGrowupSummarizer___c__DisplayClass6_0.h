#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTTEAM_ROLEGROWUPSUMMARIZER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x98C22B0)
#define RPG_CLIENT_GRIDFIGHTTEAM_ROLEGROWUPSUMMARIZER___C__DISPLAYCLASS6_0__UPDATEAFTER_B__0_OFFSET UNITYSDK_OFFSET(0x98C2420)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTeam_RoleGrowupSummarizer___c__DisplayClass6_0_TypeDefinitionIndex = 52912;

	class GridFightTeam_RoleGrowupSummarizer___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::KeyValuePair_2<::System::String*, ::RPG::GameCore::FixPoint> kv; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ROLEGROWUPSUMMARIZER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _UpdateAfter_b__0(::System::UInt32 x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ROLEGROWUPSUMMARIZER___C__DISPLAYCLASS6_0__UPDATEAFTER_B__0_OFFSET))(this, x);
		}
	};
}
