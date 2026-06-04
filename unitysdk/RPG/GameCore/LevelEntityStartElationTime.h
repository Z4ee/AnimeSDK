#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_LEVELENTITYSTARTELATIONTIME_CLEAR_OFFSET UNITYSDK_OFFSET(0xCE457A0)
#define RPG_GAMECORE_LEVELENTITYSTARTELATIONTIME_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xCE45840)
#define RPG_GAMECORE_LEVELENTITYSTARTELATIONTIME_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCE457F0)
#define RPG_GAMECORE_LEVELENTITYSTARTELATIONTIME_INIT_OFFSET UNITYSDK_OFFSET(0xCE45740)
#define RPG_GAMECORE_LEVELENTITYSTARTELATIONTIME__CTOR_OFFSET UNITYSDK_OFFSET(0xCE45890)
#define RPG_GAMECORE_LEVELENTITYSTARTELATIONTIME___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xCE458A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityStartElationTime_TypeDefinitionIndex = 53001;

	class LevelEntityStartElationTime : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameEntity* Caster; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Targets; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSTARTELATIONTIME__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEntityStartElationTime* Init(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::RPG::GameCore::LevelEntityStartElationTime*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSTARTELATIONTIME_INIT_OFFSET))(this, a1, a2);
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
