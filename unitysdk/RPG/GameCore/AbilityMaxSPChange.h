#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"

#define RPG_GAMECORE_ABILITYMAXSPCHANGE_CLEAR_OFFSET UNITYSDK_OFFSET(0xCC7B2A0)
#define RPG_GAMECORE_ABILITYMAXSPCHANGE_GETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xCC7B390)
#define RPG_GAMECORE_ABILITYMAXSPCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xCC7B340)
#define RPG_GAMECORE_ABILITYMAXSPCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCC7B2F0)
#define RPG_GAMECORE_ABILITYMAXSPCHANGE_GET_CHANGEPARAMS_OFFSET UNITYSDK_OFFSET(0xCC7B3E0)
#define RPG_GAMECORE_ABILITYMAXSPCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xCC7B200)
#define RPG_GAMECORE_ABILITYMAXSPCHANGE_SET_CHANGEPARAMS_OFFSET UNITYSDK_OFFSET(0xCC7B400)
#define RPG_GAMECORE_ABILITYMAXSPCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xCC7B410)
#define RPG_GAMECORE_ABILITYMAXSPCHANGE___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xCC7B420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityMaxSPChange_TypeDefinitionIndex = 52812;

	class AbilityMaxSPChange : public ::Class_1_BF7A075734D15E98
	{
	public:
		::Struct_2_5909FD7779934CCA _ChangeParams_k__BackingField; // 0x18
		::System::UInt32 _EntityRuntimeID; // 0x120
		::RPG::GameCore::FixPoint _ChangeValue; // 0x128

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYMAXSPCHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityMaxSPChange* Init(::System::UInt32 a1, ::RPG::GameCore::FixPoint a2, ::Struct_2_5909FD7779934CCA a3)
		{
			return ((::RPG::GameCore::AbilityMaxSPChange*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYMAXSPCHANGE_INIT_OFFSET))(this, a1, a2, a3);
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

		::System::Void set_ChangeParams(::Struct_2_5909FD7779934CCA a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYMAXSPCHANGE_SET_CHANGEPARAMS_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYMAXSPCHANGE___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
