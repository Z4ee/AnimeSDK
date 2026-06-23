#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_ENTITYHANDLE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7A3000)
#define MOLEMOLE_ENTITYHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x7A2FF0)
#define MOLEMOLE_ENTITYHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7A2FA0)
#define MOLEMOLE_ENTITYHANDLE_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x2C19D0)
#define MOLEMOLE_ENTITYHANDLE_GET_ENTITYTYPE_OFFSET UNITYSDK_OFFSET(0x7A2EB0)
#define MOLEMOLE_ENTITYHANDLE_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x7A2EC0)
#define MOLEMOLE_ENTITYHANDLE_GET_ISPRELOAD_OFFSET UNITYSDK_OFFSET(0x7A2F20)
#define MOLEMOLE_ENTITYHANDLE_GET_ISREADY_OFFSET UNITYSDK_OFFSET(0x7A2F30)
#define MOLEMOLE_ENTITYHANDLE_GET_OFFSET UNITYSDK_OFFSET(0x7A2E50)
#define MOLEMOLE_ENTITYHANDLE_ISVALID_OFFSET UNITYSDK_OFFSET(0x7456A0)
#define MOLEMOLE_ENTITYHANDLE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x12FF7270)
#define MOLEMOLE_ENTITYHANDLE_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x12FF6F90)
#define MOLEMOLE_ENTITYHANDLE_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x12FF7040)
#define MOLEMOLE_ENTITYHANDLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x12FF6F20)
#define MOLEMOLE_ENTITYHANDLE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x12FF7320)
#define MOLEMOLE_ENTITYHANDLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7A2F40)
#define MOLEMOLE_ENTITYHANDLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x12FF73D0)
#define MOLEMOLE_ENTITYHANDLE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x7A2DF0)
#define MOLEMOLE_ENTITYHANDLE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x7A2E10)
#define MOLEMOLE_ENTITYHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x7A2DE0)
#define MOLEMOLE_ENTITYHANDLE___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7A3070)
#define MOLEMOLE_ENTITYHANDLE___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7A30D0)

namespace MoleMole
{
	inline static constexpr unsigned int EntityHandle_TypeDefinitionIndex = 58470;

	struct alignas(8) EntityHandle
	{
		static ::MoleMole::EntityHandle* StaticGet_Empty()
		{
			return (::MoleMole::EntityHandle*)Il2CppClass::FromTypeDefinitionIndex(EntityHandle_TypeDefinitionIndex)->GetStaticField(0x2D150);
		}
		// static const ::System::Int32 INVALID_ENTITY_ID = 0x0; // 0x0
		::MoleMole::Battle::Entity* cachedEntity; // 0x10
		::System::UInt32 entityId; // 0x18

		::System::Void _ctor(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYHANDLE__CTOR_OFFSET))(this, id);
		}

		::System::Void _ctor_1(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYHANDLE__CTOR_1_OFFSET))(this, entity);
		}

		::System::Void _ctor_2(::MoleMole::Battle::Entity* entity, ::System::Boolean validCheck)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYHANDLE__CTOR_2_OFFSET))(this, entity, validCheck);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYHANDLE__CCTOR_OFFSET))();
		}

		::System::UInt32 get_entityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYHANDLE_GET_ENTITYID_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* Get()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYHANDLE_GET_OFFSET))(this);
		}

		::MoleMole::Config::EntityType get_entityType()
		{
			return ((::MoleMole::Config::EntityType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYHANDLE_GET_ENTITYTYPE_OFFSET))(this);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYHANDLE_ISVALID_OFFSET))(this);
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYHANDLE_GET_ISNULL_OFFSET))(this);
		}

		::System::Boolean get_IsPreload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYHANDLE_GET_ISPRELOAD_OFFSET))(this);
		}

		::System::Boolean get_IsReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYHANDLE_GET_ISREADY_OFFSET))(this);
		}

		static ::MoleMole::EntityHandle op_Implicit(::System::UInt32 entityId)
		{
			return ((::MoleMole::EntityHandle(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYHANDLE_OP_IMPLICIT_OFFSET))(entityId);
		}

		static ::MoleMole::EntityHandle op_Implicit_1(::MoleMole::Battle::Entity* entity)
		{
			return ((::MoleMole::EntityHandle(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYHANDLE_OP_IMPLICIT_1_OFFSET))(entity);
		}

		static ::MoleMole::Battle::Entity* op_Implicit_2(::MoleMole::EntityHandle entity)
		{
			return ((::MoleMole::Battle::Entity*(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYHANDLE_OP_IMPLICIT_2_OFFSET))(entity);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYHANDLE_TOSTRING_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYHANDLE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::MoleMole::Battle::Entity* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYHANDLE_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::MoleMole::EntityHandle other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYHANDLE_EQUALS_1_OFFSET))(this, other);
		}

		static ::System::Boolean op_Equality(::MoleMole::EntityHandle self, ::MoleMole::EntityHandle other)
		{
			return ((::System::Boolean(*)(::MoleMole::EntityHandle, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYHANDLE_OP_EQUALITY_OFFSET))(self, other);
		}

		static ::System::Boolean op_Inequality(::MoleMole::EntityHandle self, ::MoleMole::EntityHandle other)
		{
			return ((::System::Boolean(*)(::MoleMole::EntityHandle, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYHANDLE_OP_INEQUALITY_OFFSET))(self, other);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYHANDLE___BASE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYHANDLE___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
