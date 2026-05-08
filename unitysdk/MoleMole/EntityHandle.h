#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_ENTITYHANDLE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x74C7F0)
#define MOLEMOLE_ENTITYHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x74C7E0)
#define MOLEMOLE_ENTITYHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x74C790)
#define MOLEMOLE_ENTITYHANDLE_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x2F0420)
#define MOLEMOLE_ENTITYHANDLE_GET_ENTITYTYPE_OFFSET UNITYSDK_OFFSET(0x74C690)
#define MOLEMOLE_ENTITYHANDLE_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x74C6B0)
#define MOLEMOLE_ENTITYHANDLE_GET_ISPRELOAD_OFFSET UNITYSDK_OFFSET(0x74C710)
#define MOLEMOLE_ENTITYHANDLE_GET_ISREADY_OFFSET UNITYSDK_OFFSET(0x74C720)
#define MOLEMOLE_ENTITYHANDLE_GET_OFFSET UNITYSDK_OFFSET(0x74C630)
#define MOLEMOLE_ENTITYHANDLE_ISVALID_OFFSET UNITYSDK_OFFSET(0x74C6A0)
#define MOLEMOLE_ENTITYHANDLE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x125A3A10)
#define MOLEMOLE_ENTITYHANDLE_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x125A3730)
#define MOLEMOLE_ENTITYHANDLE_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x125A37E0)
#define MOLEMOLE_ENTITYHANDLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x125A36C0)
#define MOLEMOLE_ENTITYHANDLE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x125A3AC0)
#define MOLEMOLE_ENTITYHANDLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x74C730)
#define MOLEMOLE_ENTITYHANDLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x125A3B70)
#define MOLEMOLE_ENTITYHANDLE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x74C5D0)
#define MOLEMOLE_ENTITYHANDLE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x74C5F0)
#define MOLEMOLE_ENTITYHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x74C5C0)
#define MOLEMOLE_ENTITYHANDLE___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x74C860)
#define MOLEMOLE_ENTITYHANDLE___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x74C8C0)

namespace MoleMole
{
	inline static constexpr unsigned int EntityHandle_TypeDefinitionIndex = 75216;

	struct alignas(8) EntityHandle
	{
		static ::MoleMole::EntityHandle* StaticGet_Empty()
		{
			return (::MoleMole::EntityHandle*)Il2CppClass::FromTypeDefinitionIndex(EntityHandle_TypeDefinitionIndex)->GetStaticField(0x2A4D0);
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
