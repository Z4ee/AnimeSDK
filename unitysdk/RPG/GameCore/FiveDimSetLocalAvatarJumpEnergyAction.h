#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
#include "unitysdk/RPG/GameCore/SetJumpEnergyType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSETLOCALAVATARJUMPENERGYACTION_METHOD_3_2B6C2B10C2E762A7_OFFSET UNITYSDK_OFFSET(0x17209DA0)
#define RPG_GAMECORE_FIVEDIMSETLOCALAVATARJUMPENERGYACTION_METHOD_3_63668647260277BE_OFFSET UNITYSDK_OFFSET(0x17209E10)
#define RPG_GAMECORE_FIVEDIMSETLOCALAVATARJUMPENERGYACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x17209DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetLocalAvatarJumpEnergyAction_TypeDefinitionIndex = 17198;

	class FiveDimSetLocalAvatarJumpEnergyAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::GameCore::SetJumpEnergyType SetType; // 0x10
		::System::Int32 Num; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETLOCALAVATARJUMPENERGYACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2B6C2B10C2E762A7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetLocalAvatarJumpEnergyAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetLocalAvatarJumpEnergyAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETLOCALAVATARJUMPENERGYACTION_METHOD_3_2B6C2B10C2E762A7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_63668647260277BE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetLocalAvatarJumpEnergyAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetLocalAvatarJumpEnergyAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETLOCALAVATARJUMPENERGYACTION_METHOD_3_63668647260277BE_OFFSET))(a1, a2);
		}
	};
}
