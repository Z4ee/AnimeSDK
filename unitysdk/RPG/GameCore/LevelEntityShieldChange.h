#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELENTITYSHIELDCHANGE_CLEAR_OFFSET UNITYSDK_OFFSET(0xB6D7420)
#define RPG_GAMECORE_LEVELENTITYSHIELDCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB6D74C0)
#define RPG_GAMECORE_LEVELENTITYSHIELDCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6D7470)
#define RPG_GAMECORE_LEVELENTITYSHIELDCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xB6D7380)
#define RPG_GAMECORE_LEVELENTITYSHIELDCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xB6D7510)
#define RPG_GAMECORE_LEVELENTITYSHIELDCHANGE___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xB6D7520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityShieldChange_TypeDefinitionIndex = 52385;

	class LevelEntityShieldChange : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* Target; // 0x18
		::Struct_2_5909FD7779934CCA ChangeParams; // 0x20
		::RPG::GameCore::FixPoint ChangeValue; // 0x150

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSHIELDCHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEntityShieldChange* Init(::RPG::GameCore::GameEntity* target, ::Struct_2_5909FD7779934CCA chgParams, ::RPG::GameCore::FixPoint chgVal)
		{
			return ((::RPG::GameCore::LevelEntityShieldChange*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Struct_2_5909FD7779934CCA, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSHIELDCHANGE_INIT_OFFSET))(this, target, chgParams, chgVal);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSHIELDCHANGE_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSHIELDCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSHIELDCHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSHIELDCHANGE___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
