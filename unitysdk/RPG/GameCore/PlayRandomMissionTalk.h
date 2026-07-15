#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SimpleTalkListConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLAYRANDOMMISSIONTALK_METHOD_4_747B777F9B29D41A_OFFSET UNITYSDK_OFFSET(0x1BA067A0)
#define RPG_GAMECORE_PLAYRANDOMMISSIONTALK_METHOD_4_D4AC7F19D67FA34D_OFFSET UNITYSDK_OFFSET(0x1BA067E0)
#define RPG_GAMECORE_PLAYRANDOMMISSIONTALK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA067D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayRandomMissionTalk_TypeDefinitionIndex = 22604;

	class PlayRandomMissionTalk : public ::RPG::GameCore::SimpleTalkListConfig
	{
	public:
		::System::Single CD; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYRANDOMMISSIONTALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_747B777F9B29D41A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayRandomMissionTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayRandomMissionTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYRANDOMMISSIONTALK_METHOD_4_747B777F9B29D41A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D4AC7F19D67FA34D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayRandomMissionTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayRandomMissionTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYRANDOMMISSIONTALK_METHOD_4_D4AC7F19D67FA34D_OFFSET))(a1, a2);
		}
	};
}
