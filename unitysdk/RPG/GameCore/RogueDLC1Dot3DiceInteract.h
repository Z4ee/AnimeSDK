#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TriggerEffect; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUEDLC1DOT3DICEINTERACT_METHOD_3_45C5446C231A04B4_OFFSET UNITYSDK_OFFSET(0x18CFD3E0)
#define RPG_GAMECORE_ROGUEDLC1DOT3DICEINTERACT_METHOD_3_600AE7EC81F5C07C_OFFSET UNITYSDK_OFFSET(0x18CFD360)
#define RPG_GAMECORE_ROGUEDLC1DOT3DICEINTERACT__CTOR_OFFSET UNITYSDK_OFFSET(0x18CFD3B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLC1Dot3DiceInteract_TypeDefinitionIndex = 21146;

	class RogueDLC1Dot3DiceInteract : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* AreaName; // 0x18
		::System::String* AnchorName; // 0x20
		::RPG::GameCore::DynamicString* LevelAreaCameraKey; // 0x28
		::Il2CppArray<::System::String*>* AttachPoints; // 0x30
		::RPG::GameCore::TriggerEffect* Dice; // 0x38
		::RPG::GameCore::TargetEvaluator* DiceFollowEntity; // 0x40
		::RPG::GameCore::DynamicString* CustomString; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3DICEINTERACT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_600AE7EC81F5C07C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDLC1Dot3DiceInteract*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLC1Dot3DiceInteract*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3DICEINTERACT_METHOD_3_600AE7EC81F5C07C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_45C5446C231A04B4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDLC1Dot3DiceInteract* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLC1Dot3DiceInteract*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3DICEINTERACT_METHOD_3_45C5446C231A04B4_OFFSET))(a1, a2);
		}
	};
}
