#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

class Class_1_E3A8B05AA1BBEE81;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class JsonEnum; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_LEVELENTITYUSEINSERTABILITY_CLEAR_OFFSET UNITYSDK_OFFSET(0xB6D7C20)
#define RPG_GAMECORE_LEVELENTITYUSEINSERTABILITY_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB6D7CC0)
#define RPG_GAMECORE_LEVELENTITYUSEINSERTABILITY_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6D7C70)
#define RPG_GAMECORE_LEVELENTITYUSEINSERTABILITY_INIT_OFFSET UNITYSDK_OFFSET(0xB6D7B80)
#define RPG_GAMECORE_LEVELENTITYUSEINSERTABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0xB6D7D10)
#define RPG_GAMECORE_LEVELENTITYUSEINSERTABILITY___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xB6D7D20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityUseInsertAbility_TypeDefinitionIndex = 52302;

	class LevelEntityUseInsertAbility : public ::Class_1_9988289E7F8AA214
	{
	public:
		::Il2CppArray<::RPG::GameCore::JsonEnum*>* CustomFlags; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* AbilityTargetList; // 0x20
		::RPG::GameCore::GameEntity* Target; // 0x28
		::System::String* AbilityName; // 0x30
		::System::Boolean Silence; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSEINSERTABILITY__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEntityUseInsertAbility* Init(::Class_1_E3A8B05AA1BBEE81* insertInstance, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* abilityTargetList, ::Il2CppArray<::RPG::GameCore::JsonEnum*>* customTag)
		{
			return ((::RPG::GameCore::LevelEntityUseInsertAbility*(*)(::PVOID, ::Class_1_E3A8B05AA1BBEE81*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::Il2CppArray<::RPG::GameCore::JsonEnum*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSEINSERTABILITY_INIT_OFFSET))(this, insertInstance, abilityTargetList, customTag);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSEINSERTABILITY_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSEINSERTABILITY_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSEINSERTABILITY_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSEINSERTABILITY___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
