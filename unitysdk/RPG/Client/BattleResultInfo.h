#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_1.h"
#include "unitysdk/System/Object.h"

class Class_1_9E75A6F37EAB58DE;
namespace RPG::Client { class BattleResulAutoDecomposeInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BATTLERESULTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9E66760)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleResultInfo_TypeDefinitionIndex = 57921;

	class BattleResultInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_9E75A6F37EAB58DE*>* DropItems; // 0x10
		::System::Collections::Generic::List_1<::Class_1_9E75A6F37EAB58DE*>* MultipleDropItems; // 0x18
		::RPG::Client::BattleResulAutoDecomposeInfo* DecomposeInfo; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* ScoringItems; // 0x28
		::System::Collections::Generic::List_1<::Class_1_9E75A6F37EAB58DE*>* MazeSkillDropItems; // 0x30
		::System::UInt32 AddAvatarExp; // 0x38
		::Enum_3_71AA90D596A09AC8_1 ModuleType; // 0x3C
		::System::UInt32 AddPlayerExp; // 0x40
		::System::UInt32 MultipleAddAvatarExp; // 0x44
		::System::UInt32 TotalScoring; // 0x48
		::System::UInt32 MultipleAddPlayerExp; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTINFO__CTOR_OFFSET))(this);
		}
	};
}
