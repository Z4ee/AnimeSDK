#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::CakeRace { class CakeRaceCatMonoView; }
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceTalkBubbleMonoView; }

#define RPG_CLIENT_CAKERACE_CAKERACECATUI3DPERFORMANCEPREPAREDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC9A25C0)
#define RPG_CLIENT_CAKERACE_CAKERACECATUI3DPERFORMANCEPREPAREDATA_GET_CATANIMDELAY_OFFSET UNITYSDK_OFFSET(0xC9A2580)
#define RPG_CLIENT_CAKERACE_CAKERACECATUI3DPERFORMANCEPREPAREDATA_GET_CATVIEW_OFFSET UNITYSDK_OFFSET(0xC9A2540)
#define RPG_CLIENT_CAKERACE_CAKERACECATUI3DPERFORMANCEPREPAREDATA_GET_RANK_OFFSET UNITYSDK_OFFSET(0xC9A25A0)
#define RPG_CLIENT_CAKERACE_CAKERACECATUI3DPERFORMANCEPREPAREDATA_GET_TALKBUBBLE_OFFSET UNITYSDK_OFFSET(0xC9A2560)
#define RPG_CLIENT_CAKERACE_CAKERACECATUI3DPERFORMANCEPREPAREDATA_SET_CATANIMDELAY_OFFSET UNITYSDK_OFFSET(0xC9A2590)
#define RPG_CLIENT_CAKERACE_CAKERACECATUI3DPERFORMANCEPREPAREDATA_SET_CATVIEW_OFFSET UNITYSDK_OFFSET(0xC9A2550)
#define RPG_CLIENT_CAKERACE_CAKERACECATUI3DPERFORMANCEPREPAREDATA_SET_RANK_OFFSET UNITYSDK_OFFSET(0xC9A25B0)
#define RPG_CLIENT_CAKERACE_CAKERACECATUI3DPERFORMANCEPREPAREDATA_SET_TALKBUBBLE_OFFSET UNITYSDK_OFFSET(0xC9A2570)
#define RPG_CLIENT_CAKERACE_CAKERACECATUI3DPERFORMANCEPREPAREDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC9A2660)

namespace RPG::Client::CakeRace
{
	inline static constexpr unsigned int CakeRaceCatUI3DPerformancePrepareData_TypeDefinitionIndex = 75991;

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

		::System::Void set_CatView(::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACECATUI3DPERFORMANCEPREPAREDATA_SET_CATVIEW_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::CakeRace::CakeRaceTalkBubbleMonoView* get_TalkBubble()
		{
			return ((::RPG::Client::LittleGame::CakeRace::CakeRaceTalkBubbleMonoView*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACECATUI3DPERFORMANCEPREPAREDATA_GET_TALKBUBBLE_OFFSET))(this);
		}

		::System::Void set_TalkBubble(::RPG::Client::LittleGame::CakeRace::CakeRaceTalkBubbleMonoView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceTalkBubbleMonoView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACECATUI3DPERFORMANCEPREPAREDATA_SET_TALKBUBBLE_OFFSET))(this, a1);
		}

		::System::Single get_CatAnimDelay()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACECATUI3DPERFORMANCEPREPAREDATA_GET_CATANIMDELAY_OFFSET))(this);
		}

		::System::Void set_CatAnimDelay(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACECATUI3DPERFORMANCEPREPAREDATA_SET_CATANIMDELAY_OFFSET))(this, a1);
		}

		::System::Int32 get_Rank()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACECATUI3DPERFORMANCEPREPAREDATA_GET_RANK_OFFSET))(this);
		}

		::System::Void set_Rank(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACECATUI3DPERFORMANCEPREPAREDATA_SET_RANK_OFFSET))(this, a1);
		}

		static ::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData* Create(::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* a1, ::RPG::Client::LittleGame::CakeRace::CakeRaceTalkBubbleMonoView* a2, ::System::Single a3, ::System::Int32 a4)
		{
			return ((::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData*(*)(::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView*, ::RPG::Client::LittleGame::CakeRace::CakeRaceTalkBubbleMonoView*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACECATUI3DPERFORMANCEPREPAREDATA_CREATE_OFFSET))(a1, a2, a3, a4);
		}
	};
}
