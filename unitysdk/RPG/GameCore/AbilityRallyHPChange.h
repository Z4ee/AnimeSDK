#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"

#define RPG_GAMECORE_ABILITYRALLYHPCHANGE_GETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0x106CE9B0)
#define RPG_GAMECORE_ABILITYRALLYHPCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x106CE960)
#define RPG_GAMECORE_ABILITYRALLYHPCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x106CE910)
#define RPG_GAMECORE_ABILITYRALLYHPCHANGE_GET_CHANGEPARAMS_OFFSET UNITYSDK_OFFSET(0x106CEA00)
#define RPG_GAMECORE_ABILITYRALLYHPCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0x106CE870)
#define RPG_GAMECORE_ABILITYRALLYHPCHANGE_SET_CHANGEPARAMS_OFFSET UNITYSDK_OFFSET(0x106CEA20)
#define RPG_GAMECORE_ABILITYRALLYHPCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x106CEA30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityRallyHPChange_TypeDefinitionIndex = 54052;

	class AbilityRallyHPChange : public ::Class_1_BF7A075734D15E98
	{
	public:
		::Struct_2_5909FD7779934CCA _ChangeParams_k__BackingField; // 0x18
		::System::UInt32 _EntityRuntimeID; // 0x120
		::RPG::GameCore::FixPoint _ChangeValue; // 0x128

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYRALLYHPCHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityRallyHPChange* Init(::System::UInt32 a1, ::RPG::GameCore::FixPoint a2, ::Struct_2_5909FD7779934CCA a3)
		{
			return ((::RPG::GameCore::AbilityRallyHPChange*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYRALLYHPCHANGE_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYRALLYHPCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYRALLYHPCHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetChangeValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYRALLYHPCHANGE_GETCHANGEVALUE_OFFSET))(this);
		}

		::Struct_2_5909FD7779934CCA get_ChangeParams()
		{
			return ((::Struct_2_5909FD7779934CCA(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYRALLYHPCHANGE_GET_CHANGEPARAMS_OFFSET))(this);
		}

		::System::Void set_ChangeParams(::Struct_2_5909FD7779934CCA a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYRALLYHPCHANGE_SET_CHANGEPARAMS_OFFSET))(this, a1);
		}
	};
}
