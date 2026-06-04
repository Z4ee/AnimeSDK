#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_18;
class Class_1_2C40AA4CADF0C7E8;
class Class_1_EF2D3B79941AF6F8;
namespace RPG::Client { class RogueFinishInfo; }

#define RPG_CLIENT_ROGUESEASONFINISHINFO_QUITROGUEMAP_OFFSET UNITYSDK_OFFSET(0xC7E45B0)
#define RPG_CLIENT_ROGUESEASONFINISHINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC7CE340)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueSeasonFinishInfo_TypeDefinitionIndex = 63093;

	class RogueSeasonFinishInfo : public ::System::Object
	{
	public:
		::Class_1_EF2D3B79941AF6F8* _SceneInfo; // 0x10
		::RPG::Client::RogueFinishInfo* RogueFinishInfo; // 0x18
		::Class_1_21DCD4640D389503_18* _LineupInfo; // 0x20
		::System::Boolean AlreadyFinish; // 0x28

		::System::Void _ctor(::Class_1_2C40AA4CADF0C7E8* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2C40AA4CADF0C7E8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESEASONFINISHINFO__CTOR_OFFSET))(this, a1);
		}

		::System::Void QuitRogueMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESEASONFINISHINFO_QUITROGUEMAP_OFFSET))(this);
		}
	};
}
