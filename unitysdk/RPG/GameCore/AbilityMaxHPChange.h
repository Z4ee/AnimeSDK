#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_ABILITYMAXHPCHANGE_GETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xA7D24D0)
#define RPG_GAMECORE_ABILITYMAXHPCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA7D2480)
#define RPG_GAMECORE_ABILITYMAXHPCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA7D2430)
#define RPG_GAMECORE_ABILITYMAXHPCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xA7D2410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityMaxHPChange_TypeDefinitionIndex = 45468;

	class AbilityMaxHPChange : public ::System::Object
	{
	public:
		::Struct_2_5909FD7779934CCA ChangeParams; // 0x10
		::RPG::GameCore::FixPoint _ChangeValue; // 0x140
		::System::UInt32 _EntityRuntimeID; // 0x148

		::System::Void _ctor(::System::UInt32 EntityRuntimeID, ::RPG::GameCore::FixPoint ChangeValue, ::Struct_2_5909FD7779934CCA pChangeParams)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYMAXHPCHANGE__CTOR_OFFSET))(this, EntityRuntimeID, ChangeValue, pChangeParams);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYMAXHPCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYMAXHPCHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetChangeValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYMAXHPCHANGE_GETCHANGEVALUE_OFFSET))(this);
		}
	};
}
