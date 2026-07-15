#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYEVENTCHARACTERTRIGGERFREESTYLE_METHOD_3_7BAAA3EA3C6F0ECA_OFFSET UNITYSDK_OFFSET(0x1C160240)
#define RPG_GAMECORE_TRAINPARTYEVENTCHARACTERTRIGGERFREESTYLE_METHOD_3_E5DF21DECC10AA33_OFFSET UNITYSDK_OFFSET(0x1C160200)
#define RPG_GAMECORE_TRAINPARTYEVENTCHARACTERTRIGGERFREESTYLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C160230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyEventCharacterTriggerFreeStyle_TypeDefinitionIndex = 21556;

	class TrainPartyEventCharacterTriggerFreeStyle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 MotionID; // 0x18
		::System::String* EntityUniqueName; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetAlias; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYEVENTCHARACTERTRIGGERFREESTYLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E5DF21DECC10AA33(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyEventCharacterTriggerFreeStyle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyEventCharacterTriggerFreeStyle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYEVENTCHARACTERTRIGGERFREESTYLE_METHOD_3_E5DF21DECC10AA33_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7BAAA3EA3C6F0ECA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyEventCharacterTriggerFreeStyle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyEventCharacterTriggerFreeStyle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYEVENTCHARACTERTRIGGERFREESTYLE_METHOD_3_7BAAA3EA3C6F0ECA_OFFSET))(a1, a2);
		}
	};
}
