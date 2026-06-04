#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"

#define RPG_GAMECORE_ABILITYCURRENTSPCHANGE_CLEAR_OFFSET UNITYSDK_OFFSET(0xCC761D0)
#define RPG_GAMECORE_ABILITYCURRENTSPCHANGE_GETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xCC762C0)
#define RPG_GAMECORE_ABILITYCURRENTSPCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xCC76270)
#define RPG_GAMECORE_ABILITYCURRENTSPCHANGE_GETRAWCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xCC76310)
#define RPG_GAMECORE_ABILITYCURRENTSPCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCC76220)
#define RPG_GAMECORE_ABILITYCURRENTSPCHANGE_GET_CHANGEPARAMS_OFFSET UNITYSDK_OFFSET(0xCC76360)
#define RPG_GAMECORE_ABILITYCURRENTSPCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xCC76110)
#define RPG_GAMECORE_ABILITYCURRENTSPCHANGE_SET_CHANGEPARAMS_OFFSET UNITYSDK_OFFSET(0xCC76380)
#define RPG_GAMECORE_ABILITYCURRENTSPCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xCC76390)
#define RPG_GAMECORE_ABILITYCURRENTSPCHANGE___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xCC763A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityCurrentSPChange_TypeDefinitionIndex = 52811;

	class AbilityCurrentSPChange : public ::Class_1_BF7A075734D15E98
	{
	public:
		::Struct_2_5909FD7779934CCA _ChangeParams_k__BackingField; // 0x18
		::RPG::GameCore::FixPoint _RawChangeValue; // 0x120
		::RPG::GameCore::FixPoint _ChangeValue; // 0x128
		::System::UInt32 _EntityRuntimeID; // 0x130

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSPCHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityCurrentSPChange* Init(::System::UInt32 a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::Struct_2_5909FD7779934CCA a4)
		{
			return ((::RPG::GameCore::AbilityCurrentSPChange*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSPCHANGE_INIT_OFFSET))(this, a1, a2, a3, a4);
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

		::System::Void set_ChangeParams(::Struct_2_5909FD7779934CCA a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSPCHANGE_SET_CHANGEPARAMS_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSPCHANGE___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
