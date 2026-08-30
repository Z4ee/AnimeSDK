#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVNPCRUNAWAYPLAYER_METHOD_3_B6EDC67BC2A2750F_OFFSET UNITYSDK_OFFSET(0x1D6BDA80)
#define RPG_GAMECORE_ADVNPCRUNAWAYPLAYER_METHOD_3_E3D4E842D53C31E3_OFFSET UNITYSDK_OFFSET(0x1D6BDB20)
#define RPG_GAMECORE_ADVNPCRUNAWAYPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BDAE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNPCRunAwayPlayer_TypeDefinitionIndex = 19747;

	class AdvNPCRunAwayPlayer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single Radius; // 0x18
		::System::Single MoveRadius; // 0x1C
		::System::Single Angle; // 0x20
		::System::UInt32 CandiatePoint; // 0x24
		::System::Single ConstC; // 0x28
		::System::Single Pow; // 0x2C
		::System::Single MaxRunAwayDistance; // 0x30
		::System::Single MaxRunAwayTime; // 0x34
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEnterRunAway; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnLeaveRunAway; // 0x40
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFinishRunAway; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCRUNAWAYPLAYER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B6EDC67BC2A2750F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNPCRunAwayPlayer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNPCRunAwayPlayer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCRUNAWAYPLAYER_METHOD_3_B6EDC67BC2A2750F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E3D4E842D53C31E3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNPCRunAwayPlayer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNPCRunAwayPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCRUNAWAYPLAYER_METHOD_3_E3D4E842D53C31E3_OFFSET))(a1, a2);
		}
	};
}
