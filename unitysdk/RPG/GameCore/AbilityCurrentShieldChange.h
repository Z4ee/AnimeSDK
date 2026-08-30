#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"

#define RPG_GAMECORE_ABILITYCURRENTSHIELDCHANGE_CLEAR_OFFSET UNITYSDK_OFFSET(0xE46D050)
#define RPG_GAMECORE_ABILITYCURRENTSHIELDCHANGE_GETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xE46D190)
#define RPG_GAMECORE_ABILITYCURRENTSHIELDCHANGE_GETDISPLAYVALUE_OFFSET UNITYSDK_OFFSET(0xE46D1E0)
#define RPG_GAMECORE_ABILITYCURRENTSHIELDCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE46D0F0)
#define RPG_GAMECORE_ABILITYCURRENTSHIELDCHANGE_GETSHOWTEXT_OFFSET UNITYSDK_OFFSET(0xE46D140)
#define RPG_GAMECORE_ABILITYCURRENTSHIELDCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE46D0A0)
#define RPG_GAMECORE_ABILITYCURRENTSHIELDCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xE46CF90)
#define RPG_GAMECORE_ABILITYCURRENTSHIELDCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xE46D240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityCurrentShieldChange_TypeDefinitionIndex = 56755;

	class AbilityCurrentShieldChange : public ::Class_1_BF7A075734D15E98
	{
	public:
		::Struct_2_5909FD7779934CCA ChangeParams; // 0x18
		::RPG::GameCore::FixPoint _ChangeValue; // 0x120
		::System::Boolean _ShowText; // 0x128
		::System::UInt32 _SourceEntityRuntimeID; // 0x12C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSHIELDCHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityCurrentShieldChange* Init(::System::UInt32 a1, ::RPG::GameCore::FixPoint a2, ::System::Boolean a3, ::Struct_2_5909FD7779934CCA a4)
		{
			return ((::RPG::GameCore::AbilityCurrentShieldChange*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint, ::System::Boolean, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSHIELDCHANGE_INIT_OFFSET))(this, a1, a2, a3, a4);
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
	};
}
