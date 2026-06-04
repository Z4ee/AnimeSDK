#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELENTITYESCAPE_CLEAR_OFFSET UNITYSDK_OFFSET(0xCE44810)
#define RPG_GAMECORE_LEVELENTITYESCAPE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xCE448B0)
#define RPG_GAMECORE_LEVELENTITYESCAPE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCE44860)
#define RPG_GAMECORE_LEVELENTITYESCAPE_INIT_OFFSET UNITYSDK_OFFSET(0xCE447C0)
#define RPG_GAMECORE_LEVELENTITYESCAPE__CTOR_OFFSET UNITYSDK_OFFSET(0xCE44900)
#define RPG_GAMECORE_LEVELENTITYESCAPE___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xCE44910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityEscape_TypeDefinitionIndex = 53014;

	class LevelEntityEscape : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameEntity* Target; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYESCAPE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEntityEscape* Init(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::LevelEntityEscape*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYESCAPE_INIT_OFFSET))(this, a1);
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
