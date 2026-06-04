#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceMonoView.h"

namespace RPG::Client::LittleGame::CakeRace { class CakeRaceCellWrapperMonoView; }

#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECELLMONOVIEW_GET_WRAPPER_OFFSET UNITYSDK_OFFSET(0xBDC24F0)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECELLMONOVIEW_SETWRAPPER_OFFSET UNITYSDK_OFFSET(0xBDC2510)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECELLMONOVIEW_SET_WRAPPER_OFFSET UNITYSDK_OFFSET(0xBDC2500)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECELLMONOVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xBDC2560)

namespace RPG::Client::LittleGame::CakeRace
{
	inline static constexpr unsigned int CakeRaceCellMonoView_TypeDefinitionIndex = 72670;

	class CakeRaceCellMonoView : public ::RPG::Client::LittleGame::CakeRace::CakeRaceMonoView
	{
	public:
		::RPG::Client::LittleGame::CakeRace::CakeRaceCellWrapperMonoView* _Wrapper_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECELLMONOVIEW__CTOR_OFFSET))(this);
		}

		::RPG::Client::LittleGame::CakeRace::CakeRaceCellWrapperMonoView* get_Wrapper()
		{
			return ((::RPG::Client::LittleGame::CakeRace::CakeRaceCellWrapperMonoView*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECELLMONOVIEW_GET_WRAPPER_OFFSET))(this);
		}

		::System::Void set_Wrapper(::RPG::Client::LittleGame::CakeRace::CakeRaceCellWrapperMonoView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceCellWrapperMonoView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECELLMONOVIEW_SET_WRAPPER_OFFSET))(this, a1);
		}

		::System::Void SetWrapper(::RPG::Client::LittleGame::CakeRace::CakeRaceCellWrapperMonoView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceCellWrapperMonoView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECELLMONOVIEW_SETWRAPPER_OFFSET))(this, a1);
		}
	};
}
