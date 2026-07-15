#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/PatrolMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ADVNPCPATROL_METHOD_3_02EE9E976B64A2FA_OFFSET UNITYSDK_OFFSET(0x1BE22340)
#define RPG_GAMECORE_ADVNPCPATROL_METHOD_3_EE95B8F05C27FEBB_OFFSET UNITYSDK_OFFSET(0x1BE22390)
#define RPG_GAMECORE_ADVNPCPATROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE22380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNPCPatrol_TypeDefinitionIndex = 19204;

	class AdvNPCPatrol : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PatrolMode TaskMode; // 0x18
		::RPG::GameCore::CharacterMotionFlag DefaultMotionFlag; // 0x1C
		::System::Boolean StayOnWaypoint; // 0x20
		::System::Single StayOnWaypointDuration; // 0x24
		::System::String* StayOnWaypointDurationOverrideKey; // 0x28
		::RPG::GameCore::TaskConfig* OnWaypointTask; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::TaskConfig*>* PerWaypointTask; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CharacterMotionFlag>* OverrideMotionFlag; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCPATROL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_02EE9E976B64A2FA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNPCPatrol*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNPCPatrol*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCPATROL_METHOD_3_02EE9E976B64A2FA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EE95B8F05C27FEBB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNPCPatrol* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNPCPatrol*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCPATROL_METHOD_3_EE95B8F05C27FEBB_OFFSET))(a1, a2);
		}
	};
}
