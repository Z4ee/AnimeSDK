#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
#include "unitysdk/RPG/GameCore/SetJumpEnergyType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSETLOCALAVATARJUMPENERGYACTION_METHOD_3_B2A16CF9B7B4B712_OFFSET UNITYSDK_OFFSET(0x1D879020)
#define RPG_GAMECORE_FIVEDIMSETLOCALAVATARJUMPENERGYACTION_METHOD_3_D05CB088EE199B05_OFFSET UNITYSDK_OFFSET(0x1D879060)
#define RPG_GAMECORE_FIVEDIMSETLOCALAVATARJUMPENERGYACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D879050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetLocalAvatarJumpEnergyAction_TypeDefinitionIndex = 18527;

	class FiveDimSetLocalAvatarJumpEnergyAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::GameCore::SetJumpEnergyType SetType; // 0x10
		::System::Int32 Num; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETLOCALAVATARJUMPENERGYACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B2A16CF9B7B4B712(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetLocalAvatarJumpEnergyAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetLocalAvatarJumpEnergyAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETLOCALAVATARJUMPENERGYACTION_METHOD_3_B2A16CF9B7B4B712_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D05CB088EE199B05(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetLocalAvatarJumpEnergyAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetLocalAvatarJumpEnergyAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETLOCALAVATARJUMPENERGYACTION_METHOD_3_D05CB088EE199B05_OFFSET))(a1, a2);
		}
	};
}
