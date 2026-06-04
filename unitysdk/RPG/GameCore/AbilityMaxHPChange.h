#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_ABILITYMAXHPCHANGE_GETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xCC7B1B0)
#define RPG_GAMECORE_ABILITYMAXHPCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xCC7B160)
#define RPG_GAMECORE_ABILITYMAXHPCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCC7B110)
#define RPG_GAMECORE_ABILITYMAXHPCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xCC7B0F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityMaxHPChange_TypeDefinitionIndex = 52815;

	class AbilityMaxHPChange : public ::System::Object
	{
	public:
		::Struct_2_5909FD7779934CCA ChangeParams; // 0x10
		::System::UInt32 _EntityRuntimeID; // 0x118
		::RPG::GameCore::FixPoint _ChangeValue; // 0x120

		::System::Void _ctor(::System::UInt32 a1, ::RPG::GameCore::FixPoint a2, ::Struct_2_5909FD7779934CCA a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYMAXHPCHANGE__CTOR_OFFSET))(this, a1, a2, a3);
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
