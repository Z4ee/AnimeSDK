#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM_GRIDCOORD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x79B620)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM_GRIDCOORD_EQUALS_OFFSET UNITYSDK_OFFSET(0x79B5C0)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM_GRIDCOORD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x79B630)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM_GRIDCOORD__CTOR_OFFSET UNITYSDK_OFFSET(0x79B680)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM_GRIDCOORD___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x79B6D0)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM_GRIDCOORD___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x79B730)

namespace MoleMole
{
	inline static constexpr unsigned int EntitySpawnSubsystem_GridCoord_TypeDefinitionIndex = 71882;

	struct alignas(4) EntitySpawnSubsystem_GridCoord
	{
		::System::Int32 GridX; // 0x10
		::System::Int32 GridY; // 0x14

		::System::Void _ctor(::System::Single x, ::System::Single y, ::System::Single gridSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM_GRIDCOORD__CTOR_OFFSET))(this, x, y, gridSize);
		}

		::System::Boolean Equals(::MoleMole::EntitySpawnSubsystem_GridCoord other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntitySpawnSubsystem_GridCoord))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM_GRIDCOORD_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM_GRIDCOORD_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM_GRIDCOORD_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM_GRIDCOORD___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM_GRIDCOORD___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
