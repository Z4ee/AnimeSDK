#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

class Class_1_1CB8CBC69B962B41;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_LEVELINSERTABILITYABORT_CLEAR_OFFSET UNITYSDK_OFFSET(0xE697D80)
#define RPG_GAMECORE_LEVELINSERTABILITYABORT_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE697E50)
#define RPG_GAMECORE_LEVELINSERTABILITYABORT_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE697E00)
#define RPG_GAMECORE_LEVELINSERTABILITYABORT_INIT_OFFSET UNITYSDK_OFFSET(0xE697CA0)
#define RPG_GAMECORE_LEVELINSERTABILITYABORT__CTOR_OFFSET UNITYSDK_OFFSET(0xE697EA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelInsertAbilityAbort_TypeDefinitionIndex = 57014;

	class LevelInsertAbilityAbort : public ::Class_1_BF7A075734D15E98
	{
	public:
		::System::String* InsertAbilityName; // 0x18
		::RPG::GameCore::GameEntity* CasterEntity; // 0x20
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* TargetList; // 0x28
		::System::Boolean ShowInActionBar; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINSERTABILITYABORT__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelInsertAbilityAbort* Init(::Class_1_1CB8CBC69B962B41* a1)
		{
			return ((::RPG::GameCore::LevelInsertAbilityAbort*(*)(::PVOID, ::Class_1_1CB8CBC69B962B41*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINSERTABILITYABORT_INIT_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINSERTABILITYABORT_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINSERTABILITYABORT_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINSERTABILITYABORT_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
