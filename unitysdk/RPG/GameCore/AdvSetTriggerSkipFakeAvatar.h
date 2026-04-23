#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvSetTriggerSkipFakeAvatarType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVSETTRIGGERSKIPFAKEAVATAR_METHOD_3_17F58BF9A790CBDB_OFFSET UNITYSDK_OFFSET(0x18665330)
#define RPG_GAMECORE_ADVSETTRIGGERSKIPFAKEAVATAR_METHOD_3_E4E584405167C39D_OFFSET UNITYSDK_OFFSET(0x186651E0)
#define RPG_GAMECORE_ADVSETTRIGGERSKIPFAKEAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x186652A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSetTriggerSkipFakeAvatar_TypeDefinitionIndex = 19486;

	class AdvSetTriggerSkipFakeAvatar : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::AdvSetTriggerSkipFakeAvatarType TriggerType; // 0x20
		::System::Boolean IsSkip; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETTRIGGERSKIPFAKEAVATAR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E4E584405167C39D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetTriggerSkipFakeAvatar*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetTriggerSkipFakeAvatar*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETTRIGGERSKIPFAKEAVATAR_METHOD_3_E4E584405167C39D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_17F58BF9A790CBDB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetTriggerSkipFakeAvatar* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetTriggerSkipFakeAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETTRIGGERSKIPFAKEAVATAR_METHOD_3_17F58BF9A790CBDB_OFFSET))(a1, a2);
		}
	};
}
