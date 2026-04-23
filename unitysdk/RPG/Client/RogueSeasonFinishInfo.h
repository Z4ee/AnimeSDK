#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_03E9977238AE0677;
class Class_1_36E3880E987172D7_4;
class Class_1_BB4B99DE4C2501EC_2;
namespace RPG::Client { class RogueFinishInfo; }

#define RPG_CLIENT_ROGUESEASONFINISHINFO_QUITROGUEMAP_OFFSET UNITYSDK_OFFSET(0xB093B70)
#define RPG_CLIENT_ROGUESEASONFINISHINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB07E570)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueSeasonFinishInfo_TypeDefinitionIndex = 62160;

	class RogueSeasonFinishInfo : public ::System::Object
	{
	public:
		::Class_1_36E3880E987172D7_4* _LineupInfo; // 0x10
		::Class_1_BB4B99DE4C2501EC_2* _SceneInfo; // 0x18
		::RPG::Client::RogueFinishInfo* RogueFinishInfo; // 0x20
		::System::Boolean AlreadyFinish; // 0x28

		::System::Void _ctor(::Class_1_03E9977238AE0677* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_03E9977238AE0677*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESEASONFINISHINFO__CTOR_OFFSET))(this, rsp);
		}

		::System::Void QuitRogueMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESEASONFINISHINFO_QUITROGUEMAP_OFFSET))(this);
		}
	};
}
