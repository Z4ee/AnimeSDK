#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DebugLogLevel.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMDEBUGLOGEVENTACTION_METHOD_3_75066E1564E1EF76_OFFSET UNITYSDK_OFFSET(0x171EEC80)
#define RPG_GAMECORE_FIVEDIMDEBUGLOGEVENTACTION_METHOD_3_86974953F8CF8FE3_OFFSET UNITYSDK_OFFSET(0x171E6B60)
#define RPG_GAMECORE_FIVEDIMDEBUGLOGEVENTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x171E6B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimDebugLogEventAction_TypeDefinitionIndex = 17121;

	class FiveDimDebugLogEventAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::GameCore::DebugLogLevel Level; // 0x10
		::System::String* Message; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDEBUGLOGEVENTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_75066E1564E1EF76(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDebugLogEventAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDebugLogEventAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDEBUGLOGEVENTACTION_METHOD_3_75066E1564E1EF76_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_86974953F8CF8FE3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDebugLogEventAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDebugLogEventAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDEBUGLOGEVENTACTION_METHOD_3_86974953F8CF8FE3_OFFSET))(a1, a2);
		}
	};
}
