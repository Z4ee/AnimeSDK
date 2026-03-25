#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_14E02E1F6D70E487_1;
class Class_1_14E02E1F6D70E487_2;
class Class_1_93A7E4B1B0A13786;
namespace RPG::Client { class RogueFinishInfo; }

#define RPG_CLIENT_ROGUESEASONFINISHINFO_QUITROGUEMAP_OFFSET UNITYSDK_OFFSET(0xA35D0D0)
#define RPG_CLIENT_ROGUESEASONFINISHINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA347500)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueSeasonFinishInfo_TypeDefinitionIndex = 54972;

	class RogueSeasonFinishInfo : public ::System::Object
	{
	public:
		::RPG::Client::RogueFinishInfo* RogueFinishInfo; // 0x10
		::Class_1_14E02E1F6D70E487_1* _SceneInfo; // 0x18
		::Class_1_14E02E1F6D70E487_2* _LineupInfo; // 0x20
		::System::Boolean AlreadyFinish; // 0x28

		::System::Void _ctor(::Class_1_93A7E4B1B0A13786* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_93A7E4B1B0A13786*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESEASONFINISHINFO__CTOR_OFFSET))(this, rsp);
		}

		::System::Void QuitRogueMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESEASONFINISHINFO_QUITROGUEMAP_OFFSET))(this);
		}
	};
}
