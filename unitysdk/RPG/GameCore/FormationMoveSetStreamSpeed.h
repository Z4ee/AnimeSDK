#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FORMATIONMOVESETSTREAMSPEED_METHOD_3_0D200E57B862FF28_OFFSET UNITYSDK_OFFSET(0x1DCB3190)
#define RPG_GAMECORE_FORMATIONMOVESETSTREAMSPEED_METHOD_3_CDD81650CB7F5D9B_OFFSET UNITYSDK_OFFSET(0x1DCB3150)
#define RPG_GAMECORE_FORMATIONMOVESETSTREAMSPEED__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCB3180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FormationMoveSetStreamSpeed_TypeDefinitionIndex = 21013;

	class FormationMoveSetStreamSpeed : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 StreamId; // 0x18
		::System::Single Speed; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVESETSTREAMSPEED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CDD81650CB7F5D9B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FormationMoveSetStreamSpeed*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FormationMoveSetStreamSpeed*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVESETSTREAMSPEED_METHOD_3_CDD81650CB7F5D9B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0D200E57B862FF28(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FormationMoveSetStreamSpeed* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FormationMoveSetStreamSpeed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVESETSTREAMSPEED_METHOD_3_0D200E57B862FF28_OFFSET))(a1, a2);
		}
	};
}
