#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_16;
class Class_1_B5A048C7C3BC63B8;
class Class_1_F88C6D5EE35F8F30;
namespace RPG::Client { class RogueFinishInfo; }

#define RPG_CLIENT_ROGUESEASONFINISHINFO_QUITROGUEMAP_OFFSET UNITYSDK_OFFSET(0xDF19C70)
#define RPG_CLIENT_ROGUESEASONFINISHINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xDF02750)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueSeasonFinishInfo_TypeDefinitionIndex = 67456;

	class RogueSeasonFinishInfo : public ::System::Object
	{
	public:
		::Class_1_21DCD4640D389503_16* _LineupInfo; // 0x10
		::RPG::Client::RogueFinishInfo* RogueFinishInfo; // 0x18
		::Class_1_F88C6D5EE35F8F30* _SceneInfo; // 0x20
		::System::Boolean AlreadyFinish; // 0x28

		::System::Void _ctor(::Class_1_B5A048C7C3BC63B8* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B5A048C7C3BC63B8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESEASONFINISHINFO__CTOR_OFFSET))(this, a1);
		}

		::System::Void QuitRogueMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESEASONFINISHINFO_QUITROGUEMAP_OFFSET))(this);
		}
	};
}
