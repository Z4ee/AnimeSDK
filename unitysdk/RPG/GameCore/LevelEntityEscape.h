#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELENTITYESCAPE_CLEAR_OFFSET UNITYSDK_OFFSET(0xA9887A0)
#define RPG_GAMECORE_LEVELENTITYESCAPE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA988840)
#define RPG_GAMECORE_LEVELENTITYESCAPE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA9887F0)
#define RPG_GAMECORE_LEVELENTITYESCAPE_INIT_OFFSET UNITYSDK_OFFSET(0xA988750)
#define RPG_GAMECORE_LEVELENTITYESCAPE__CTOR_OFFSET UNITYSDK_OFFSET(0xA988890)
#define RPG_GAMECORE_LEVELENTITYESCAPE___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA9888A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityEscape_TypeDefinitionIndex = 45665;

	class LevelEntityEscape : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* Target; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYESCAPE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEntityEscape* Init(::RPG::GameCore::GameEntity* pEntity)
		{
			return ((::RPG::GameCore::LevelEntityEscape*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYESCAPE_INIT_OFFSET))(this, pEntity);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYESCAPE_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYESCAPE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYESCAPE_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYESCAPE___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
