#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_LEVELENTITYSTARTELATIONTIME_CLEAR_OFFSET UNITYSDK_OFFSET(0xB6D7830)
#define RPG_GAMECORE_LEVELENTITYSTARTELATIONTIME_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB6D78D0)
#define RPG_GAMECORE_LEVELENTITYSTARTELATIONTIME_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6D7880)
#define RPG_GAMECORE_LEVELENTITYSTARTELATIONTIME_INIT_OFFSET UNITYSDK_OFFSET(0xB6D77D0)
#define RPG_GAMECORE_LEVELENTITYSTARTELATIONTIME__CTOR_OFFSET UNITYSDK_OFFSET(0xB6D7920)
#define RPG_GAMECORE_LEVELENTITYSTARTELATIONTIME___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xB6D7930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityStartElationTime_TypeDefinitionIndex = 52304;

	class LevelEntityStartElationTime : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* Caster; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Targets; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSTARTELATIONTIME__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEntityStartElationTime* Init(::RPG::GameCore::GameEntity* caster, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* targets)
		{
			return ((::RPG::GameCore::LevelEntityStartElationTime*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSTARTELATIONTIME_INIT_OFFSET))(this, caster, targets);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSTARTELATIONTIME_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSTARTELATIONTIME_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSTARTELATIONTIME_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSTARTELATIONTIME___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
