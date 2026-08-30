#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeV2LevelData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MATCHTHREEV2LEVELINFOS_CREATE_OFFSET UNITYSDK_OFFSET(0xD661C50)
#define RPG_CLIENT_MATCHTHREEV2LEVELINFOS_GETLEVELDATA_OFFSET UNITYSDK_OFFSET(0xD662040)
#define RPG_CLIENT_MATCHTHREEV2LEVELINFOS_GETREQUIREDSUBMISSIONIDS_OFFSET UNITYSDK_OFFSET(0xD659660)
#define RPG_CLIENT_MATCHTHREEV2LEVELINFOS_GET_ALLLEVELDATAS_OFFSET UNITYSDK_OFFSET(0xD661B20)
#define RPG_CLIENT_MATCHTHREEV2LEVELINFOS_INIT_OFFSET UNITYSDK_OFFSET(0xD661DC0)
#define RPG_CLIENT_MATCHTHREEV2LEVELINFOS__CTOR_OFFSET UNITYSDK_OFFSET(0xD661D40)
#define RPG_CLIENT_MATCHTHREEV2LEVELINFOS__INITALLLEVELDATAS_OFFSET UNITYSDK_OFFSET(0xD661E10)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2LevelInfos_TypeDefinitionIndex = 66048;

	class MatchThreeV2LevelInfos : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MatchThreeV2LevelData*>* _AllLevelDatas; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LEVELINFOS__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeV2LevelData*>* get_AllLevelDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MatchThreeV2LevelData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LEVELINFOS_GET_ALLLEVELDATAS_OFFSET))(this);
		}

		static ::RPG::Client::MatchThreeV2LevelInfos* Create()
		{
			return ((::RPG::Client::MatchThreeV2LevelInfos*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LEVELINFOS_CREATE_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LEVELINFOS_INIT_OFFSET))(this);
		}

		::System::Void _InitAllLevelDatas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LEVELINFOS__INITALLLEVELDATAS_OFFSET))(this);
		}

		::RPG::Client::MatchThreeV2LevelData* GetLevelData(::System::UInt32 a1)
		{
			return ((::RPG::Client::MatchThreeV2LevelData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LEVELINFOS_GETLEVELDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* GetRequiredSubMissionIDs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LEVELINFOS_GETREQUIREDSUBMISSIONIDS_OFFSET))(this);
		}
	};
}
