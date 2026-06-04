#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Billboard/BillboardIdentifierType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class WaypointIdentifier; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xB434820)
#define RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER_EQUALS_OFFSET UNITYSDK_OFFSET(0xB434790)
#define RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER_GETENTITY_OFFSET UNITYSDK_OFFSET(0xB434470)
#define RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xB4348F0)
#define RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER_GETWAYPOINTIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xB4344E0)
#define RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER_GET_CONTAINERGROUPID_OFFSET UNITYSDK_OFFSET(0xB434440)
#define RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER_GET_CONTAINERINSTANCEID_OFFSET UNITYSDK_OFFSET(0xB434450)
#define RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER_GET_LITTLEGAMERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB434460)
#define RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER_GET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB434430)
#define RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB434420)
#define RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xB434970)
#define RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xB434A20)
#define RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB434A90)
#define RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER__CCTOR_OFFSET UNITYSDK_OFFSET(0xB434E40)
#define RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER__CTOR_1_OFFSET UNITYSDK_OFFSET(0xB434750)
#define RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER__CTOR_2_OFFSET UNITYSDK_OFFSET(0xB434770)
#define RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0xB434740)
#define RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0xB434E80)
#define RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xB434E90)
#define RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB434EA0)

namespace RPG::Client::Billboard
{
	inline static constexpr unsigned int BillboardIdentifier_TypeDefinitionIndex = 69856;

	class BillboardIdentifier : public ::System::Object
	{
	public:
		static ::RPG::Client::Billboard::BillboardIdentifier** StaticGet_Invalid()
		{
			return (::RPG::Client::Billboard::BillboardIdentifier**)Il2CppClass::FromTypeDefinitionIndex(BillboardIdentifier_TypeDefinitionIndex)->GetStaticField(0x24160);
		}
		::System::UInt32 _ContainerInstanceID_k__BackingField; // 0x10
		::System::Int32 _LittleGameRuntimeID_k__BackingField; // 0x14
		::RPG::Client::Billboard::BillboardIdentifierType _Type_k__BackingField; // 0x18
		::System::UInt32 _RuntimeID_k__BackingField; // 0x1C
		::System::UInt32 _ContainerGroupID_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::UInt32 a1, ::System::UInt32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER__CTOR_2_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER__CCTOR_OFFSET))();
		}

		::RPG::Client::Billboard::BillboardIdentifierType get_Type()
		{
			return ((::RPG::Client::Billboard::BillboardIdentifierType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER_GET_TYPE_OFFSET))(this);
		}

		::System::UInt32 get_RuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER_GET_RUNTIMEID_OFFSET))(this);
		}

		::System::UInt32 get_ContainerGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER_GET_CONTAINERGROUPID_OFFSET))(this);
		}

		::System::UInt32 get_ContainerInstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER_GET_CONTAINERINSTANCEID_OFFSET))(this);
		}

		::System::Int32 get_LittleGameRuntimeID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER_GET_LITTLEGAMERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER_GETENTITY_OFFSET))(this);
		}

		::RPG::Client::WaypointIdentifier* GetWaypointIdentifier()
		{
			return ((::RPG::Client::WaypointIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER_GETWAYPOINTIDENTIFIER_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::Billboard::BillboardIdentifier* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Billboard::BillboardIdentifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::RPG::Client::Billboard::BillboardIdentifier* a1, ::RPG::Client::Billboard::BillboardIdentifier* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::Billboard::BillboardIdentifier*, ::RPG::Client::Billboard::BillboardIdentifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::Billboard::BillboardIdentifier* a1, ::RPG::Client::Billboard::BillboardIdentifier* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::Billboard::BillboardIdentifier*, ::RPG::Client::Billboard::BillboardIdentifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER_TOSTRING_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER___IFIXBASEPROXY_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 __iFixBaseProxy_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_BILLBOARDIDENTIFIER___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}
