#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"
#include "unitysdk/System/Decimal.h"

#define RPG_GAMECORE_ABILITYCURRENTHPCHANGE_GETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xB50EB20)
#define RPG_GAMECORE_ABILITYCURRENTHPCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB50EA80)
#define RPG_GAMECORE_ABILITYCURRENTHPCHANGE_GETMODIFYVALUEDECIMAL_OFFSET UNITYSDK_OFFSET(0xB50EDA0)
#define RPG_GAMECORE_ABILITYCURRENTHPCHANGE_GETNEGATIVEHPCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xB50EB70)
#define RPG_GAMECORE_ABILITYCURRENTHPCHANGE_GETORIGINMODIFYVALUEDECIMAL_OFFSET UNITYSDK_OFFSET(0xB50EC40)
#define RPG_GAMECORE_ABILITYCURRENTHPCHANGE_GETORIGINMODIFYVALUE_OFFSET UNITYSDK_OFFSET(0xB50EAD0)
#define RPG_GAMECORE_ABILITYCURRENTHPCHANGE_GETPOSITIVEHPCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xB50EBC0)
#define RPG_GAMECORE_ABILITYCURRENTHPCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB50EA30)
#define RPG_GAMECORE_ABILITYCURRENTHPCHANGE_GET_CHANGEPARAMS_OFFSET UNITYSDK_OFFSET(0xB50EEF0)
#define RPG_GAMECORE_ABILITYCURRENTHPCHANGE_GET_USEBIGCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xB50ED90)
#define RPG_GAMECORE_ABILITYCURRENTHPCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xB50E960)
#define RPG_GAMECORE_ABILITYCURRENTHPCHANGE_SET_CHANGEPARAMS_OFFSET UNITYSDK_OFFSET(0xB50EF10)
#define RPG_GAMECORE_ABILITYCURRENTHPCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xB50EF20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityCurrentHPChange_TypeDefinitionIndex = 52112;

	class AbilityCurrentHPChange : public ::Class_1_9988289E7F8AA214
	{
	public:
		::Struct_2_5909FD7779934CCA _ChangeParams_k__BackingField; // 0x18
		::RPG::GameCore::FixPoint _NegativeHPChangeValue; // 0x148
		::System::UInt32 _EntityRuntimeID; // 0x150
		::RPG::GameCore::FixPoint _ChangeValue; // 0x158
		::RPG::GameCore::FixPoint _OriginModifyValue; // 0x160

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTHPCHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityCurrentHPChange* Init(::System::UInt32 EntityRuntimeID, ::RPG::GameCore::FixPoint OriginModifyValue, ::RPG::GameCore::FixPoint ChangeValue, ::Struct_2_5909FD7779934CCA pChangeParams, ::RPG::GameCore::FixPoint negativeHPChange)
		{
			return ((::RPG::GameCore::AbilityCurrentHPChange*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::Struct_2_5909FD7779934CCA, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTHPCHANGE_INIT_OFFSET))(this, EntityRuntimeID, OriginModifyValue, ChangeValue, pChangeParams, negativeHPChange);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTHPCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTHPCHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetOriginModifyValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTHPCHANGE_GETORIGINMODIFYVALUE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetChangeValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTHPCHANGE_GETCHANGEVALUE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetNegativeHPChangeValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTHPCHANGE_GETNEGATIVEHPCHANGEVALUE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetPositiveHPChangeValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTHPCHANGE_GETPOSITIVEHPCHANGEVALUE_OFFSET))(this);
		}

		::System::Decimal GetOriginModifyValueDecimal()
		{
			return ((::System::Decimal(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTHPCHANGE_GETORIGINMODIFYVALUEDECIMAL_OFFSET))(this);
		}

		::System::Decimal GetModifyValueDecimal()
		{
			return ((::System::Decimal(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTHPCHANGE_GETMODIFYVALUEDECIMAL_OFFSET))(this);
		}

		::System::Boolean get_UseBigChangeValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTHPCHANGE_GET_USEBIGCHANGEVALUE_OFFSET))(this);
		}

		::Struct_2_5909FD7779934CCA get_ChangeParams()
		{
			return ((::Struct_2_5909FD7779934CCA(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTHPCHANGE_GET_CHANGEPARAMS_OFFSET))(this);
		}

		::System::Void set_ChangeParams(::Struct_2_5909FD7779934CCA value)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTHPCHANGE_SET_CHANGEPARAMS_OFFSET))(this, value);
		}
	};
}
