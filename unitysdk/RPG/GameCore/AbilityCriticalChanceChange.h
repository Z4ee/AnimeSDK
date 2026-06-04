#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"

#define RPG_GAMECORE_ABILITYCRITICALCHANCECHANGE_CLEAR_OFFSET UNITYSDK_OFFSET(0xCC75C70)
#define RPG_GAMECORE_ABILITYCRITICALCHANCECHANGE_GETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xCC75D60)
#define RPG_GAMECORE_ABILITYCRITICALCHANCECHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xCC75D10)
#define RPG_GAMECORE_ABILITYCRITICALCHANCECHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCC75CC0)
#define RPG_GAMECORE_ABILITYCRITICALCHANCECHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xCC75BD0)
#define RPG_GAMECORE_ABILITYCRITICALCHANCECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xCC75DB0)
#define RPG_GAMECORE_ABILITYCRITICALCHANCECHANGE___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xCC75DC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityCriticalChanceChange_TypeDefinitionIndex = 52817;

	class AbilityCriticalChanceChange : public ::Class_1_BF7A075734D15E98
	{
	public:
		::Struct_2_5909FD7779934CCA ChangeParams; // 0x18
		::RPG::GameCore::FixPoint _ChangeValue; // 0x120
		::System::UInt32 _EntityRuntimeID; // 0x128

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCRITICALCHANCECHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityCriticalChanceChange* Init(::System::UInt32 a1, ::RPG::GameCore::FixPoint a2, ::Struct_2_5909FD7779934CCA a3)
		{
			return ((::RPG::GameCore::AbilityCriticalChanceChange*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCRITICALCHANCECHANGE_INIT_OFFSET))(this, a1, a2, a3);
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
