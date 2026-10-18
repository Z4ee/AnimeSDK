#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_BATTLEMONSTERSINGLEBLOCKDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC844450)
#define RPG_CLIENT_BATTLEMONSTERSINGLEBLOCKDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC844890)
#define RPG_CLIENT_BATTLEMONSTERSINGLEBLOCKDATA_GETHASSINGLEBLOCK_OFFSET UNITYSDK_OFFSET(0xC844B10)
#define RPG_CLIENT_BATTLEMONSTERSINGLEBLOCKDATA_ISSINGLEBLOCKMODIFIER_OFFSET UNITYSDK_OFFSET(0xC844B70)
#define RPG_CLIENT_BATTLEMONSTERSINGLEBLOCKDATA_UPDATEENTITY_OFFSET UNITYSDK_OFFSET(0xC844AC0)
#define RPG_CLIENT_BATTLEMONSTERSINGLEBLOCKDATA__ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xC844610)
#define RPG_CLIENT_BATTLEMONSTERSINGLEBLOCKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC844560)
#define RPG_CLIENT_BATTLEMONSTERSINGLEBLOCKDATA__INIT_OFFSET UNITYSDK_OFFSET(0xC8446F0)
#define RPG_CLIENT_BATTLEMONSTERSINGLEBLOCKDATA__ONBATTLECHARACTERADDMODIFIER_OFFSET UNITYSDK_OFFSET(0xC844CC0)
#define RPG_CLIENT_BATTLEMONSTERSINGLEBLOCKDATA__ONBATTLECHARACTERREMOVEMODIFIER_OFFSET UNITYSDK_OFFSET(0xC844DA0)
#define RPG_CLIENT_BATTLEMONSTERSINGLEBLOCKDATA__REMOVEHANDLERS_OFFSET UNITYSDK_OFFSET(0xC844950)
#define RPG_CLIENT_BATTLEMONSTERSINGLEBLOCKDATA__RESET_OFFSET UNITYSDK_OFFSET(0xC844A30)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleMonsterSingleBlockData_TypeDefinitionIndex = 71764;

	class BattleMonsterSingleBlockData : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::TurnBasedModifierInstance*>* _ModifierInstances; // 0x10
		::RPG::GameCore::GameEntity* _Entity; // 0x18
		::System::Boolean _AddedHandlers; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERSINGLEBLOCKDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::BattleMonsterSingleBlockData* Create(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::Client::BattleMonsterSingleBlockData*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERSINGLEBLOCKDATA_CREATE_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERSINGLEBLOCKDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void UpdateEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERSINGLEBLOCKDATA_UPDATEENTITY_OFFSET))(this, a1);
		}

		::System::Boolean GetHasSingleBlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERSINGLEBLOCKDATA_GETHASSINGLEBLOCK_OFFSET))(this);
		}

		::System::Boolean IsSingleBlockModifier(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERSINGLEBLOCKDATA_ISSINGLEBLOCKMODIFIER_OFFSET))(this, a1);
		}

		::System::Void _AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERSINGLEBLOCKDATA__ADDHANDLERS_OFFSET))(this);
		}

		::System::Void _RemoveHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERSINGLEBLOCKDATA__REMOVEHANDLERS_OFFSET))(this);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERSINGLEBLOCKDATA__INIT_OFFSET))(this);
		}

		::System::Void _Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERSINGLEBLOCKDATA__RESET_OFFSET))(this);
		}

		::System::Void _OnBattleCharacterAddModifier(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERSINGLEBLOCKDATA__ONBATTLECHARACTERADDMODIFIER_OFFSET))(this, a1);
		}

		::System::Void _OnBattleCharacterRemoveModifier(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERSINGLEBLOCKDATA__ONBATTLECHARACTERREMOVEMODIFIER_OFFSET))(this, a1);
		}
	};
}
