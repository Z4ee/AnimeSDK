#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingBattle { class GridIndex; }
namespace RPG::Client::ChenLingBattle { class IEntity; }

#define RPG_CLIENT_CHENLINGBATTLE_GRID_CLEARENTITY_OFFSET UNITYSDK_OFFSET(0x9F9C030)
#define RPG_CLIENT_CHENLINGBATTLE_GRID_CREATE_OFFSET UNITYSDK_OFFSET(0x9F9AE40)
#define RPG_CLIENT_CHENLINGBATTLE_GRID_GET_ENTITYUNIQUEID_OFFSET UNITYSDK_OFFSET(0x9F9CC80)
#define RPG_CLIENT_CHENLINGBATTLE_GRID_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0x9FA74A0)
#define RPG_CLIENT_CHENLINGBATTLE_GRID_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x9FA7470)
#define RPG_CLIENT_CHENLINGBATTLE_GRID_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x9FA7480)
#define RPG_CLIENT_CHENLINGBATTLE_GRID_GET_X_OFFSET UNITYSDK_OFFSET(0x9F961F0)
#define RPG_CLIENT_CHENLINGBATTLE_GRID_GET_Y_OFFSET UNITYSDK_OFFSET(0x9F96210)
#define RPG_CLIENT_CHENLINGBATTLE_GRID_SETENTITY_OFFSET UNITYSDK_OFFSET(0x9F9BFE0)
#define RPG_CLIENT_CHENLINGBATTLE_GRID_SET_ENTITY_OFFSET UNITYSDK_OFFSET(0x9FA74B0)
#define RPG_CLIENT_CHENLINGBATTLE_GRID_SET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x9FA7490)
#define RPG_CLIENT_CHENLINGBATTLE_GRID__CTOR_OFFSET UNITYSDK_OFFSET(0x9FA7460)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int Grid_TypeDefinitionIndex = 70123;

	class Grid : public ::System::Object
	{
	public:
		::RPG::Client::ChenLingBattle::IEntity* _Entity_k__BackingField; // 0x10
		::RPG::Client::ChenLingBattle::GridIndex* _Index; // 0x18
		::System::Boolean _IsUnlock_k__BackingField; // 0x20

		::System::Void _ctor(::RPG::Client::ChenLingBattle::GridIndex* index)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::GridIndex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_GRID__CTOR_OFFSET))(this, index);
		}

		static ::RPG::Client::ChenLingBattle::Grid* Create(::System::Int32 x, ::System::Int32 y)
		{
			return ((::RPG::Client::ChenLingBattle::Grid*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_GRID_CREATE_OFFSET))(x, y);
		}

		::System::Void SetEntity(::RPG::Client::ChenLingBattle::IEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_GRID_SETENTITY_OFFSET))(this, entity);
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

		::System::Void set_IsUnlock(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_GRID_SET_ISUNLOCK_OFFSET))(this, value);
		}

		::System::UInt32 get_EntityUniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_GRID_GET_ENTITYUNIQUEID_OFFSET))(this);
		}

		::RPG::Client::ChenLingBattle::IEntity* get_Entity()
		{
			return ((::RPG::Client::ChenLingBattle::IEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_GRID_GET_ENTITY_OFFSET))(this);
		}

		::System::Void set_Entity(::RPG::Client::ChenLingBattle::IEntity* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_GRID_SET_ENTITY_OFFSET))(this, value);
		}
	};
}
