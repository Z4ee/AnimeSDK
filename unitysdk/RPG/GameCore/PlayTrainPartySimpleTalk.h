#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TrainPartySimpleTalkData; }

#define RPG_GAMECORE_PLAYTRAINPARTYSIMPLETALK_METHOD_3_4E023831E379E8E3_OFFSET UNITYSDK_OFFSET(0x174C7C40)
#define RPG_GAMECORE_PLAYTRAINPARTYSIMPLETALK_METHOD_3_E6FB23D8460CABB2_OFFSET UNITYSDK_OFFSET(0x174C7BC0)
#define RPG_GAMECORE_PLAYTRAINPARTYSIMPLETALK__CTOR_OFFSET UNITYSDK_OFFSET(0x174C7C10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayTrainPartySimpleTalk_TypeDefinitionIndex = 20558;

	class PlayTrainPartySimpleTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TrainPartySimpleTalkData*>* SimpleTalkList; // 0x18
		::System::Boolean IsAutoFinish; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYTRAINPARTYSIMPLETALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E6FB23D8460CABB2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayTrainPartySimpleTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayTrainPartySimpleTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYTRAINPARTYSIMPLETALK_METHOD_3_E6FB23D8460CABB2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4E023831E379E8E3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayTrainPartySimpleTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayTrainPartySimpleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYTRAINPARTYSIMPLETALK_METHOD_3_4E023831E379E8E3_OFFSET))(a1, a2);
		}
	};
}
