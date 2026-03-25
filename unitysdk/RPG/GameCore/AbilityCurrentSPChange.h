#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"

#define RPG_GAMECORE_ABILITYCURRENTSPCHANGE_CLEAR_OFFSET UNITYSDK_OFFSET(0xA7CBDF0)
#define RPG_GAMECORE_ABILITYCURRENTSPCHANGE_GETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xA7CBEE0)
#define RPG_GAMECORE_ABILITYCURRENTSPCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA7CBE90)
#define RPG_GAMECORE_ABILITYCURRENTSPCHANGE_GETRAWCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xA7CBF30)
#define RPG_GAMECORE_ABILITYCURRENTSPCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA7CBE40)
#define RPG_GAMECORE_ABILITYCURRENTSPCHANGE_GET_CHANGEPARAMS_OFFSET UNITYSDK_OFFSET(0xA7CBF80)
#define RPG_GAMECORE_ABILITYCURRENTSPCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xA7CBD30)
#define RPG_GAMECORE_ABILITYCURRENTSPCHANGE_SET_CHANGEPARAMS_OFFSET UNITYSDK_OFFSET(0xA7CBFA0)
#define RPG_GAMECORE_ABILITYCURRENTSPCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xA7CBFB0)
#define RPG_GAMECORE_ABILITYCURRENTSPCHANGE___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA7CBFC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityCurrentSPChange_TypeDefinitionIndex = 45464;

	class AbilityCurrentSPChange : public ::Class_1_9988289E7F8AA214
	{
	public:
		::Struct_2_5909FD7779934CCA _ChangeParams_k__BackingField; // 0x18
		::RPG::GameCore::FixPoint _RawChangeValue; // 0x148
		::RPG::GameCore::FixPoint _ChangeValue; // 0x150
		::System::UInt32 _EntityRuntimeID; // 0x158

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSPCHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityCurrentSPChange* Init(::System::UInt32 EntityRuntimeID, ::RPG::GameCore::FixPoint ChangeValue, ::RPG::GameCore::FixPoint RawChangeValue, ::Struct_2_5909FD7779934CCA pChangeParams)
		{
			return ((::RPG::GameCore::AbilityCurrentSPChange*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSPCHANGE_INIT_OFFSET))(this, EntityRuntimeID, ChangeValue, RawChangeValue, pChangeParams);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSPCHANGE_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSPCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSPCHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetChangeValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSPCHANGE_GETCHANGEVALUE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetRawChangeValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSPCHANGE_GETRAWCHANGEVALUE_OFFSET))(this);
		}

		::Struct_2_5909FD7779934CCA get_ChangeParams()
		{
			return ((::Struct_2_5909FD7779934CCA(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSPCHANGE_GET_CHANGEPARAMS_OFFSET))(this);
		}

		::System::Void set_ChangeParams(::Struct_2_5909FD7779934CCA value)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSPCHANGE_SET_CHANGEPARAMS_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSPCHANGE___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
