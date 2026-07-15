#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/PatrolMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ADVNPCMOVEALONGPATH_METHOD_3_8C7663B45BC9D2C6_OFFSET UNITYSDK_OFFSET(0x1BE25A90)
#define RPG_GAMECORE_ADVNPCMOVEALONGPATH_METHOD_3_ED7227A7FDA245BF_OFFSET UNITYSDK_OFFSET(0x1BE25A40)
#define RPG_GAMECORE_ADVNPCMOVEALONGPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE25A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNpcMoveAlongPath_TypeDefinitionIndex = 19549;

	class AdvNpcMoveAlongPath : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PatrolMode TaskMode; // 0x18
		::RPG::GameCore::CharacterMotionFlag DefaultMotionFlag; // 0x1C
		::System::Boolean StayOnWaypoint; // 0x20
		::System::Single StayOnWaypointDuration; // 0x24
		::RPG::GameCore::TaskConfig* OnWaypointTask; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::TaskConfig*>* PerWaypointTask; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CharacterMotionFlag>* OverrideMotionFlag; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCMOVEALONGPATH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_ED7227A7FDA245BF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNpcMoveAlongPath*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNpcMoveAlongPath*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCMOVEALONGPATH_METHOD_3_ED7227A7FDA245BF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8C7663B45BC9D2C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNpcMoveAlongPath* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNpcMoveAlongPath*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCMOVEALONGPATH_METHOD_3_8C7663B45BC9D2C6_OFFSET))(a1, a2);
		}
	};
}
