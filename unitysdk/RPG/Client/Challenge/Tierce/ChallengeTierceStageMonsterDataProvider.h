#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Monster/MonsterDataProviderViewModelBase.h"

namespace RPG::Client { class MonsterData; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEMONSTERDATAPROVIDER_GETBOSSMONSTERBYSTAGEINDEX_OFFSET UNITYSDK_OFFSET(0xCA06F40)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEMONSTERDATAPROVIDER_GETCOVERBOSSMONSTER_OFFSET UNITYSDK_OFFSET(0xCA070F0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEMONSTERDATAPROVIDER_GETMONSTERWAVESBYSTAGEINDEX_OFFSET UNITYSDK_OFFSET(0xCA067F0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEMONSTERDATAPROVIDER_GETSTAGECOUNT_OFFSET UNITYSDK_OFFSET(0xCA067A0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEMONSTERDATAPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0xCA06790)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceStageMonsterDataProvider_TypeDefinitionIndex = 80246;

	class ChallengeTierceStageMonsterDataProvider : public ::RPG::Client::Monster::MonsterDataProviderViewModelBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MonsterData*>*>* _MonsterBatches; // 0x10

		::System::Void _ctor(::System::Collections::Generic::List_1<::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MonsterData*>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MonsterData*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEMONSTERDATAPROVIDER__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 GetStageCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEMONSTERDATAPROVIDER_GETSTAGECOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*>* GetMonsterWavesByStageIndex(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEMONSTERDATAPROVIDER_GETMONSTERWAVESBYSTAGEINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::MonsterData* GetBossMonsterByStageIndex(::System::Int32 a1)
		{
			return ((::RPG::Client::MonsterData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEMONSTERDATAPROVIDER_GETBOSSMONSTERBYSTAGEINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::MonsterData* GetCoverBossMonster()
		{
			return ((::RPG::Client::MonsterData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEMONSTERDATAPROVIDER_GETCOVERBOSSMONSTER_OFFSET))(this);
		}
	};
}
