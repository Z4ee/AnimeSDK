#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FORMATIONMOVETOSTATION_METHOD_3_D95EEE923115B0B5_OFFSET UNITYSDK_OFFSET(0x1DCB3320)
#define RPG_GAMECORE_FORMATIONMOVETOSTATION_METHOD_3_EC2A7A2AEF910820_OFFSET UNITYSDK_OFFSET(0x1DCB32E0)
#define RPG_GAMECORE_FORMATIONMOVETOSTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCB3310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FormationMoveToStation_TypeDefinitionIndex = 21015;

	class FormationMoveToStation : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 StreamId; // 0x18
		::System::UInt32 GroupId; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVETOSTATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EC2A7A2AEF910820(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FormationMoveToStation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FormationMoveToStation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVETOSTATION_METHOD_3_EC2A7A2AEF910820_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D95EEE923115B0B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FormationMoveToStation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FormationMoveToStation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVETOSTATION_METHOD_3_D95EEE923115B0B5_OFFSET))(a1, a2);
		}
	};
}
