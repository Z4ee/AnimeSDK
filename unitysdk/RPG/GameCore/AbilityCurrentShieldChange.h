#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"

#define RPG_GAMECORE_ABILITYCURRENTSHIELDCHANGE_CLEAR_OFFSET UNITYSDK_OFFSET(0xA7CC0F0)
#define RPG_GAMECORE_ABILITYCURRENTSHIELDCHANGE_GETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xA7CC230)
#define RPG_GAMECORE_ABILITYCURRENTSHIELDCHANGE_GETDISPLAYVALUE_OFFSET UNITYSDK_OFFSET(0xA7CC280)
#define RPG_GAMECORE_ABILITYCURRENTSHIELDCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA7CC190)
#define RPG_GAMECORE_ABILITYCURRENTSHIELDCHANGE_GETSHOWTEXT_OFFSET UNITYSDK_OFFSET(0xA7CC1E0)
#define RPG_GAMECORE_ABILITYCURRENTSHIELDCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA7CC140)
#define RPG_GAMECORE_ABILITYCURRENTSHIELDCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xA7CC030)
#define RPG_GAMECORE_ABILITYCURRENTSHIELDCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xA7CC2E0)
#define RPG_GAMECORE_ABILITYCURRENTSHIELDCHANGE___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA7CC2F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityCurrentShieldChange_TypeDefinitionIndex = 45475;

	class AbilityCurrentShieldChange : public ::Class_1_9988289E7F8AA214
	{
	public:
		::Struct_2_5909FD7779934CCA ChangeParams; // 0x18
		::RPG::GameCore::FixPoint _ChangeValue; // 0x148
		::System::Boolean _ShowText; // 0x150
		::System::UInt32 _SourceEntityRuntimeID; // 0x154

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSHIELDCHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityCurrentShieldChange* Init(::System::UInt32 nSourceRuntimeID, ::RPG::GameCore::FixPoint fChangeValue, ::System::Boolean ShowText, ::Struct_2_5909FD7779934CCA pChangeParams)
		{
			return ((::RPG::GameCore::AbilityCurrentShieldChange*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint, ::System::Boolean, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSHIELDCHANGE_INIT_OFFSET))(this, nSourceRuntimeID, fChangeValue, ShowText, pChangeParams);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSHIELDCHANGE_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSHIELDCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSHIELDCHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Boolean GetShowText()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSHIELDCHANGE_GETSHOWTEXT_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetChangeValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSHIELDCHANGE_GETCHANGEVALUE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetDisplayValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSHIELDCHANGE_GETDISPLAYVALUE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSHIELDCHANGE___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
