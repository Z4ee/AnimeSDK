#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MapObjectState.h"
#include "unitysdk/RPG/GameCore/EntityClassifyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_305;
class Class_2_D905714C1E15C1C8;
namespace RPG::Client { class MapEntityDef; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_75C90DAFEEA96564_ASYNCLOAD_OFFSET UNITYSDK_OFFSET(0x16CC7350)
#define CLASS_1_75C90DAFEEA96564_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16CC7130)
#define CLASS_1_75C90DAFEEA96564_GET_ENTITYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x16CC7010)
#define CLASS_1_75C90DAFEEA96564_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0x16CC6FA0)
#define CLASS_1_75C90DAFEEA96564_GET_GROUPINSTANCEID_OFFSET UNITYSDK_OFFSET(0x16CC6F30)
#define CLASS_1_75C90DAFEEA96564_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x16CC6F40)
#define CLASS_1_75C90DAFEEA96564_GET_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0x16CC7080)
#define CLASS_1_75C90DAFEEA96564_GET_ISLOADED_OFFSET UNITYSDK_OFFSET(0x16CC7070)
#define CLASS_1_75C90DAFEEA96564_GET_ISTOBEREMOVED_OFFSET UNITYSDK_OFFSET(0x16CC7090)
#define CLASS_1_75C90DAFEEA96564_GET_MAPENTITYDEF_OFFSET UNITYSDK_OFFSET(0x16CC70C0)
#define CLASS_1_75C90DAFEEA96564_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x16CC6F70)
#define CLASS_1_75C90DAFEEA96564_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x16CC6FB0)
#define CLASS_1_75C90DAFEEA96564_GET_SCALE_OFFSET UNITYSDK_OFFSET(0x16CC6FD0)
#define CLASS_1_75C90DAFEEA96564_GET_SERVERENTITYID_OFFSET UNITYSDK_OFFSET(0x16CC6F50)
#define CLASS_1_75C90DAFEEA96564_GET_STATE_OFFSET UNITYSDK_OFFSET(0x16CC70B0)
#define CLASS_1_75C90DAFEEA96564_METHOD_1_1622EF55C818E85D_OFFSET UNITYSDK_OFFSET(0x16CC88C0)
#define CLASS_1_75C90DAFEEA96564_METHOD_1_18A7BF8B592973BC_OFFSET UNITYSDK_OFFSET(0x16CC7BC0)
#define CLASS_1_75C90DAFEEA96564_METHOD_1_42C5BADE1C9EFC80_OFFSET UNITYSDK_OFFSET(0x16CC7D90)
#define CLASS_1_75C90DAFEEA96564_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x16CC7AB0)
#define CLASS_1_75C90DAFEEA96564_METHOD_1_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0x16CC6F20)
#define CLASS_1_75C90DAFEEA96564_METHOD_1_60B5931C93B2E56E_OFFSET UNITYSDK_OFFSET(0x16CC7B40)
#define CLASS_1_75C90DAFEEA96564_METHOD_1_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0x16CC8600)
#define CLASS_1_75C90DAFEEA96564_METHOD_1_8EFE8A9CEE2E7418_OFFSET UNITYSDK_OFFSET(0x16CC7EC0)
#define CLASS_1_75C90DAFEEA96564_METHOD_1_9DA0D46365FF3B6A_OFFSET UNITYSDK_OFFSET(0x16CC8A80)
#define CLASS_1_75C90DAFEEA96564_METHOD_1_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x16CC7000)
#define CLASS_1_75C90DAFEEA96564_METHOD_1_BF6E88825CDB98CA_OFFSET UNITYSDK_OFFSET(0x16CC7E20)
#define CLASS_1_75C90DAFEEA96564_METHOD_1_C706B1EC6D2E1C64_OFFSET UNITYSDK_OFFSET(0x16CC7250)
#define CLASS_1_75C90DAFEEA96564_METHOD_1_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0x16CC70D0)
#define CLASS_1_75C90DAFEEA96564_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x16CC6F90)
#define CLASS_1_75C90DAFEEA96564_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x16CC6FC0)
#define CLASS_1_75C90DAFEEA96564_SET_SCALE_OFFSET UNITYSDK_OFFSET(0x16CC6FF0)
#define CLASS_1_75C90DAFEEA96564_SET_STATE_OFFSET UNITYSDK_OFFSET(0x16CC70A0)
#define CLASS_1_75C90DAFEEA96564_SYNCLOAD_OFFSET UNITYSDK_OFFSET(0x16CC73E0)
#define CLASS_1_75C90DAFEEA96564_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16CC8800)
#define CLASS_1_75C90DAFEEA96564__BEGINFADEOUT_B__51_0_OFFSET UNITYSDK_OFFSET(0x16CC8AD0)
#define CLASS_1_75C90DAFEEA96564__CTOR_OFFSET UNITYSDK_OFFSET(0x16CC70F0)

inline static constexpr unsigned int Class_1_75C90DAFEEA96564_TypeDefinitionIndex = 60983;

class Class_1_75C90DAFEEA96564 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x10
	::Class_2_D905714C1E15C1C8* KBPHHANBMAN; // 0x18
	::System::Boolean PIBHMHOCEDH; // 0x20
	::RPG::Client::MapObjectState _State_k__BackingField; // 0x24
	::UnityEngine::Vector3 _Position_k__BackingField; // 0x28
	::UnityEngine::Vector3 _Scale_k__BackingField; // 0x34
	::UnityEngine::Quaternion _Rotation_k__BackingField; // 0x40

	::System::Void _ctor(::Class_2_D905714C1E15C1C8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D905714C1E15C1C8*))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564__CTOR_OFFSET))(this, a1);
	}

	::Class_2_D905714C1E15C1C8* Method_1_43A46E5F9FAC62B8()
	{
		return ((::Class_2_D905714C1E15C1C8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_METHOD_1_43A46E5F9FAC62B8_OFFSET))(this);
	}

	::System::UInt32 get_GroupInstanceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_GET_GROUPINSTANCEID_OFFSET))(this);
	}

	::System::UInt32 get_InstanceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_GET_INSTANCEID_OFFSET))(this);
	}

	::System::UInt32 get_ServerEntityID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_GET_SERVERENTITYID_OFFSET))(this);
	}

	::UnityEngine::Vector3 get_Position()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_GET_POSITION_OFFSET))(this);
	}

	::System::Void set_Position(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_SET_POSITION_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* get_Entity()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_GET_ENTITY_OFFSET))(this);
	}

	::UnityEngine::Quaternion get_Rotation()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_GET_ROTATION_OFFSET))(this);
	}

	::System::Void set_Rotation(::UnityEngine::Quaternion a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_SET_ROTATION_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_Scale()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_GET_SCALE_OFFSET))(this);
	}

	::System::Void set_Scale(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_SET_SCALE_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_1_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_METHOD_1_B1445E8504415D4D_OFFSET))(this);
	}

	::System::UInt32 get_EntityRuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_GET_ENTITYRUNTIMEID_OFFSET))(this);
	}

	::System::Boolean get_IsLoaded()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_GET_ISLOADED_OFFSET))(this);
	}

	::System::Boolean get_IsDisposed()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_GET_ISDISPOSED_OFFSET))(this);
	}

	::System::Boolean get_IsToBeRemoved()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_GET_ISTOBEREMOVED_OFFSET))(this);
	}

	::System::Void set_State(::RPG::Client::MapObjectState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapObjectState))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_SET_STATE_OFFSET))(this, a1);
	}

	::RPG::Client::MapObjectState get_State()
	{
		return ((::RPG::Client::MapObjectState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_GET_STATE_OFFSET))(this);
	}

	::RPG::Client::MapEntityDef* get_MapEntityDef()
	{
		return ((::RPG::Client::MapEntityDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_GET_MAPENTITYDEF_OFFSET))(this);
	}

	::System::UInt32 Method_1_D978819B0A4871A0()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_METHOD_1_D978819B0A4871A0_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_DISPOSE_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_305*>* AsyncLoad()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_305*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_ASYNCLOAD_OFFSET))(this);
	}

	::System::Void SyncLoad()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_SYNCLOAD_OFFSET))(this);
	}

	::System::Boolean Method_1_60B5931C93B2E56E(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_METHOD_1_60B5931C93B2E56E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_18A7BF8B592973BC(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_METHOD_1_18A7BF8B592973BC_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_42C5BADE1C9EFC80()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_METHOD_1_42C5BADE1C9EFC80_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_C706B1EC6D2E1C64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_METHOD_1_C706B1EC6D2E1C64_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_305*>* Method_1_BF6E88825CDB98CA(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_305*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_METHOD_1_BF6E88825CDB98CA_OFFSET))(this, a1);
	}

	::System::String* Method_1_8EFE8A9CEE2E7418()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_METHOD_1_8EFE8A9CEE2E7418_OFFSET))(this);
	}

	::System::Void Method_1_6D93101E4CE10A96()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_METHOD_1_6D93101E4CE10A96_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_1_1622EF55C818E85D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_METHOD_1_1622EF55C818E85D_OFFSET))(this, a1);
	}

	::RPG::GameCore::EntityClassifyType Method_1_9DA0D46365FF3B6A()
	{
		return ((::RPG::GameCore::EntityClassifyType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_METHOD_1_9DA0D46365FF3B6A_OFFSET))(this);
	}

	::System::Void _BeginFadeOut_b__51_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564__BEGINFADEOUT_B__51_0_OFFSET))(this);
	}
};
