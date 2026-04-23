#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/ActionDelayChangeReason.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELENTITYACTIONDELAYCHANGED_CLEAR_OFFSET UNITYSDK_OFFSET(0xB6D5B70)
#define RPG_GAMECORE_LEVELENTITYACTIONDELAYCHANGED_COPY_OFFSET UNITYSDK_OFFSET(0xB6D5AF0)
#define RPG_GAMECORE_LEVELENTITYACTIONDELAYCHANGED_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB6D5C10)
#define RPG_GAMECORE_LEVELENTITYACTIONDELAYCHANGED_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6D5BC0)
#define RPG_GAMECORE_LEVELENTITYACTIONDELAYCHANGED_INIT_OFFSET UNITYSDK_OFFSET(0xB6D5A30)
#define RPG_GAMECORE_LEVELENTITYACTIONDELAYCHANGED__CTOR_OFFSET UNITYSDK_OFFSET(0xB6D5C60)
#define RPG_GAMECORE_LEVELENTITYACTIONDELAYCHANGED___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xB6D5C70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityActionDelayChanged_TypeDefinitionIndex = 52330;

	class LevelEntityActionDelayChanged : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* EntityRef; // 0x18
		::RPG::GameCore::GameEntity* SourceEntityRef; // 0x20
		::RPG::GameCore::ActionDelayChangeReason Reason; // 0x28
		::System::Boolean ForbidSortEntities; // 0x2C
		::RPG::GameCore::FixPoint PrevValue; // 0x30
		::RPG::GameCore::FixPoint ChangeValue; // 0x38
		::RPG::GameCore::FixPoint CurrentValue; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYACTIONDELAYCHANGED__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEntityActionDelayChanged* Init(::RPG::GameCore::GameEntity* pEntity, ::RPG::GameCore::GameEntity* pSourceEntity, ::RPG::GameCore::FixPoint prevValue, ::RPG::GameCore::FixPoint changeValue, ::RPG::GameCore::FixPoint currentValue, ::RPG::GameCore::ActionDelayChangeReason reason, ::System::Boolean forbidSortEntity)
		{
			return ((::RPG::GameCore::LevelEntityActionDelayChanged*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::ActionDelayChangeReason, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYACTIONDELAYCHANGED_INIT_OFFSET))(this, pEntity, pSourceEntity, prevValue, changeValue, currentValue, reason, forbidSortEntity);
		}

		::RPG::GameCore::LevelEntityActionDelayChanged* Copy(::RPG::GameCore::LevelEntityActionDelayChanged* rsh)
		{
			return ((::RPG::GameCore::LevelEntityActionDelayChanged*(*)(::PVOID, ::RPG::GameCore::LevelEntityActionDelayChanged*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYACTIONDELAYCHANGED_COPY_OFFSET))(this, rsh);
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
