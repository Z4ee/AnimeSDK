#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceMonoView.h"

namespace RPG::Client::LittleGame::CakeRace { class CakeRaceCellMonoView; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECELLWRAPPERMONOVIEW_GET_ANIMATION_OFFSET UNITYSDK_OFFSET(0x1C4C92E0)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECELLWRAPPERMONOVIEW_GET_CELLVIEW_OFFSET UNITYSDK_OFFSET(0x1C4C9340)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECELLWRAPPERMONOVIEW_LOADCELLVIEW_OFFSET UNITYSDK_OFFSET(0x1C4C9780)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECELLWRAPPERMONOVIEW_PLAYAPPEARANIMATION_OFFSET UNITYSDK_OFFSET(0x1C4C9360)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECELLWRAPPERMONOVIEW_PLAYDISAPPEARANIMATION_OFFSET UNITYSDK_OFFSET(0x1C4C9490)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECELLWRAPPERMONOVIEW_RELEASECELLVIEW_OFFSET UNITYSDK_OFFSET(0x1C4C9A40)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECELLWRAPPERMONOVIEW_RELEASE_OFFSET UNITYSDK_OFFSET(0x1C4C99E0)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECELLWRAPPERMONOVIEW_SET_CELLVIEW_OFFSET UNITYSDK_OFFSET(0x1C4C9350)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECELLWRAPPERMONOVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4C9B90)

namespace RPG::Client::LittleGame::CakeRace
{
	inline static constexpr unsigned int CakeRaceCellWrapperMonoView_TypeDefinitionIndex = 77680;

	class CakeRaceCellWrapperMonoView : public ::RPG::Client::LittleGame::CakeRace::CakeRaceMonoView
	{
	public:
		// static const ::System::String* MNNINLHJEIO; // 0x0
		// static const ::System::String* EOAIHMCHCCD; // 0x0
		::UnityEngine::Transform* CellRoot; // 0x40
		::UnityEngine::Transform* SurfaceRoot; // 0x48
		::RPG::Client::LittleGame::CakeRace::CakeRaceCellMonoView* _CellView_k__BackingField; // 0x50
		::System::Boolean GLBFFOGHMGL; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECELLWRAPPERMONOVIEW__CTOR_OFFSET))(this);
		}

		::UnityEngine::Animation* get_Animation()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECELLWRAPPERMONOVIEW_GET_ANIMATION_OFFSET))(this);
		}

		::RPG::Client::LittleGame::CakeRace::CakeRaceCellMonoView* get_CellView()
		{
			return ((::RPG::Client::LittleGame::CakeRace::CakeRaceCellMonoView*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECELLWRAPPERMONOVIEW_GET_CELLVIEW_OFFSET))(this);
		}

		::System::Void set_CellView(::RPG::Client::LittleGame::CakeRace::CakeRaceCellMonoView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceCellMonoView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECELLWRAPPERMONOVIEW_SET_CELLVIEW_OFFSET))(this, a1);
		}

		::System::Void PlayAppearAnimation(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECELLWRAPPERMONOVIEW_PLAYAPPEARANIMATION_OFFSET))(this, a1);
		}

		::System::Void PlayDisappearAnimation(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECELLWRAPPERMONOVIEW_PLAYDISAPPEARANIMATION_OFFSET))(this, a1);
		}

		::System::Void LoadCellView(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECELLWRAPPERMONOVIEW_LOADCELLVIEW_OFFSET))(this, a1);
		}

		::System::Void Release(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECELLWRAPPERMONOVIEW_RELEASE_OFFSET))(this, a1);
		}

		::System::Void ReleaseCellView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECELLWRAPPERMONOVIEW_RELEASECELLVIEW_OFFSET))(this);
		}
	};
}
