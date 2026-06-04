#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_NOTIFYROUGEGOALFINISH_METHOD_3_152725694FFD150C_OFFSET UNITYSDK_OFFSET(0x199D0C90)
#define RPG_GAMECORE_NOTIFYROUGEGOALFINISH_METHOD_3_C51CC0E6743E99DD_OFFSET UNITYSDK_OFFSET(0x199D0C10)
#define RPG_GAMECORE_NOTIFYROUGEGOALFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x199D0C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NotifyRougeGoalFinish_TypeDefinitionIndex = 22372;

	class NotifyRougeGoalFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* RogueGoalID; // 0x18
		::System::Boolean Success; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTIFYROUGEGOALFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C51CC0E6743E99DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NotifyRougeGoalFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NotifyRougeGoalFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTIFYROUGEGOALFINISH_METHOD_3_C51CC0E6743E99DD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_152725694FFD150C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NotifyRougeGoalFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NotifyRougeGoalFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTIFYROUGEGOALFINISH_METHOD_3_152725694FFD150C_OFFSET))(a1, a2);
		}
	};
}
