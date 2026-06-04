#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"

#define RPG_GAMECORE_ABILITYCURRENTHPCHANGE_GETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xCC75FE0)
#define RPG_GAMECORE_ABILITYCURRENTHPCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xCC75F40)
#define RPG_GAMECORE_ABILITYCURRENTHPCHANGE_GETNEGATIVEHPCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xCC76030)
#define RPG_GAMECORE_ABILITYCURRENTHPCHANGE_GETORIGINMODIFYVALUE_OFFSET UNITYSDK_OFFSET(0xCC75F90)
#define RPG_GAMECORE_ABILITYCURRENTHPCHANGE_GETPOSITIVEHPCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xCC76080)
#define RPG_GAMECORE_ABILITYCURRENTHPCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCC75EF0)
#define RPG_GAMECORE_ABILITYCURRENTHPCHANGE_GET_CHANGEPARAMS_OFFSET UNITYSDK_OFFSET(0xCC760D0)
#define RPG_GAMECORE_ABILITYCURRENTHPCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xCC75E20)
#define RPG_GAMECORE_ABILITYCURRENTHPCHANGE_SET_CHANGEPARAMS_OFFSET UNITYSDK_OFFSET(0xCC760F0)
#define RPG_GAMECORE_ABILITYCURRENTHPCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xCC76100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityCurrentHPChange_TypeDefinitionIndex = 52809;

	class AbilityCurrentHPChange : public ::Class_1_BF7A075734D15E98
	{
	public:
		::Struct_2_5909FD7779934CCA _ChangeParams_k__BackingField; // 0x18
		::RPG::GameCore::FixPoint _OriginModifyValue; // 0x120
		::RPG::GameCore::FixPoint _NegativeHPChangeValue; // 0x128
		::System::UInt32 _EntityRuntimeID; // 0x130
		::RPG::GameCore::FixPoint _ChangeValue; // 0x138

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTHPCHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityCurrentHPChange* Init(::System::UInt32 a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::Struct_2_5909FD7779934CCA a4, ::RPG::GameCore::FixPoint a5)
		{
			return ((::RPG::GameCore::AbilityCurrentHPChange*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::Struct_2_5909FD7779934CCA, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTHPCHANGE_INIT_OFFSET))(this, a1, a2, a3, a4, a5);
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

		::Struct_2_5909FD7779934CCA get_ChangeParams()
		{
			return ((::Struct_2_5909FD7779934CCA(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTHPCHANGE_GET_CHANGEPARAMS_OFFSET))(this);
		}

		::System::Void set_ChangeParams(::Struct_2_5909FD7779934CCA a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTHPCHANGE_SET_CHANGEPARAMS_OFFSET))(this, a1);
		}
	};
}
