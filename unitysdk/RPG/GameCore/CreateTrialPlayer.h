#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CREATETRIALPLAYER_METHOD_3_37157B4A27469102_OFFSET UNITYSDK_OFFSET(0x18846870)
#define RPG_GAMECORE_CREATETRIALPLAYER_METHOD_3_4341A4D5C6C1145D_OFFSET UNITYSDK_OFFSET(0x18846800)
#define RPG_GAMECORE_CREATETRIALPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x18846840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreateTrialPlayer_TypeDefinitionIndex = 20444;

	class CreateTrialPlayer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATETRIALPLAYER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4341A4D5C6C1145D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateTrialPlayer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateTrialPlayer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATETRIALPLAYER_METHOD_3_4341A4D5C6C1145D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_37157B4A27469102(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateTrialPlayer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateTrialPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATETRIALPLAYER_METHOD_3_37157B4A27469102_OFFSET))(a1, a2);
		}
	};
}
