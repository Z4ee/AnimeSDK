#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"

#define RPG_GAMECORE_ABILITYCRITICALCHANCECHANGE_CLEAR_OFFSET UNITYSDK_OFFSET(0xA7CB5A0)
#define RPG_GAMECORE_ABILITYCRITICALCHANCECHANGE_GETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xA7CB690)
#define RPG_GAMECORE_ABILITYCRITICALCHANCECHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA7CB640)
#define RPG_GAMECORE_ABILITYCRITICALCHANCECHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA7CB5F0)
#define RPG_GAMECORE_ABILITYCRITICALCHANCECHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xA7CB500)
#define RPG_GAMECORE_ABILITYCRITICALCHANCECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xA7CB6E0)
#define RPG_GAMECORE_ABILITYCRITICALCHANCECHANGE___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA7CB6F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityCriticalChanceChange_TypeDefinitionIndex = 45470;

	class AbilityCriticalChanceChange : public ::Class_1_9988289E7F8AA214
	{
	public:
		::Struct_2_5909FD7779934CCA ChangeParams; // 0x18
		::RPG::GameCore::FixPoint _ChangeValue; // 0x148
		::System::UInt32 _EntityRuntimeID; // 0x150

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCRITICALCHANCECHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityCriticalChanceChange* Init(::System::UInt32 EntityRuntimeID, ::RPG::GameCore::FixPoint ChangeValue, ::Struct_2_5909FD7779934CCA pChangeParams)
		{
			return ((::RPG::GameCore::AbilityCriticalChanceChange*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCRITICALCHANCECHANGE_INIT_OFFSET))(this, EntityRuntimeID, ChangeValue, pChangeParams);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCRITICALCHANCECHANGE_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCRITICALCHANCECHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCRITICALCHANCECHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetChangeValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCRITICALCHANCECHANGE_GETCHANGEVALUE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCRITICALCHANCECHANGE___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
