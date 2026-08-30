#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingBattle { class GridIndex; }
namespace RPG::Client::ChenLingBattle { class IEntity; }

#define RPG_CLIENT_CHENLINGBATTLE_GRID_CLEARENTITY_OFFSET UNITYSDK_OFFSET(0xCB07BF0)
#define RPG_CLIENT_CHENLINGBATTLE_GRID_CREATE_OFFSET UNITYSDK_OFFSET(0xCB07AE0)
#define RPG_CLIENT_CHENLINGBATTLE_GRID_GET_ENTITYUNIQUEID_OFFSET UNITYSDK_OFFSET(0xCB07D40)
#define RPG_CLIENT_CHENLINGBATTLE_GRID_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0xCB07E90)
#define RPG_CLIENT_CHENLINGBATTLE_GRID_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xCB07CE0)
#define RPG_CLIENT_CHENLINGBATTLE_GRID_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xCB07D20)
#define RPG_CLIENT_CHENLINGBATTLE_GRID_GET_X_OFFSET UNITYSDK_OFFSET(0xCB07C40)
#define RPG_CLIENT_CHENLINGBATTLE_GRID_GET_Y_OFFSET UNITYSDK_OFFSET(0xCB07C90)
#define RPG_CLIENT_CHENLINGBATTLE_GRID_SETENTITY_OFFSET UNITYSDK_OFFSET(0xCB07BA0)
#define RPG_CLIENT_CHENLINGBATTLE_GRID_SET_ENTITY_OFFSET UNITYSDK_OFFSET(0xCB07EA0)
#define RPG_CLIENT_CHENLINGBATTLE_GRID_SET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xCB07D30)
#define RPG_CLIENT_CHENLINGBATTLE_GRID__CTOR_OFFSET UNITYSDK_OFFSET(0xCB07B90)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int Grid_TypeDefinitionIndex = 75885;

	class Grid : public ::System::Object
	{
	public:
		::RPG::Client::ChenLingBattle::IEntity* _Entity_k__BackingField; // 0x10
		::RPG::Client::ChenLingBattle::GridIndex* _Index; // 0x18
		::System::Boolean _IsUnlock_k__BackingField; // 0x20

		::System::Void _ctor(::RPG::Client::ChenLingBattle::GridIndex* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::GridIndex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_GRID__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::ChenLingBattle::Grid* Create(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::ChenLingBattle::Grid*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_GRID_CREATE_OFFSET))(a1, a2);
		}

		::System::Void SetEntity(::RPG::Client::ChenLingBattle::IEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_GRID_SETENTITY_OFFSET))(this, a1);
		}

		::System::Void ClearEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_GRID_CLEARENTITY_OFFSET))(this);
		}

		::System::Int32 get_X()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_GRID_GET_X_OFFSET))(this);
		}

		::System::Int32 get_Y()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_GRID_GET_Y_OFFSET))(this);
		}

		::RPG::Client::ChenLingBattle::GridIndex* get_Index()
		{
			return ((::RPG::Client::ChenLingBattle::GridIndex*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_GRID_GET_INDEX_OFFSET))(this);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_GRID_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::Void set_IsUnlock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_GRID_SET_ISUNLOCK_OFFSET))(this, a1);
		}

		::System::UInt32 get_EntityUniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_GRID_GET_ENTITYUNIQUEID_OFFSET))(this);
		}

		::RPG::Client::ChenLingBattle::IEntity* get_Entity()
		{
			return ((::RPG::Client::ChenLingBattle::IEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_GRID_GET_ENTITY_OFFSET))(this);
		}

		::System::Void set_Entity(::RPG::Client::ChenLingBattle::IEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_GRID_SET_ENTITY_OFFSET))(this, a1);
		}
	};
}
