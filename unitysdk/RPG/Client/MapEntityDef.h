#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MapEntityType.h"
#include "unitysdk/RPG/GameCore/EntityClassifyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_A9C466B0994F2417;
namespace RPG::GameCore { class LevelGraphValueSource; }

#define RPG_CLIENT_MAPENTITYDEF_GET_ENTITYTYPE_OFFSET UNITYSDK_OFFSET(0xBEDAB50)
#define RPG_CLIENT_MAPENTITYDEF_GET_GROUPANDINSTANCEID_OFFSET UNITYSDK_OFFSET(0xBEC0C30)
#define RPG_CLIENT_MAPENTITYDEF_GET_GROUPINSTANCEID_OFFSET UNITYSDK_OFFSET(0xBEDAA50)
#define RPG_CLIENT_MAPENTITYDEF_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xBEDAA70)
#define RPG_CLIENT_MAPENTITYDEF_GET_ISLOCAL_OFFSET UNITYSDK_OFFSET(0xBEDAB70)
#define RPG_CLIENT_MAPENTITYDEF_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0xBEDAB80)
#define RPG_CLIENT_MAPENTITYDEF_GET_LOCALENTITYID_OFFSET UNITYSDK_OFFSET(0xBEDAAB0)
#define RPG_CLIENT_MAPENTITYDEF_GET_OWNERGROUPDEF_OFFSET UNITYSDK_OFFSET(0xBEDAA40)
#define RPG_CLIENT_MAPENTITYDEF_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xBEDAAD0)
#define RPG_CLIENT_MAPENTITYDEF_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0xBEDAB00)
#define RPG_CLIENT_MAPENTITYDEF_GET_SCALE_OFFSET UNITYSDK_OFFSET(0xBEDAB20)
#define RPG_CLIENT_MAPENTITYDEF_GET_SERVERENTITIYID_OFFSET UNITYSDK_OFFSET(0xBEDAA90)
#define RPG_CLIENT_MAPENTITYDEF_OVERRIDEBORNPOSITION_OFFSET UNITYSDK_OFFSET(0xBEDA8A0)
#define RPG_CLIENT_MAPENTITYDEF_OVERRIDEBORNROTATION_OFFSET UNITYSDK_OFFSET(0xBEDA900)
#define RPG_CLIENT_MAPENTITYDEF_SETCLASSIFYTYPE_OFFSET UNITYSDK_OFFSET(0xBEDABA0)
#define RPG_CLIENT_MAPENTITYDEF_SET_ENTITYTYPE_OFFSET UNITYSDK_OFFSET(0xBEDAB60)
#define RPG_CLIENT_MAPENTITYDEF_SET_GROUPINSTANCEID_OFFSET UNITYSDK_OFFSET(0xBEDAA60)
#define RPG_CLIENT_MAPENTITYDEF_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xBEDAA80)
#define RPG_CLIENT_MAPENTITYDEF_SET_ISNEW_OFFSET UNITYSDK_OFFSET(0xBEDAB90)
#define RPG_CLIENT_MAPENTITYDEF_SET_LOCALENTITYID_OFFSET UNITYSDK_OFFSET(0xBEDAAC0)
#define RPG_CLIENT_MAPENTITYDEF_SET_OWNERGROUPDEF_OFFSET UNITYSDK_OFFSET(0xBEDAA30)
#define RPG_CLIENT_MAPENTITYDEF_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xBEDAAF0)
#define RPG_CLIENT_MAPENTITYDEF_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0xBEDAB10)
#define RPG_CLIENT_MAPENTITYDEF_SET_SCALE_OFFSET UNITYSDK_OFFSET(0xBEDAB40)
#define RPG_CLIENT_MAPENTITYDEF_SET_SERVERENTITIYID_OFFSET UNITYSDK_OFFSET(0xBEDAAA0)
#define RPG_CLIENT_MAPENTITYDEF__APPLYGROUPINITOVERRIDEENTITYTRANSFORM_OFFSET UNITYSDK_OFFSET(0xBEDA7B0)
#define RPG_CLIENT_MAPENTITYDEF__CTOR_OFFSET UNITYSDK_OFFSET(0xBEDA730)
#define RPG_CLIENT_MAPENTITYDEF__TRYGETGROUPINITOVERRIDEVALUESOURCE_OFFSET UNITYSDK_OFFSET(0xBEDA960)

namespace RPG::Client
{
	inline static constexpr unsigned int MapEntityDef_TypeDefinitionIndex = 58086;

	class MapEntityDef : public ::System::Object
	{
	public:
		::Class_1_A9C466B0994F2417* _OwnerGroupDef_k__BackingField; // 0x10
		::RPG::Client::MapEntityType _EntityType_k__BackingField; // 0x18
		::UnityEngine::Vector3 _Scale_k__BackingField; // 0x1C
		::System::UInt32 _LocalEntityID_k__BackingField; // 0x28
		::System::UInt32 _GroupInstanceID_k__BackingField; // 0x2C
		::System::UInt32 _InstanceID_k__BackingField; // 0x30
		::System::Boolean _IsNew_k__BackingField; // 0x34
		::System::UInt32 _ServerEntitiyID_k__BackingField; // 0x38
		::UnityEngine::Quaternion _Rotation_k__BackingField; // 0x3C
		::UnityEngine::Vector3 _Position_k__BackingField; // 0x4C

		::System::Void _ctor(::Class_1_A9C466B0994F2417* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Quaternion a5, ::UnityEngine::Vector3 a6)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A9C466B0994F2417*, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void OverrideBornPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_OVERRIDEBORNPOSITION_OFFSET))(this, a1);
		}

		::System::Void OverrideBornRotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_OVERRIDEBORNROTATION_OFFSET))(this, a1);
		}

		::System::Void _ApplyGroupInitOverrideEntityTransform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF__APPLYGROUPINITOVERRIDEENTITYTRANSFORM_OFFSET))(this);
		}

		::RPG::GameCore::LevelGraphValueSource* _TryGetGroupInitOverrideValueSource()
		{
			return ((::RPG::GameCore::LevelGraphValueSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF__TRYGETGROUPINITOVERRIDEVALUESOURCE_OFFSET))(this);
		}

		::System::Void set_OwnerGroupDef(::Class_1_A9C466B0994F2417* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A9C466B0994F2417*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_SET_OWNERGROUPDEF_OFFSET))(this, a1);
		}

		::Class_1_A9C466B0994F2417* get_OwnerGroupDef()
		{
			return ((::Class_1_A9C466B0994F2417*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_GET_OWNERGROUPDEF_OFFSET))(this);
		}

		::System::UInt32 get_GroupInstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_GET_GROUPINSTANCEID_OFFSET))(this);
		}

		::System::Void set_GroupInstanceID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_SET_GROUPINSTANCEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_InstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_GET_INSTANCEID_OFFSET))(this);
		}

		::System::Void set_InstanceID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_SET_INSTANCEID_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> get_GroupAndInstanceID()
		{
			return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_GET_GROUPANDINSTANCEID_OFFSET))(this);
		}

		::System::UInt32 get_ServerEntitiyID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_GET_SERVERENTITIYID_OFFSET))(this);
		}

		::System::Void set_ServerEntitiyID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_SET_SERVERENTITIYID_OFFSET))(this, a1);
		}

		::System::UInt32 get_LocalEntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_GET_LOCALENTITYID_OFFSET))(this);
		}

		::System::Void set_LocalEntityID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_SET_LOCALENTITYID_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_SET_POSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion get_Rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_Rotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_SET_ROTATION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_Scale()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_GET_SCALE_OFFSET))(this);
		}

		::System::Void set_Scale(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_SET_SCALE_OFFSET))(this, a1);
		}

		::RPG::Client::MapEntityType get_EntityType()
		{
			return ((::RPG::Client::MapEntityType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_GET_ENTITYTYPE_OFFSET))(this);
		}

		::System::Void set_EntityType(::RPG::Client::MapEntityType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapEntityType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_SET_ENTITYTYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLocal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_GET_ISLOCAL_OFFSET))(this);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_GET_ISNEW_OFFSET))(this);
		}

		::System::Void set_IsNew(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_SET_ISNEW_OFFSET))(this, a1);
		}

		::System::Void SetClassifyType(::RPG::GameCore::EntityClassifyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityClassifyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_SETCLASSIFYTYPE_OFFSET))(this, a1);
		}
	};
}
