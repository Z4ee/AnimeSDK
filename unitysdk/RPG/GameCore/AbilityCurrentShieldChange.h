#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"

#define RPG_GAMECORE_ABILITYCURRENTSHIELDCHANGE_CLEAR_OFFSET UNITYSDK_OFFSET(0xB50F2F0)
#define RPG_GAMECORE_ABILITYCURRENTSHIELDCHANGE_GETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xB50F430)
#define RPG_GAMECORE_ABILITYCURRENTSHIELDCHANGE_GETDISPLAYVALUE_OFFSET UNITYSDK_OFFSET(0xB50F480)
#define RPG_GAMECORE_ABILITYCURRENTSHIELDCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB50F390)
#define RPG_GAMECORE_ABILITYCURRENTSHIELDCHANGE_GETSHOWTEXT_OFFSET UNITYSDK_OFFSET(0xB50F3E0)
#define RPG_GAMECORE_ABILITYCURRENTSHIELDCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB50F340)
#define RPG_GAMECORE_ABILITYCURRENTSHIELDCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xB50F230)
#define RPG_GAMECORE_ABILITYCURRENTSHIELDCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xB50F4E0)
#define RPG_GAMECORE_ABILITYCURRENTSHIELDCHANGE___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xB50F4F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityCurrentShieldChange_TypeDefinitionIndex = 52125;

	class AbilityCurrentShieldChange : public ::Class_1_9988289E7F8AA214
	{
	public:
		::Struct_2_5909FD7779934CCA ChangeParams; // 0x18
		::RPG::GameCore::FixPoint _ChangeValue; // 0x148
		::System::UInt32 _SourceEntityRuntimeID; // 0x150
		::System::Boolean _ShowText; // 0x154

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
