#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_8.h"
#include "unitysdk/System/Object.h"

class Class_1_9E75A6F37EAB58DE;
namespace RPG::Client { class BattleResulAutoDecomposeInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PVEBATTLERESULTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xDA1F230)

namespace RPG::Client
{
	inline static constexpr unsigned int PVEBattleResultInfo_TypeDefinitionIndex = 62955;

	class PVEBattleResultInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_9E75A6F37EAB58DE*>* MultipleDropList; // 0x10
		::System::Collections::Generic::List_1<::Class_1_9E75A6F37EAB58DE*>* MazeSkillDropList; // 0x18
		::RPG::Client::BattleResulAutoDecomposeInfo* DecomposeInfo; // 0x20
		::System::Collections::Generic::List_1<::Class_1_9E75A6F37EAB58DE*>* DropList; // 0x28
		::Enum_3_DB663931210BBC27_8 BattleEndStatus; // 0x30
		::System::UInt32 AvatarExpReward; // 0x34
		::System::UInt32 RetCode; // 0x38
		::System::UInt32 CurFinishChallenge; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PVEBATTLERESULTINFO__CTOR_OFFSET))(this);
		}
	};
}
