#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"

#define RPG_GAMECORE_ABILITYMAXSPCHANGE_CLEAR_OFFSET UNITYSDK_OFFSET(0xB515AE0)
#define RPG_GAMECORE_ABILITYMAXSPCHANGE_GETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xB515BD0)
#define RPG_GAMECORE_ABILITYMAXSPCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB515B80)
#define RPG_GAMECORE_ABILITYMAXSPCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB515B30)
#define RPG_GAMECORE_ABILITYMAXSPCHANGE_GET_CHANGEPARAMS_OFFSET UNITYSDK_OFFSET(0xB515C20)
#define RPG_GAMECORE_ABILITYMAXSPCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xB515A40)
#define RPG_GAMECORE_ABILITYMAXSPCHANGE_SET_CHANGEPARAMS_OFFSET UNITYSDK_OFFSET(0xB515C40)
#define RPG_GAMECORE_ABILITYMAXSPCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xB515C50)
#define RPG_GAMECORE_ABILITYMAXSPCHANGE___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xB515C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityMaxSPChange_TypeDefinitionIndex = 52115;

	class AbilityMaxSPChange : public ::Class_1_9988289E7F8AA214
	{
	public:
		::Struct_2_5909FD7779934CCA _ChangeParams_k__BackingField; // 0x18
		::System::UInt32 _EntityRuntimeID; // 0x148
		::RPG::GameCore::FixPoint _ChangeValue; // 0x150

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYMAXSPCHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityMaxSPChange* Init(::System::UInt32 EntityRuntimeID, ::RPG::GameCore::FixPoint ChangeValue, ::Struct_2_5909FD7779934CCA pChangeParams)
		{
			return ((::RPG::GameCore::AbilityMaxSPChange*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYMAXSPCHANGE_INIT_OFFSET))(this, EntityRuntimeID, ChangeValue, pChangeParams);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYMAXSPCHANGE_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYMAXSPCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYMAXSPCHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetChangeValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYMAXSPCHANGE_GETCHANGEVALUE_OFFSET))(this);
		}

		::Struct_2_5909FD7779934CCA get_ChangeParams()
		{
			return ((::Struct_2_5909FD7779934CCA(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYMAXSPCHANGE_GET_CHANGEPARAMS_OFFSET))(this);
		}

		::System::Void set_ChangeParams(::Struct_2_5909FD7779934CCA value)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYMAXSPCHANGE_SET_CHANGEPARAMS_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYMAXSPCHANGE___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
