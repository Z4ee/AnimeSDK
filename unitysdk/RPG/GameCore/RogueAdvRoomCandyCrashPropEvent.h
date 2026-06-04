#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ROGUEADVROOMCANDYCRASHPROPEVENT_METHOD_3_1DF835CD75F8B5C1_OFFSET UNITYSDK_OFFSET(0x19B0C580)
#define RPG_GAMECORE_ROGUEADVROOMCANDYCRASHPROPEVENT_METHOD_3_8F3D8E7353489532_OFFSET UNITYSDK_OFFSET(0x19B0C500)
#define RPG_GAMECORE_ROGUEADVROOMCANDYCRASHPROPEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x19B0C550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAdvRoomCandyCrashPropEvent_TypeDefinitionIndex = 21058;

	class RogueAdvRoomCandyCrashPropEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* CurrentState; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVROOMCANDYCRASHPROPEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8F3D8E7353489532(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueAdvRoomCandyCrashPropEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueAdvRoomCandyCrashPropEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVROOMCANDYCRASHPROPEVENT_METHOD_3_8F3D8E7353489532_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1DF835CD75F8B5C1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueAdvRoomCandyCrashPropEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueAdvRoomCandyCrashPropEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVROOMCANDYCRASHPROPEVENT_METHOD_3_1DF835CD75F8B5C1_OFFSET))(a1, a2);
		}
	};
}
