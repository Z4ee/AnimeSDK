#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TrainPartySimpleTalkData; }

#define RPG_GAMECORE_PLAYTRAINPARTYSIMPLETALK_METHOD_3_002E5480C279B869_OFFSET UNITYSDK_OFFSET(0x1BA08780)
#define RPG_GAMECORE_PLAYTRAINPARTYSIMPLETALK_METHOD_3_49D97B453AC6A5D8_OFFSET UNITYSDK_OFFSET(0x1BA08740)
#define RPG_GAMECORE_PLAYTRAINPARTYSIMPLETALK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA08770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayTrainPartySimpleTalk_TypeDefinitionIndex = 21550;

	class PlayTrainPartySimpleTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TrainPartySimpleTalkData*>* SimpleTalkList; // 0x18
		::System::Boolean IsAutoFinish; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYTRAINPARTYSIMPLETALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_49D97B453AC6A5D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayTrainPartySimpleTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayTrainPartySimpleTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYTRAINPARTYSIMPLETALK_METHOD_3_49D97B453AC6A5D8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_002E5480C279B869(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayTrainPartySimpleTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayTrainPartySimpleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYTRAINPARTYSIMPLETALK_METHOD_3_002E5480C279B869_OFFSET))(a1, a2);
		}
	};
}
