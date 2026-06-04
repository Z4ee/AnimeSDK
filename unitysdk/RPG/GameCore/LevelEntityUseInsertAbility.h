#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

class Class_1_1CB8CBC69B962B41;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class JsonEnum; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_LEVELENTITYUSEINSERTABILITY_CLEAR_OFFSET UNITYSDK_OFFSET(0xCE45B80)
#define RPG_GAMECORE_LEVELENTITYUSEINSERTABILITY_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xCE45C20)
#define RPG_GAMECORE_LEVELENTITYUSEINSERTABILITY_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCE45BD0)
#define RPG_GAMECORE_LEVELENTITYUSEINSERTABILITY_INIT_OFFSET UNITYSDK_OFFSET(0xCE45AE0)
#define RPG_GAMECORE_LEVELENTITYUSEINSERTABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0xCE45C70)
#define RPG_GAMECORE_LEVELENTITYUSEINSERTABILITY___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xCE45C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityUseInsertAbility_TypeDefinitionIndex = 52999;

	class LevelEntityUseInsertAbility : public ::Class_1_BF7A075734D15E98
	{
	public:
		::System::String* AbilityName; // 0x18
		::Il2CppArray<::RPG::GameCore::JsonEnum*>* CustomFlags; // 0x20
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* AbilityTargetList; // 0x28
		::RPG::GameCore::GameEntity* Target; // 0x30
		::System::Boolean Silence; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSEINSERTABILITY__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEntityUseInsertAbility* Init(::Class_1_1CB8CBC69B962B41* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::Il2CppArray<::RPG::GameCore::JsonEnum*>* a3)
		{
			return ((::RPG::GameCore::LevelEntityUseInsertAbility*(*)(::PVOID, ::Class_1_1CB8CBC69B962B41*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::Il2CppArray<::RPG::GameCore::JsonEnum*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSEINSERTABILITY_INIT_OFFSET))(this, a1, a2, a3);
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
