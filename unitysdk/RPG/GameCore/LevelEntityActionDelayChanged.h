#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/ActionDelayChangeReason.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELENTITYACTIONDELAYCHANGED_CLEAR_OFFSET UNITYSDK_OFFSET(0xCE43B70)
#define RPG_GAMECORE_LEVELENTITYACTIONDELAYCHANGED_COPY_OFFSET UNITYSDK_OFFSET(0xCE43AF0)
#define RPG_GAMECORE_LEVELENTITYACTIONDELAYCHANGED_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xCE43C10)
#define RPG_GAMECORE_LEVELENTITYACTIONDELAYCHANGED_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCE43BC0)
#define RPG_GAMECORE_LEVELENTITYACTIONDELAYCHANGED_INIT_OFFSET UNITYSDK_OFFSET(0xCE43A30)
#define RPG_GAMECORE_LEVELENTITYACTIONDELAYCHANGED__CTOR_OFFSET UNITYSDK_OFFSET(0xCE43C60)
#define RPG_GAMECORE_LEVELENTITYACTIONDELAYCHANGED___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xCE43C70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityActionDelayChanged_TypeDefinitionIndex = 53027;

	class LevelEntityActionDelayChanged : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameEntity* EntityRef; // 0x18
		::RPG::GameCore::GameEntity* SourceEntityRef; // 0x20
		::RPG::GameCore::FixPoint ChangeValue; // 0x28
		::RPG::GameCore::FixPoint CurrentValue; // 0x30
		::RPG::GameCore::FixPoint PrevValue; // 0x38
		::RPG::GameCore::ActionDelayChangeReason Reason; // 0x40
		::System::Boolean ForbidSortEntities; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYACTIONDELAYCHANGED__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEntityActionDelayChanged* Init(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::FixPoint a5, ::RPG::GameCore::ActionDelayChangeReason a6, ::System::Boolean a7)
		{
			return ((::RPG::GameCore::LevelEntityActionDelayChanged*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::ActionDelayChangeReason, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYACTIONDELAYCHANGED_INIT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::RPG::GameCore::LevelEntityActionDelayChanged* Copy(::RPG::GameCore::LevelEntityActionDelayChanged* a1)
		{
			return ((::RPG::GameCore::LevelEntityActionDelayChanged*(*)(::PVOID, ::RPG::GameCore::LevelEntityActionDelayChanged*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYACTIONDELAYCHANGED_COPY_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYACTIONDELAYCHANGED_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYACTIONDELAYCHANGED_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYACTIONDELAYCHANGED_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYACTIONDELAYCHANGED___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
