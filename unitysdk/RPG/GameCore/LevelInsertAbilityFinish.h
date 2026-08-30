#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

class Class_1_1CB8CBC69B962B41;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_LEVELINSERTABILITYFINISH_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DD28E80)
#define RPG_GAMECORE_LEVELINSERTABILITYFINISH_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1DD28F50)
#define RPG_GAMECORE_LEVELINSERTABILITYFINISH_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1DD28F00)
#define RPG_GAMECORE_LEVELINSERTABILITYFINISH_INIT_OFFSET UNITYSDK_OFFSET(0x1DD28D80)
#define RPG_GAMECORE_LEVELINSERTABILITYFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD28FA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelInsertAbilityFinish_TypeDefinitionIndex = 57013;

	class LevelInsertAbilityFinish : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameEntity* CasterEntity; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* TargetList; // 0x20
		::System::String* InsertAbilityName; // 0x28
		::System::Boolean Silence; // 0x30
		::System::Boolean ShowInActionBar; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINSERTABILITYFINISH__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelInsertAbilityFinish* Init(::Class_1_1CB8CBC69B962B41* a1, ::System::Boolean a2)
		{
			return ((::RPG::GameCore::LevelInsertAbilityFinish*(*)(::PVOID, ::Class_1_1CB8CBC69B962B41*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINSERTABILITYFINISH_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINSERTABILITYFINISH_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINSERTABILITYFINISH_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINSERTABILITYFINISH_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
