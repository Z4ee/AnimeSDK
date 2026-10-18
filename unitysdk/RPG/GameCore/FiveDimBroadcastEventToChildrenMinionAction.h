#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMBROADCASTEVENTTOCHILDRENMINIONACTION_METHOD_4_BAC794F6502E7BBB_OFFSET UNITYSDK_OFFSET(0x1D6B38F0)
#define RPG_GAMECORE_FIVEDIMBROADCASTEVENTTOCHILDRENMINIONACTION_METHOD_4_E68D9DCAE71B11BE_OFFSET UNITYSDK_OFFSET(0x1D6B3830)
#define RPG_GAMECORE_FIVEDIMBROADCASTEVENTTOCHILDRENMINIONACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B38E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimBroadcastEventToChildrenMinionAction_TypeDefinitionIndex = 18785;

	class FiveDimBroadcastEventToChildrenMinionAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::String* EventName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBROADCASTEVENTTOCHILDRENMINIONACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E68D9DCAE71B11BE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimBroadcastEventToChildrenMinionAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimBroadcastEventToChildrenMinionAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBROADCASTEVENTTOCHILDRENMINIONACTION_METHOD_4_E68D9DCAE71B11BE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BAC794F6502E7BBB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimBroadcastEventToChildrenMinionAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimBroadcastEventToChildrenMinionAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBROADCASTEVENTTOCHILDRENMINIONACTION_METHOD_4_BAC794F6502E7BBB_OFFSET))(a1, a2);
		}
	};
}
