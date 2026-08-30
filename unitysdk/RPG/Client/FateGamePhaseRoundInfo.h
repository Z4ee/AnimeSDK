#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_339;
namespace RPG::Client { class FatePhaseInfoItem; }
namespace RPG::Client { class FateRoundInfoItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEGAMEPHASEROUNDINFO_GET_CURPHASEID_OFFSET UNITYSDK_OFFSET(0x1C18C250)
#define RPG_CLIENT_FATEGAMEPHASEROUNDINFO_GET_CURPHASEINDEX_OFFSET UNITYSDK_OFFSET(0x1C174700)
#define RPG_CLIENT_FATEGAMEPHASEROUNDINFO_GET_CURPHASE_OFFSET UNITYSDK_OFFSET(0x1C1750E0)
#define RPG_CLIENT_FATEGAMEPHASEROUNDINFO_GET_CURROUNDINDEX_OFFSET UNITYSDK_OFFSET(0x1C1750A0)
#define RPG_CLIENT_FATEGAMEPHASEROUNDINFO_GET_CURROUND_OFFSET UNITYSDK_OFFSET(0x1C18C7F0)
#define RPG_CLIENT_FATEGAMEPHASEROUNDINFO_GET_LASTPHASE_OFFSET UNITYSDK_OFFSET(0x1C18C670)
#define RPG_CLIENT_FATEGAMEPHASEROUNDINFO_GET_PHASEROUNDTEXT_OFFSET UNITYSDK_OFFSET(0x1C18C920)
#define RPG_CLIENT_FATEGAMEPHASEROUNDINFO_REBUILDALLPHASES_OFFSET UNITYSDK_OFFSET(0x1C17EC90)
#define RPG_CLIENT_FATEGAMEPHASEROUNDINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x1C17F4F0)
#define RPG_CLIENT_FATEGAMEPHASEROUNDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C17E2A0)
#define RPG_CLIENT_FATEGAMEPHASEROUNDINFO__GET_CURPHASE_B__10_0_OFFSET UNITYSDK_OFFSET(0x1C18CB30)
#define RPG_CLIENT_FATEGAMEPHASEROUNDINFO__GET_CURROUND_B__14_0_OFFSET UNITYSDK_OFFSET(0x1C18CCD0)
#define RPG_CLIENT_FATEGAMEPHASEROUNDINFO__GET_LASTPHASE_B__12_0_OFFSET UNITYSDK_OFFSET(0x1C18CB90)

namespace RPG::Client
{
	inline static constexpr unsigned int FateGamePhaseRoundInfo_TypeDefinitionIndex = 64174;

	class FateGamePhaseRoundInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::FatePhaseInfoItem*>* _Phases; // 0x10
		::System::UInt32 _PhaseID; // 0x18
		::System::UInt32 _RoundIndex; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEPHASEROUNDINFO__CTOR_OFFSET))(this);
		}

		::System::Void RebuildAllPhases(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEPHASEROUNDINFO_REBUILDALLPHASES_OFFSET))(this, a1);
		}

		::System::Void Sync(::Class_1_D17272E82AE804C2_339* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_339*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEPHASEROUNDINFO_SYNC_OFFSET))(this, a1);
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

		::System::Boolean _get_CurPhase_b__10_0(::RPG::Client::FatePhaseInfoItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FatePhaseInfoItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEPHASEROUNDINFO__GET_CURPHASE_B__10_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_LastPhase_b__12_0(::RPG::Client::FatePhaseInfoItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FatePhaseInfoItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEPHASEROUNDINFO__GET_LASTPHASE_B__12_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_CurRound_b__14_0(::RPG::Client::FateRoundInfoItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateRoundInfoItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEPHASEROUNDINFO__GET_CURROUND_B__14_0_OFFSET))(this, a1);
		}
	};
}
