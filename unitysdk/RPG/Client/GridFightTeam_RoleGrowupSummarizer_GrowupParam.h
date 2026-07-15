#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTEAM_ROLEGROWUPSUMMARIZER_GROWUPPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5EADC0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTeam_RoleGrowupSummarizer_GrowupParam_TypeDefinitionIndex = 62236;

	class GridFightTeam_RoleGrowupSummarizer_GrowupParam : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* LevelIntervals; // 0x10
		::System::String* ValueName; // 0x18
		::System::UInt32 RoleID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ROLEGROWUPSUMMARIZER_GROWUPPARAM__CTOR_OFFSET))(this);
		}
	};
}
