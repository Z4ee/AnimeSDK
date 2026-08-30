#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMBROADCASTEVENTTOCHILDRENMINIONACTION_METHOD_3_272878EEB1D52D03_OFFSET UNITYSDK_OFFSET(0x1D0A48A0)
#define RPG_GAMECORE_FIVEDIMBROADCASTEVENTTOCHILDRENMINIONACTION_METHOD_3_761B57711EA14D86_OFFSET UNITYSDK_OFFSET(0x1D0A4960)
#define RPG_GAMECORE_FIVEDIMBROADCASTEVENTTOCHILDRENMINIONACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0A4950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimBroadcastEventToChildrenMinionAction_TypeDefinitionIndex = 18575;

	class FiveDimBroadcastEventToChildrenMinionAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::String* EventName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBROADCASTEVENTTOCHILDRENMINIONACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_272878EEB1D52D03(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimBroadcastEventToChildrenMinionAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimBroadcastEventToChildrenMinionAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBROADCASTEVENTTOCHILDRENMINIONACTION_METHOD_3_272878EEB1D52D03_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_761B57711EA14D86(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimBroadcastEventToChildrenMinionAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimBroadcastEventToChildrenMinionAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBROADCASTEVENTTOCHILDRENMINIONACTION_METHOD_3_761B57711EA14D86_OFFSET))(a1, a2);
		}
	};
}
