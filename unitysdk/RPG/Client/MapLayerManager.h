#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class MapAnchorDef; }
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapEntityDef; }
namespace RPG::Client { class MapNpc; }
namespace RPG::Client { class MapProp; }
namespace RPG::GameCore { class AnchorInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelMinimapSection; }
namespace RPG::GameCore { class PropComponent; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_MAPLAYERMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9AFA740)
#define RPG_CLIENT_MAPLAYERMANAGER_GETAREALAYERLIST_OFFSET UNITYSDK_OFFSET(0x9AFBA40)
#define RPG_CLIENT_MAPLAYERMANAGER_GETDEFAULTLAYER_OFFSET UNITYSDK_OFFSET(0x9AFBB10)
#define RPG_CLIENT_MAPLAYERMANAGER_GETLAYERLIST_OFFSET UNITYSDK_OFFSET(0x9AFB9E0)
#define RPG_CLIENT_MAPLAYERMANAGER_GETLAYERNUMBER_OFFSET UNITYSDK_OFFSET(0x9AFB950)
#define RPG_CLIENT_MAPLAYERMANAGER_GETLAYER_1_OFFSET UNITYSDK_OFFSET(0x9AFAF30)
#define RPG_CLIENT_MAPLAYERMANAGER_GETLAYER_2_OFFSET UNITYSDK_OFFSET(0x9AFB090)
#define RPG_CLIENT_MAPLAYERMANAGER_GETLAYER_3_OFFSET UNITYSDK_OFFSET(0x9AFB260)
#define RPG_CLIENT_MAPLAYERMANAGER_GETLAYER_4_OFFSET UNITYSDK_OFFSET(0x9AFB2E0)
#define RPG_CLIENT_MAPLAYERMANAGER_GETLAYER_5_OFFSET UNITYSDK_OFFSET(0x9AFB5C0)
#define RPG_CLIENT_MAPLAYERMANAGER_GETLAYER_6_OFFSET UNITYSDK_OFFSET(0x9AFB620)
#define RPG_CLIENT_MAPLAYERMANAGER_GETLAYER_7_OFFSET UNITYSDK_OFFSET(0x9AFB8D0)
#define RPG_CLIENT_MAPLAYERMANAGER_GETLAYER_8_OFFSET UNITYSDK_OFFSET(0x9AFBCD0)
#define RPG_CLIENT_MAPLAYERMANAGER_GETLAYER_OFFSET UNITYSDK_OFFSET(0x9AFACA0)
#define RPG_CLIENT_MAPLAYERMANAGER_GETLOCALAVATARLAYER_OFFSET UNITYSDK_OFFSET(0x9AFAA60)
#define RPG_CLIENT_MAPLAYERMANAGER_GETMAPLAYER_OFFSET UNITYSDK_OFFSET(0x9AFA8B0)
#define RPG_CLIENT_MAPLAYERMANAGER_GET_PLAYERMAPLAYER_OFFSET UNITYSDK_OFFSET(0x9AFC870)
#define RPG_CLIENT_MAPLAYERMANAGER_SETCURRENTMAP_OFFSET UNITYSDK_OFFSET(0x9AFA860)
#define RPG_CLIENT_MAPLAYERMANAGER_SET_PLAYERMAPLAYER_OFFSET UNITYSDK_OFFSET(0x9AFC280)
#define RPG_CLIENT_MAPLAYERMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x9AFC880)
#define RPG_CLIENT_MAPLAYERMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x9AFA5C0)
#define RPG_CLIENT_MAPLAYERMANAGER__GETANCHORDEF_OFFSET UNITYSDK_OFFSET(0x9AFB3B0)
#define RPG_CLIENT_MAPLAYERMANAGER__GETLAYERBYGAMEENTITY_OFFSET UNITYSDK_OFFSET(0x9AFAE30)
#define RPG_CLIENT_MAPLAYERMANAGER__GETLAYERBYLOCALPLAYER_OFFSET UNITYSDK_OFFSET(0x9AFAAC0)
#define RPG_CLIENT_MAPLAYERMANAGER__GETLAYERBYMASK_OFFSET UNITYSDK_OFFSET(0x9AFBBF0)
#define RPG_CLIENT_MAPLAYERMANAGER__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0x9AFC2D0)
#define RPG_CLIENT_MAPLAYERMANAGER__ONCHARACTERSTEPONCOLLIDERCHANGE_OFFSET UNITYSDK_OFFSET(0x9AFC640)
#define RPG_CLIENT_MAPLAYERMANAGER__ONCHARACTERTELEPORT_OFFSET UNITYSDK_OFFSET(0x9AFC5A0)
#define RPG_CLIENT_MAPLAYERMANAGER__ONNPCSTATUSCHANGE_OFFSET UNITYSDK_OFFSET(0x9AFC320)
#define RPG_CLIENT_MAPLAYERMANAGER__RAYCASTTOGROUND_OFFSET UNITYSDK_OFFSET(0x9AFBF30)
#define RPG_CLIENT_MAPLAYERMANAGER__UPDATEPLAYERMAPLAYER_OFFSET UNITYSDK_OFFSET(0x9AFC1A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MapLayerManager_TypeDefinitionIndex = 49063;

	class MapLayerManager : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_INVALID_LAYER()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MapLayerManager_TypeDefinitionIndex)->GetStaticField(0x5610);
		}
		// static const ::System::Int32 MOVEABLE_LAYER = 0x0; // 0x0
		// static const ::System::Int32 FIRST_LAYER = 0x1; // 0x0
		// static const ::System::Int32 MOVEABLE_MASK = 0x1; // 0x0
		// static const ::System::Single RANGE_TIER_ONE; // 0x0
		// static const ::System::Single RANGE_TIER_TWO; // 0x0
		// static const ::System::Single RANGE_TIER_THREE; // 0x0
		// static const ::System::Single RANGE_TIER_FOUR; // 0x0
		::RPG::Client::AdventurePhase* _adventurePhase; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _monsterMapLayer; // 0x18
		::RPG::Client::MapDef* _currentMap; // 0x20
		::System::Int32 _playerMapLayer; // 0x28
		::System::Boolean NeedPlayerUpdateMapLayer; // 0x2C

		::System::Void _ctor(::RPG::Client::AdventurePhase* adventurePhase)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER__CTOR_OFFSET))(this, adventurePhase);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER__CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void SetCurrentMap(::RPG::Client::MapDef* mapDef)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER_SETCURRENTMAP_OFFSET))(this, mapDef);
		}

		static ::System::Int32 GetMapLayer(::RPG::Client::MapDef* mapDef, ::System::UInt32 groupID, ::System::UInt32 instanceID)
		{
			return ((::System::Int32(*)(::RPG::Client::MapDef*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER_GETMAPLAYER_OFFSET))(mapDef, groupID, instanceID);
		}

		::System::Int32 GetLocalAvatarLayer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER_GETLOCALAVATARLAYER_OFFSET))(this);
		}

		::System::Int32 GetLayer(::RPG::GameCore::PropComponent* prop)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER_GETLAYER_OFFSET))(this, prop);
		}

		::System::Int32 GetLayer_1(::RPG::Client::MapProp* prop)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER_GETLAYER_1_OFFSET))(this, prop);
		}

		::System::Int32 GetLayer_2(::RPG::Client::MapNpc* npc)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MapNpc*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER_GETLAYER_2_OFFSET))(this, npc);
		}

		::System::Int32 GetLayer_3(::RPG::Client::MapAnchorDef* anchor)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MapAnchorDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER_GETLAYER_3_OFFSET))(this, anchor);
		}

		::System::Int32 GetLayer_4(::RPG::GameCore::AnchorInfo* anchor)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::AnchorInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER_GETLAYER_4_OFFSET))(this, anchor);
		}

		::RPG::Client::MapAnchorDef* _GetAnchorDef(::RPG::GameCore::AnchorInfo* anchor)
		{
			return ((::RPG::Client::MapAnchorDef*(*)(::PVOID, ::RPG::GameCore::AnchorInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER__GETANCHORDEF_OFFSET))(this, anchor);
		}

		::System::Int32 GetLayer_5(::RPG::GameCore::LevelMinimapSection* section)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::LevelMinimapSection*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER_GETLAYER_5_OFFSET))(this, section);
		}

		::System::Int32 GetLayer_6(::RPG::GameCore::GameEntity* go)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER_GETLAYER_6_OFFSET))(this, go);
		}

		::System::Int32 GetLayer_7(::RPG::Client::MapEntityDef* mapEntityDef)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER_GETLAYER_7_OFFSET))(this, mapEntityDef);
		}

		::System::Int32 GetLayerNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER_GETLAYERNUMBER_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* GetLayerList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER_GETLAYERLIST_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* GetAreaLayerList(::System::UInt32 areaID)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER_GETAREALAYERLIST_OFFSET))(this, areaID);
		}

		::System::Int32 GetDefaultLayer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER_GETDEFAULTLAYER_OFFSET))(this);
		}

		::System::Int32 _GetLayerByMask(::System::Int32 mask)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER__GETLAYERBYMASK_OFFSET))(this, mask);
		}

		::System::Int32 GetLayer_8(::UnityEngine::Vector3 position)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER_GETLAYER_8_OFFSET))(this, position);
		}

		::System::Int32 _GetLayerByGameEntity(::RPG::GameCore::GameEntity* go)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER__GETLAYERBYGAMEENTITY_OFFSET))(this, go);
		}

		::System::Int32 _GetLayerByLocalPlayer(::RPG::GameCore::GameEntity* go)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER__GETLAYERBYLOCALPLAYER_OFFSET))(this, go);
		}

		::UnityEngine::Vector3 _RayCastToGround(::UnityEngine::Vector3 position)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER__RAYCASTTOGROUND_OFFSET))(this, position);
		}

		::System::Void _UpdatePlayerMapLayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER__UPDATEPLAYERMAPLAYER_OFFSET))(this);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER__ONADVENTUREPHASEENTERED_OFFSET))(this, arg);
		}

		::System::Void _OnNPCStatusChange(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER__ONNPCSTATUSCHANGE_OFFSET))(this, arg);
		}

		::System::Void _OnCharacterTeleport(::System::Object* userParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER__ONCHARACTERTELEPORT_OFFSET))(this, userParam);
		}

		::System::Void _OnCharacterStepOnColliderChange(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER__ONCHARACTERSTEPONCOLLIDERCHANGE_OFFSET))(this, param);
		}

		::System::Int32 get_PlayerMapLayer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER_GET_PLAYERMAPLAYER_OFFSET))(this);
		}

		::System::Void set_PlayerMapLayer(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER_SET_PLAYERMAPLAYER_OFFSET))(this, value);
		}
	};
}
