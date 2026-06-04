#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChimeraDuelRankRow; }
namespace System { class String; }

#define RPG_CLIENT_CHIMERADUELRANKDATA_GET_LARGEICONPATH_OFFSET UNITYSDK_OFFSET(0xB69E2F0)
#define RPG_CLIENT_CHIMERADUELRANKDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xB69E2E0)
#define RPG_CLIENT_CHIMERADUELRANKDATA_GET_MAXSCOREEXCLUSIVE_OFFSET UNITYSDK_OFFSET(0xB69E3D0)
#define RPG_CLIENT_CHIMERADUELRANKDATA_GET_MAXSCOREINCLUSIVE_OFFSET UNITYSDK_OFFSET(0xB69E480)
#define RPG_CLIENT_CHIMERADUELRANKDATA_GET_MINSCORE_OFFSET UNITYSDK_OFFSET(0xB69E360)
#define RPG_CLIENT_CHIMERADUELRANKDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB67BFF0)
#define RPG_CLIENT_CHIMERADUELRANKDATA_GET_SMALLICONPATH_OFFSET UNITYSDK_OFFSET(0xB67BF80)
#define RPG_CLIENT_CHIMERADUELRANKDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xB69E280)
#define RPG_CLIENT_CHIMERADUELRANKDATA_SETUPNEIGHBORS_OFFSET UNITYSDK_OFFSET(0xB69E540)
#define RPG_CLIENT_CHIMERADUELRANKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB69E530)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelRankData_TypeDefinitionIndex = 59315;

	class ChimeraDuelRankData : public ::System::Object
	{
	public:
		::RPG::Client::ChimeraDuelRankData* _NextRankData; // 0x10
		::System::UInt32 _ID; // 0x18

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELRANKDATA__CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::ChimeraDuelRankRow* get__Row()
		{
			return ((::RPG::GameCore::ChimeraDuelRankRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELRANKDATA_GET__ROW_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELRANKDATA_GET_LEVEL_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELRANKDATA_GET_NAME_OFFSET))(this);
		}

		::System::String* get_LargeIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELRANKDATA_GET_LARGEICONPATH_OFFSET))(this);
		}

		::System::String* get_SmallIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELRANKDATA_GET_SMALLICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_MinScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELRANKDATA_GET_MINSCORE_OFFSET))(this);
		}

		::System::UInt32 get_MaxScoreExclusive()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELRANKDATA_GET_MAXSCOREEXCLUSIVE_OFFSET))(this);
		}

		::System::UInt32 get_MaxScoreInclusive()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELRANKDATA_GET_MAXSCOREINCLUSIVE_OFFSET))(this);
		}

		::System::Void SetupNeighbors(::RPG::Client::ChimeraDuelRankData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelRankData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELRANKDATA_SETUPNEIGHBORS_OFFSET))(this, a1);
		}
	};
}
