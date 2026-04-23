#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceBaseBubbleMonoView.h"

namespace System { class String; }

#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEIMAGEBUBBLEMONOVIEW_METHOD_6_DA1BF2C227DC3D86_1_OFFSET UNITYSDK_OFFSET(0xA679860)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEIMAGEBUBBLEMONOVIEW_METHOD_6_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0xA679820)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEIMAGEBUBBLEMONOVIEW_SETICON_OFFSET UNITYSDK_OFFSET(0xA678EE0)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEIMAGEBUBBLEMONOVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xA677310)

namespace RPG::Client::LittleGame::CakeRace
{
	inline static constexpr unsigned int CakeRaceImageBubbleMonoView_TypeDefinitionIndex = 71638;

	class CakeRaceImageBubbleMonoView : public ::RPG::Client::LittleGame::CakeRace::CakeRaceBaseBubbleMonoView
	{
	public:
		::System::String* Field_6_0; // 0x28

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

		::System::String* Method_6_DA1BF2C227DC3D86_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEIMAGEBUBBLEMONOVIEW_METHOD_6_DA1BF2C227DC3D86_1_OFFSET))(this);
		}
	};
}
