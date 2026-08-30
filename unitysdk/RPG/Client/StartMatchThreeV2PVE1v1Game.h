#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_STARTMATCHTHREEV2PVE1V1GAME_METHOD_3_1703938A48A95BEF_OFFSET UNITYSDK_OFFSET(0x1CD63950)
#define RPG_CLIENT_STARTMATCHTHREEV2PVE1V1GAME_METHOD_3_C2E53916756F2EF2_OFFSET UNITYSDK_OFFSET(0x1CD63910)
#define RPG_CLIENT_STARTMATCHTHREEV2PVE1V1GAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD63940)

namespace RPG::Client
{
	inline static constexpr unsigned int StartMatchThreeV2PVE1v1Game_TypeDefinitionIndex = 10240;

	class StartMatchThreeV2PVE1v1Game : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 levelID; // 0x18
		::System::UInt32 birdID; // 0x1C
		::System::UInt32 prop1ID; // 0x20
		::System::UInt32 prop1Level; // 0x24
		::System::UInt32 prop2ID; // 0x28
		::System::UInt32 prop2Level; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARTMATCHTHREEV2PVE1V1GAME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C2E53916756F2EF2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::StartMatchThreeV2PVE1v1Game*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::StartMatchThreeV2PVE1v1Game*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARTMATCHTHREEV2PVE1V1GAME_METHOD_3_C2E53916756F2EF2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1703938A48A95BEF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::StartMatchThreeV2PVE1v1Game* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::StartMatchThreeV2PVE1v1Game*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARTMATCHTHREEV2PVE1V1GAME_METHOD_3_1703938A48A95BEF_OFFSET))(a1, a2);
		}
	};
}
