#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"

#define RPG_GAMECORE_ABILITYDIRTYHPCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x106C9C40)
#define RPG_GAMECORE_ABILITYDIRTYHPCHANGE_GETNEWDIRTYHPRATIO_OFFSET UNITYSDK_OFFSET(0x106C9C90)
#define RPG_GAMECORE_ABILITYDIRTYHPCHANGE_GETNEWDIRTYHPVALUE_OFFSET UNITYSDK_OFFSET(0x106C9CE0)
#define RPG_GAMECORE_ABILITYDIRTYHPCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x106C9BF0)
#define RPG_GAMECORE_ABILITYDIRTYHPCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0x106C9B80)
#define RPG_GAMECORE_ABILITYDIRTYHPCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x106C9D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityDirtyHPChange_TypeDefinitionIndex = 54051;

	class AbilityDirtyHPChange : public ::Class_1_BF7A075734D15E98
	{
	public:
		::Struct_2_5909FD7779934CCA ChangeParams; // 0x18
		::RPG::GameCore::FixPoint _NewRatio; // 0x120
		::RPG::GameCore::FixPoint _NewDirtyHp; // 0x128
		::System::UInt32 _EntityRuntimeID; // 0x130

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYDIRTYHPCHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityDirtyHPChange* Init(::System::UInt32 a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::RPG::GameCore::AbilityDirtyHPChange*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYDIRTYHPCHANGE_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYDIRTYHPCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYDIRTYHPCHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetNewDirtyHPRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYDIRTYHPCHANGE_GETNEWDIRTYHPRATIO_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetNewDirtyHPValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYDIRTYHPCHANGE_GETNEWDIRTYHPVALUE_OFFSET))(this);
		}
	};
}
