#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D1E0AD3915BCCF29_30;
namespace RPG::Client { class FatePhaseInfoItem; }
namespace RPG::Client { class FateRoundInfoItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEGAMEPHASEROUNDINFO_GET_CURPHASEID_OFFSET UNITYSDK_OFFSET(0xA3484F0)
#define RPG_CLIENT_FATEGAMEPHASEROUNDINFO_GET_CURPHASEINDEX_OFFSET UNITYSDK_OFFSET(0xA3329F0)
#define RPG_CLIENT_FATEGAMEPHASEROUNDINFO_GET_CURPHASE_OFFSET UNITYSDK_OFFSET(0xA3331A0)
#define RPG_CLIENT_FATEGAMEPHASEROUNDINFO_GET_CURROUNDINDEX_OFFSET UNITYSDK_OFFSET(0xA348550)
#define RPG_CLIENT_FATEGAMEPHASEROUNDINFO_GET_CURROUND_OFFSET UNITYSDK_OFFSET(0xA348620)
#define RPG_CLIENT_FATEGAMEPHASEROUNDINFO_GET_LASTPHASE_OFFSET UNITYSDK_OFFSET(0xA348560)
#define RPG_CLIENT_FATEGAMEPHASEROUNDINFO_GET_PHASEROUNDTEXT_OFFSET UNITYSDK_OFFSET(0xA3486E0)
#define RPG_CLIENT_FATEGAMEPHASEROUNDINFO_REBUILDALLPHASES_OFFSET UNITYSDK_OFFSET(0xA33C5D0)
#define RPG_CLIENT_FATEGAMEPHASEROUNDINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xA33CF30)
#define RPG_CLIENT_FATEGAMEPHASEROUNDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA33BA70)
#define RPG_CLIENT_FATEGAMEPHASEROUNDINFO__GET_CURPHASE_B__10_0_OFFSET UNITYSDK_OFFSET(0xA348C10)
#define RPG_CLIENT_FATEGAMEPHASEROUNDINFO__GET_CURROUND_B__14_0_OFFSET UNITYSDK_OFFSET(0xA348C90)
#define RPG_CLIENT_FATEGAMEPHASEROUNDINFO__GET_LASTPHASE_B__12_0_OFFSET UNITYSDK_OFFSET(0xA348C30)

namespace RPG::Client
{
	inline static constexpr unsigned int FateGamePhaseRoundInfo_TypeDefinitionIndex = 58978;

	class FateGamePhaseRoundInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::FatePhaseInfoItem*>* _Phases; // 0x10
		::System::UInt32 _RoundIndex; // 0x18
		::System::UInt32 _PhaseID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEPHASEROUNDINFO__CTOR_OFFSET))(this);
		}

		::System::Void RebuildAllPhases(::System::UInt32 curGameDifficulty)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEPHASEROUNDINFO_REBUILDALLPHASES_OFFSET))(this, curGameDifficulty);
		}

		::System::Void Sync(::Class_1_D1E0AD3915BCCF29_30* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_30*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEPHASEROUNDINFO_SYNC_OFFSET))(this, proto);
		}

		::System::UInt32 get_CurPhaseID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEPHASEROUNDINFO_GET_CURPHASEID_OFFSET))(this);
		}

		::System::UInt32 get_CurPhaseIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEPHASEROUNDINFO_GET_CURPHASEINDEX_OFFSET))(this);
		}

		::System::UInt32 get_CurRoundIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEPHASEROUNDINFO_GET_CURROUNDINDEX_OFFSET))(this);
		}

		::RPG::Client::FatePhaseInfoItem* get_CurPhase()
		{
			return ((::RPG::Client::FatePhaseInfoItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEPHASEROUNDINFO_GET_CURPHASE_OFFSET))(this);
		}

		::RPG::Client::FatePhaseInfoItem* get_LastPhase()
		{
			return ((::RPG::Client::FatePhaseInfoItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEPHASEROUNDINFO_GET_LASTPHASE_OFFSET))(this);
		}

		::RPG::Client::FateRoundInfoItem* get_CurRound()
		{
			return ((::RPG::Client::FateRoundInfoItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEPHASEROUNDINFO_GET_CURROUND_OFFSET))(this);
		}

		::System::String* get_PhaseRoundText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEPHASEROUNDINFO_GET_PHASEROUNDTEXT_OFFSET))(this);
		}

		::System::Boolean _get_CurPhase_b__10_0(::RPG::Client::FatePhaseInfoItem* phase)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FatePhaseInfoItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEPHASEROUNDINFO__GET_CURPHASE_B__10_0_OFFSET))(this, phase);
		}

		::System::Boolean _get_LastPhase_b__12_0(::RPG::Client::FatePhaseInfoItem* phase)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FatePhaseInfoItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEPHASEROUNDINFO__GET_LASTPHASE_B__12_0_OFFSET))(this, phase);
		}

		::System::Boolean _get_CurRound_b__14_0(::RPG::Client::FateRoundInfoItem* round)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateRoundInfoItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEPHASEROUNDINFO__GET_CURROUND_B__14_0_OFFSET))(this, round);
		}
	};
}
