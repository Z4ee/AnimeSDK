#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PRELOADBATTLEEVENT_METHOD_3_AE8C7E590F95DC70_OFFSET UNITYSDK_OFFSET(0x1D7B6100)
#define RPG_GAMECORE_PRELOADBATTLEEVENT_METHOD_3_F154C3690F4AFF83_OFFSET UNITYSDK_OFFSET(0x1D7B6140)
#define RPG_GAMECORE_PRELOADBATTLEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B6130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PreloadBattleEvent_TypeDefinitionIndex = 22722;

	class PreloadBattleEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* BattleEvent; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADBATTLEEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AE8C7E590F95DC70(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PreloadBattleEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PreloadBattleEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADBATTLEEVENT_METHOD_3_AE8C7E590F95DC70_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F154C3690F4AFF83(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PreloadBattleEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PreloadBattleEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADBATTLEEVENT_METHOD_3_F154C3690F4AFF83_OFFSET))(a1, a2);
		}
	};
}
