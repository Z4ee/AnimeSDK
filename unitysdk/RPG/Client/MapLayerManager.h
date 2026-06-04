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

#define RPG_CLIENT_MAPLAYERMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBEDBD00)
#define RPG_CLIENT_MAPLAYERMANAGER_GETAREALAYERLIST_OFFSET UNITYSDK_OFFSET(0xBEDD1A0)
#define RPG_CLIENT_MAPLAYERMANAGER_GETDEFAULTLAYER_OFFSET UNITYSDK_OFFSET(0xBEDD270)
#define RPG_CLIENT_MAPLAYERMANAGER_GETLAYERLIST_OFFSET UNITYSDK_OFFSET(0xBEDD140)
#define RPG_CLIENT_MAPLAYERMANAGER_GETLAYERNUMBER_OFFSET UNITYSDK_OFFSET(0xBEDD0B0)
#define RPG_CLIENT_MAPLAYERMANAGER_GETLAYER_1_OFFSET UNITYSDK_OFFSET(0xBEDC580)
#define RPG_CLIENT_MAPLAYERMANAGER_GETLAYER_2_OFFSET UNITYSDK_OFFSET(0xBEDC6E0)
#define RPG_CLIENT_MAPLAYERMANAGER_GETLAYER_3_OFFSET UNITYSDK_OFFSET(0xBEDC8B0)
#define RPG_CLIENT_MAPLAYERMANAGER_GETLAYER_4_OFFSET UNITYSDK_OFFSET(0xBEDC930)
#define RPG_CLIENT_MAPLAYERMANAGER_GETLAYER_5_OFFSET UNITYSDK_OFFSET(0xBEDCC90)
#define RPG_CLIENT_MAPLAYERMANAGER_GETLAYER_6_OFFSET UNITYSDK_OFFSET(0xBEDCCF0)
#define RPG_CLIENT_MAPLAYERMANAGER_GETLAYER_7_OFFSET UNITYSDK_OFFSET(0xBEDD030)
#define RPG_CLIENT_MAPLAYERMANAGER_GETLAYER_8_OFFSET UNITYSDK_OFFSET(0xBEDD400)
#define RPG_CLIENT_MAPLAYERMANAGER_GETLAYER_OFFSET UNITYSDK_OFFSET(0xBEDC310)
#define RPG_CLIENT_MAPLAYERMANAGER_GETLOCALAVATARLAYER_OFFSET UNITYSDK_OFFSET(0xBEDC0D0)
#define RPG_CLIENT_MAPLAYERMANAGER_GETMAPLAYER_OFFSET UNITYSDK_OFFSET(0xBEDBEB0)
#define RPG_CLIENT_MAPLAYERMANAGER_GET_PLAYERMAPLAYER_OFFSET UNITYSDK_OFFSET(0xBEDDFD0)
#define RPG_CLIENT_MAPLAYERMANAGER_SETCURRENTMAP_OFFSET UNITYSDK_OFFSET(0xBEDBE60)
#define RPG_CLIENT_MAPLAYERMANAGER_SET_PLAYERMAPLAYER_OFFSET UNITYSDK_OFFSET(0xBEDD9B0)
#define RPG_CLIENT_MAPLAYERMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xBEDDFE0)
#define RPG_CLIENT_MAPLAYERMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xBEDBB40)
#define RPG_CLIENT_MAPLAYERMANAGER__GETANCHORDEF_OFFSET UNITYSDK_OFFSET(0xBEDCA00)
#define RPG_CLIENT_MAPLAYERMANAGER__GETLAYERBYGAMEENTITY_OFFSET UNITYSDK_OFFSET(0xBEDC490)
#define RPG_CLIENT_MAPLAYERMANAGER__GETLAYERBYLOCALPLAYER_OFFSET UNITYSDK_OFFSET(0xBEDC130)
#define RPG_CLIENT_MAPLAYERMANAGER__GETLAYERBYMASK_OFFSET UNITYSDK_OFFSET(0xBEDD350)
#define RPG_CLIENT_MAPLAYERMANAGER__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0xBEDDA00)
#define RPG_CLIENT_MAPLAYERMANAGER__ONCHARACTERSTEPONCOLLIDERCHANGE_OFFSET UNITYSDK_OFFSET(0xBEDDDA0)
#define RPG_CLIENT_MAPLAYERMANAGER__ONCHARACTERTELEPORT_OFFSET UNITYSDK_OFFSET(0xBEDDCF0)
#define RPG_CLIENT_MAPLAYERMANAGER__ONNPCSTATUSCHANGE_OFFSET UNITYSDK_OFFSET(0xBEDDA50)
#define RPG_CLIENT_MAPLAYERMANAGER__RAYCASTTOGROUND_OFFSET UNITYSDK_OFFSET(0xBEDD660)
#define RPG_CLIENT_MAPLAYERMANAGER__UPDATEPLAYERMAPLAYER_OFFSET UNITYSDK_OFFSET(0xBEDD8D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MapLayerManager_TypeDefinitionIndex = 56613;

	class MapLayerManager : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_INVALID_LAYER()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MapLayerManager_TypeDefinitionIndex)->GetStaticField(0x8FE0);
		}
		// static const ::System::Int32 MOVEABLE_LAYER = 0x0; // 0x0
		// static const ::System::Int32 FIRST_LAYER = 0x1; // 0x0
		// static const ::System::Int32 MOVEABLE_MASK = 0x1; // 0x0
		// static const ::System::Single RANGE_TIER_ONE; // 0x0
		// static const ::System::Single RANGE_TIER_TWO; // 0x0
		// static const ::System::Single RANGE_TIER_THREE; // 0x0
		// static const ::System::Single RANGE_TIER_FOUR; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _monsterMapLayer; // 0x10
		::RPG::Client::MapDef* _currentMap; // 0x18
		::RPG::Client::AdventurePhase* _adventurePhase; // 0x20
		::System::Boolean NeedPlayerUpdateMapLayer; // 0x28
		::System::Int32 _playerMapLayer; // 0x2C

		::System::Void _ctor(::RPG::Client::AdventurePhase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER__CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void SetCurrentMap(::RPG::Client::MapDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER_SETCURRENTMAP_OFFSET))(this, a1);
		}

		static ::System::Int32 GetMapLayer(::RPG::Client::MapDef* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Int32(*)(::RPG::Client::MapDef*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER_GETMAPLAYER_OFFSET))(a1, a2, a3);
		}

		::System::Int32 GetLocalAvatarLayer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER_GETLOCALAVATARLAYER_OFFSET))(this);
		}

		::System::Int32 GetLayer(::RPG::GameCore::PropComponent* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER_GETLAYER_OFFSET))(this, a1);
		}

		::System::Int32 GetLayer_1(::RPG::Client::MapProp* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER_GETLAYER_1_OFFSET))(this, a1);
		}

		::System::Int32 GetLayer_2(::RPG::Client::MapNpc* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MapNpc*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER_GETLAYER_2_OFFSET))(this, a1);
		}

		::System::Int32 GetLayer_3(::RPG::Client::MapAnchorDef* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MapAnchorDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER_GETLAYER_3_OFFSET))(this, a1);
		}

		::System::Int32 GetLayer_4(::RPG::GameCore::AnchorInfo* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::AnchorInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER_GETLAYER_4_OFFSET))(this, a1);
		}

		::RPG::Client::MapAnchorDef* _GetAnchorDef(::RPG::GameCore::AnchorInfo* a1)
		{
			return ((::RPG::Client::MapAnchorDef*(*)(::PVOID, ::RPG::GameCore::AnchorInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER__GETANCHORDEF_OFFSET))(this, a1);
		}

		::System::Int32 GetLayer_5(::RPG::GameCore::LevelMinimapSection* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::LevelMinimapSection*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER_GETLAYER_5_OFFSET))(this, a1);
		}

		::System::Int32 GetLayer_6(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER_GETLAYER_6_OFFSET))(this, a1);
		}

		::System::Int32 GetLayer_7(::RPG::Client::MapEntityDef* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER_GETLAYER_7_OFFSET))(this, a1);
		}

		::System::Int32 GetLayerNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER_GETLAYERNUMBER_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* GetLayerList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER_GETLAYERLIST_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* GetAreaLayerList(::System::UInt32 a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER_GETAREALAYERLIST_OFFSET))(this, a1);
		}

		::System::Int32 GetDefaultLayer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER_GETDEFAULTLAYER_OFFSET))(this);
		}

		::System::Int32 _GetLayerByMask(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER__GETLAYERBYMASK_OFFSET))(this, a1);
		}

		::System::Int32 GetLayer_8(::UnityEngine::Vector3 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER_GETLAYER_8_OFFSET))(this, a1);
		}

		::System::Int32 _GetLayerByGameEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER__GETLAYERBYGAMEENTITY_OFFSET))(this, a1);
		}

		::System::Int32 _GetLayerByLocalPlayer(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER__GETLAYERBYLOCALPLAYER_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 _RayCastToGround(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER__RAYCASTTOGROUND_OFFSET))(this, a1);
		}

		::System::Void _UpdatePlayerMapLayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER__UPDATEPLAYERMAPLAYER_OFFSET))(this);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER__ONADVENTUREPHASEENTERED_OFFSET))(this, a1);
		}

		::System::Void _OnNPCStatusChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER__ONNPCSTATUSCHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnCharacterTeleport(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER__ONCHARACTERTELEPORT_OFFSET))(this, a1);
		}

		::System::Void _OnCharacterStepOnColliderChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER__ONCHARACTERSTEPONCOLLIDERCHANGE_OFFSET))(this, a1);
		}

		::System::Int32 get_PlayerMapLayer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER_GET_PLAYERMAPLAYER_OFFSET))(this);
		}

		::System::Void set_PlayerMapLayer(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPLAYERMANAGER_SET_PLAYERMAPLAYER_OFFSET))(this, a1);
		}
	};
}
