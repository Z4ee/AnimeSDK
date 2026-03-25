#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::CakeRace { class CakeRaceCatMonoView; }
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceTalkBubbleMonoView; }

#define RPG_CLIENT_CAKERACE_CAKERACECATUI3DPERFORMANCEPREPAREDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x921A580)
#define RPG_CLIENT_CAKERACE_CAKERACECATUI3DPERFORMANCEPREPAREDATA_GET_CATANIMDELAY_OFFSET UNITYSDK_OFFSET(0x921A540)
#define RPG_CLIENT_CAKERACE_CAKERACECATUI3DPERFORMANCEPREPAREDATA_GET_CATVIEW_OFFSET UNITYSDK_OFFSET(0x921A500)
#define RPG_CLIENT_CAKERACE_CAKERACECATUI3DPERFORMANCEPREPAREDATA_GET_RANK_OFFSET UNITYSDK_OFFSET(0x921A560)
#define RPG_CLIENT_CAKERACE_CAKERACECATUI3DPERFORMANCEPREPAREDATA_GET_TALKBUBBLE_OFFSET UNITYSDK_OFFSET(0x921A520)
#define RPG_CLIENT_CAKERACE_CAKERACECATUI3DPERFORMANCEPREPAREDATA_SET_CATANIMDELAY_OFFSET UNITYSDK_OFFSET(0x921A550)
#define RPG_CLIENT_CAKERACE_CAKERACECATUI3DPERFORMANCEPREPAREDATA_SET_CATVIEW_OFFSET UNITYSDK_OFFSET(0x921A510)
#define RPG_CLIENT_CAKERACE_CAKERACECATUI3DPERFORMANCEPREPAREDATA_SET_RANK_OFFSET UNITYSDK_OFFSET(0x921A570)
#define RPG_CLIENT_CAKERACE_CAKERACECATUI3DPERFORMANCEPREPAREDATA_SET_TALKBUBBLE_OFFSET UNITYSDK_OFFSET(0x921A530)
#define RPG_CLIENT_CAKERACE_CAKERACECATUI3DPERFORMANCEPREPAREDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x921A620)

namespace RPG::Client::CakeRace
{
	inline static constexpr unsigned int CakeRaceCatUI3DPerformancePrepareData_TypeDefinitionIndex = 62230;

	class CakeRaceCatUI3DPerformancePrepareData : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* _CatView_k__BackingField; // 0x10
		::RPG::Client::LittleGame::CakeRace::CakeRaceTalkBubbleMonoView* _TalkBubble_k__BackingField; // 0x18
		::System::Int32 _Rank_k__BackingField; // 0x20
		::System::Single _CatAnimDelay_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACECATUI3DPERFORMANCEPREPAREDATA__CTOR_OFFSET))(this);
		}

		::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* get_CatView()
		{
			return ((::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACECATUI3DPERFORMANCEPREPAREDATA_GET_CATVIEW_OFFSET))(this);
		}

		::System::Void set_CatView(::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACECATUI3DPERFORMANCEPREPAREDATA_SET_CATVIEW_OFFSET))(this, value);
		}

		::RPG::Client::LittleGame::CakeRace::CakeRaceTalkBubbleMonoView* get_TalkBubble()
		{
			return ((::RPG::Client::LittleGame::CakeRace::CakeRaceTalkBubbleMonoView*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACECATUI3DPERFORMANCEPREPAREDATA_GET_TALKBUBBLE_OFFSET))(this);
		}

		::System::Void set_TalkBubble(::RPG::Client::LittleGame::CakeRace::CakeRaceTalkBubbleMonoView* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceTalkBubbleMonoView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACECATUI3DPERFORMANCEPREPAREDATA_SET_TALKBUBBLE_OFFSET))(this, value);
		}

		::System::Single get_CatAnimDelay()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACECATUI3DPERFORMANCEPREPAREDATA_GET_CATANIMDELAY_OFFSET))(this);
		}

		::System::Void set_CatAnimDelay(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACECATUI3DPERFORMANCEPREPAREDATA_SET_CATANIMDELAY_OFFSET))(this, value);
		}

		::System::Int32 get_Rank()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACECATUI3DPERFORMANCEPREPAREDATA_GET_RANK_OFFSET))(this);
		}

		::System::Void set_Rank(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACECATUI3DPERFORMANCEPREPAREDATA_SET_RANK_OFFSET))(this, value);
		}

		static ::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData* Create(::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* catView, ::RPG::Client::LittleGame::CakeRace::CakeRaceTalkBubbleMonoView* talkBubble, ::System::Single catAnimDelay, ::System::Int32 rank)
		{
			return ((::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData*(*)(::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView*, ::RPG::Client::LittleGame::CakeRace::CakeRaceTalkBubbleMonoView*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACECATUI3DPERFORMANCEPREPAREDATA_CREATE_OFFSET))(catView, talkBubble, catAnimDelay, rank);
		}
	};
}
