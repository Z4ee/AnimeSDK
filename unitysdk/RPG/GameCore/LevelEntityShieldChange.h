#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELENTITYSHIELDCHANGE_CLEAR_OFFSET UNITYSDK_OFFSET(0xCE453B0)
#define RPG_GAMECORE_LEVELENTITYSHIELDCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xCE45450)
#define RPG_GAMECORE_LEVELENTITYSHIELDCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCE45400)
#define RPG_GAMECORE_LEVELENTITYSHIELDCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xCE45300)
#define RPG_GAMECORE_LEVELENTITYSHIELDCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xCE454A0)
#define RPG_GAMECORE_LEVELENTITYSHIELDCHANGE___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xCE454B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityShieldChange_TypeDefinitionIndex = 53082;

	class LevelEntityShieldChange : public ::Class_1_BF7A075734D15E98
	{
	public:
		::Struct_2_5909FD7779934CCA ChangeParams; // 0x18
		::RPG::GameCore::GameEntity* Target; // 0x120
		::RPG::GameCore::FixPoint ChangeValue; // 0x128

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSHIELDCHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEntityShieldChange* Init(::RPG::GameCore::GameEntity* a1, ::Struct_2_5909FD7779934CCA a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::RPG::GameCore::LevelEntityShieldChange*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Struct_2_5909FD7779934CCA, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSHIELDCHANGE_INIT_OFFSET))(this, a1, a2, a3);
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
