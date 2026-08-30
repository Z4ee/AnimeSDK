#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceBaseBubbleMonoView.h"

namespace System { class String; }

#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEIMAGEBUBBLEMONOVIEW_METHOD_6_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0xD4AD2D0)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEIMAGEBUBBLEMONOVIEW_SETICON_OFFSET UNITYSDK_OFFSET(0xD4AD310)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEIMAGEBUBBLEMONOVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xD4AD360)

namespace RPG::Client::LittleGame::CakeRace
{
	inline static constexpr unsigned int CakeRaceImageBubbleMonoView_TypeDefinitionIndex = 77670;

	class CakeRaceImageBubbleMonoView : public ::RPG::Client::LittleGame::CakeRace::CakeRaceBaseBubbleMonoView
	{
	public:
		::System::String* FADILKPGCEM; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEIMAGEBUBBLEMONOVIEW__CTOR_OFFSET))(this);
		}

		::System::String* Method_6_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEIMAGEBUBBLEMONOVIEW_METHOD_6_DA1BF2C227DC3D86_OFFSET))(this);
		}

		::System::Void SetIcon(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEIMAGEBUBBLEMONOVIEW_SETICON_OFFSET))(this, a1);
		}
	};
}
