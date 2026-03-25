#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MapObjectState.h"
#include "unitysdk/RPG/GameCore/EntityClassifyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_260;
class Class_0_16E4307DCC419505_337;
class Class_1_6721BACDEDB5B76E;
namespace RPG::Client { class MapEntityDef; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define RPG_CLIENT_MAPNPC_ASYNCLOAD_OFFSET UNITYSDK_OFFSET(0x9B01270)
#define RPG_CLIENT_MAPNPC_BEGINFADEIN_OFFSET UNITYSDK_OFFSET(0x9B01530)
#define RPG_CLIENT_MAPNPC_BEGINFADEOUT_OFFSET UNITYSDK_OFFSET(0x9B01760)
#define RPG_CLIENT_MAPNPC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9B00FA0)
#define RPG_CLIENT_MAPNPC_GET_ENTITYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x9B01C70)
#define RPG_CLIENT_MAPNPC_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0x9AFA5B0)
#define RPG_CLIENT_MAPNPC_GET_GROUPINSTANCEID_OFFSET UNITYSDK_OFFSET(0x9B01B70)
#define RPG_CLIENT_MAPNPC_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x9B01B90)
#define RPG_CLIENT_MAPNPC_GET_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0x9B01260)
#define RPG_CLIENT_MAPNPC_GET_ISLOADED_OFFSET UNITYSDK_OFFSET(0x9B01CD0)
#define RPG_CLIENT_MAPNPC_GET_ISNEEDFADEIN_OFFSET UNITYSDK_OFFSET(0x9B01D70)
#define RPG_CLIENT_MAPNPC_GET_ISNEEDFADEOUT_OFFSET UNITYSDK_OFFSET(0x9B01E40)
#define RPG_CLIENT_MAPNPC_GET_ISTOBEREMOVED_OFFSET UNITYSDK_OFFSET(0x9B012E0)
#define RPG_CLIENT_MAPNPC_GET_MAPENTITYDEF_OFFSET UNITYSDK_OFFSET(0x9B01D00)
#define RPG_CLIENT_MAPNPC_GET_MAPNPCDEF_OFFSET UNITYSDK_OFFSET(0x9B01B60)
#define RPG_CLIENT_MAPNPC_GET_NPCID_OFFSET UNITYSDK_OFFSET(0x9B01BD0)
#define RPG_CLIENT_MAPNPC_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x9B01BF0)
#define RPG_CLIENT_MAPNPC_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x9B01C20)
#define RPG_CLIENT_MAPNPC_GET_SERVERENTITYID_OFFSET UNITYSDK_OFFSET(0x9B01BB0)
#define RPG_CLIENT_MAPNPC_GET_STATE_OFFSET UNITYSDK_OFFSET(0x9B01CF0)
#define RPG_CLIENT_MAPNPC_GET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0x9B01C50)
#define RPG_CLIENT_MAPNPC_GET__ENTITY_OFFSET UNITYSDK_OFFSET(0x9B01EC0)
#define RPG_CLIENT_MAPNPC_INITFADEHIDDEN_OFFSET UNITYSDK_OFFSET(0x9B01400)
#define RPG_CLIENT_MAPNPC_REFRESHENTITY_OFFSET UNITYSDK_OFFSET(0x9B00B30)
#define RPG_CLIENT_MAPNPC_SET_ISNEEDFADEIN_OFFSET UNITYSDK_OFFSET(0x9B01D10)
#define RPG_CLIENT_MAPNPC_SET_ISNEEDFADEOUT_OFFSET UNITYSDK_OFFSET(0x9B01DE0)
#define RPG_CLIENT_MAPNPC_SET_STATE_OFFSET UNITYSDK_OFFSET(0x9B01CE0)
#define RPG_CLIENT_MAPNPC_SET__ENTITY_OFFSET UNITYSDK_OFFSET(0x9B01EB0)
#define RPG_CLIENT_MAPNPC_STARTLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0x9B012F0)
#define RPG_CLIENT_MAPNPC_SYNCLOAD_OFFSET UNITYSDK_OFFSET(0x9B00DB0)
#define RPG_CLIENT_MAPNPC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9B018C0)
#define RPG_CLIENT_MAPNPC__CTOR_OFFSET UNITYSDK_OFFSET(0x9B00B20)
#define RPG_CLIENT_MAPNPC__GETENTITYCLASSIFYTYPE_OFFSET UNITYSDK_OFFSET(0x9B01B20)
#define RPG_CLIENT_MAPNPC__ONASYNCLOADFINISH_OFFSET UNITYSDK_OFFSET(0x9B01960)
#define RPG_CLIENT_MAPNPC___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9B01ED0)

namespace RPG::Client
{
	inline static constexpr unsigned int MapNpc_TypeDefinitionIndex = 49343;

	class MapNpc : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* __Entity_k__BackingField; // 0x10
		::RPG::Client::MapNpcDef* _mapNpcDef; // 0x18
		::Class_1_6721BACDEDB5B76E* _DelayDispose; // 0x20
		::RPG::Client::MapObjectState _State_k__BackingField; // 0x28

		::System::Void _ctor(::RPG::Client::MapNpcDef* mapNpcDef)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPC__CTOR_OFFSET))(this, mapNpcDef);
		}

		::System::Void RefreshEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPC_REFRESHENTITY_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPC_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_260*>* AsyncLoad()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_260*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPC_ASYNCLOAD_OFFSET))(this);
		}

		::System::Void SyncLoad()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPC_SYNCLOAD_OFFSET))(this);
		}

		::System::Void StartLevelGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPC_STARTLEVELGRAPH_OFFSET))(this);
		}

		::System::Void InitFadeHidden()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPC_INITFADEHIDDEN_OFFSET))(this);
		}

		::System::Void BeginFadein()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPC_BEGINFADEIN_OFFSET))(this);
		}

		::System::Void BeginFadeOut(::System::Action_1<::Class_0_16E4307DCC419505_337*>* onFadingFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_0_16E4307DCC419505_337*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPC_BEGINFADEOUT_OFFSET))(this, onFadingFinish);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPC_TOSTRING_OFFSET))(this);
		}

		::System::Void _OnAsyncLoadFinish(::RPG::GameCore::GameEntity* loadedEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPC__ONASYNCLOADFINISH_OFFSET))(this, loadedEntity);
		}

		::RPG::GameCore::EntityClassifyType _GetEntityClassifyType()
		{
			return ((::RPG::GameCore::EntityClassifyType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPC__GETENTITYCLASSIFYTYPE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_Entity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPC_GET_ENTITY_OFFSET))(this);
		}

		::RPG::Client::MapNpcDef* get_MapNpcDef()
		{
			return ((::RPG::Client::MapNpcDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPC_GET_MAPNPCDEF_OFFSET))(this);
		}

		::System::UInt32 get_GroupInstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPC_GET_GROUPINSTANCEID_OFFSET))(this);
		}

		::System::UInt32 get_InstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPC_GET_INSTANCEID_OFFSET))(this);
		}

		::System::UInt32 get_ServerEntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPC_GET_SERVERENTITYID_OFFSET))(this);
		}

		::System::UInt32 get_NPCID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPC_GET_NPCID_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPC_GET_POSITION_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_Rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPC_GET_ROTATION_OFFSET))(this);
		}

		::System::String* get_UniqueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPC_GET_UNIQUENAME_OFFSET))(this);
		}

		::System::UInt32 get_EntityRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPC_GET_ENTITYRUNTIMEID_OFFSET))(this);
		}

		::System::Boolean get_IsLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPC_GET_ISLOADED_OFFSET))(this);
		}

		::System::Boolean get_IsDisposed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPC_GET_ISDISPOSED_OFFSET))(this);
		}

		::System::Boolean get_IsToBeRemoved()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPC_GET_ISTOBEREMOVED_OFFSET))(this);
		}

		::System::Void set_State(::RPG::Client::MapObjectState value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapObjectState))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPC_SET_STATE_OFFSET))(this, value);
		}

		::RPG::Client::MapObjectState get_State()
		{
			return ((::RPG::Client::MapObjectState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPC_GET_STATE_OFFSET))(this);
		}

		::RPG::Client::MapEntityDef* get_MapEntityDef()
		{
			return ((::RPG::Client::MapEntityDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPC_GET_MAPENTITYDEF_OFFSET))(this);
		}

		::System::Void set_IsNeedFadein(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPC_SET_ISNEEDFADEIN_OFFSET))(this, value);
		}

		::System::Boolean get_IsNeedFadein()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPC_GET_ISNEEDFADEIN_OFFSET))(this);
		}

		::System::Void set_IsNeedFadeout(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPC_SET_ISNEEDFADEOUT_OFFSET))(this, value);
		}

		::System::Boolean get_IsNeedFadeout()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPC_GET_ISNEEDFADEOUT_OFFSET))(this);
		}

		::System::Void set__Entity(::RPG::GameCore::GameEntity* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPC_SET__ENTITY_OFFSET))(this, value);
		}

		::RPG::GameCore::GameEntity* get__Entity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPC_GET__ENTITY_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPC___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}
