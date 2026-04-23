#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MapPropDef; }
namespace RPG::Client { class MonoMap3DTouch; }
namespace RPG::Client { class UIMap3DContainer; }
namespace RPG::Client::NavMap { class Cartography3DBase; }
namespace RPG::Client::NavMap { class ICartography3D; }
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace RPG::Client::NavMap { class NavMap3DIconData; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MAP3DUTILS_COMPUTEPLAYERWORLDROTATION_OFFSET UNITYSDK_OFFSET(0xA7D5500)
#define RPG_CLIENT_MAP3DUTILS_GETBYATTACH_OFFSET UNITYSDK_OFFSET(0xA7D67F0)
#define RPG_CLIENT_MAP3DUTILS_GETMAINCAMERAWORLDROTATION_OFFSET UNITYSDK_OFFSET(0xA7D5B70)
#define RPG_CLIENT_MAP3DUTILS_GETMAPROTATIONCHARGERMINIMAPICON_OFFSET UNITYSDK_OFFSET(0xA7D6360)
#define RPG_CLIENT_MAP3DUTILS_GETMAPROTATIONVOLUMEMINIMAPICON_OFFSET UNITYSDK_OFFSET(0xA7D5D80)
#define RPG_CLIENT_MAP3DUTILS_GETROTATABLEREGIONCIRCLEOPACITY_OFFSET UNITYSDK_OFFSET(0xA7D3FF0)
#define RPG_CLIENT_MAP3DUTILS_GETROTATABLEREGIONITEMCIRCLESCALE_OFFSET UNITYSDK_OFFSET(0xA7D4A90)
#define RPG_CLIENT_MAP3DUTILS_GETROTATABLEREGIONITEMICONOPACITY_OFFSET UNITYSDK_OFFSET(0xA7D4070)
#define RPG_CLIENT_MAP3DUTILS_GETROTATABLEREGIONITEMOPACITY_OFFSET UNITYSDK_OFFSET(0xA7D3230)
#define RPG_CLIENT_MAP3DUTILS_GETROTATABLEREGIONITEMWORLDPOSITIONWITHOFFSET_OFFSET UNITYSDK_OFFSET(0xA7D46B0)
#define RPG_CLIENT_MAP3DUTILS_GETROTATABLEREGIONITEMWORLDPOSITION_1_OFFSET UNITYSDK_OFFSET(0xA7D4560)
#define RPG_CLIENT_MAP3DUTILS_GETROTATABLEREGIONITEMWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0xA7D43E0)
#define RPG_CLIENT_MAP3DUTILS_GETROTATABLEREGIONITEMWORLDROTATION_OFFSET UNITYSDK_OFFSET(0xA7D41C0)
#define RPG_CLIENT_MAP3DUTILS_ISINCURFLOOR3DAREA_OFFSET UNITYSDK_OFFSET(0xA7D2E80)
#define RPG_CLIENT_MAP3DUTILS_SHOULDSHOW3DMAP_OFFSET UNITYSDK_OFFSET(0xA7D3120)
#define RPG_CLIENT_MAP3DUTILS_SMOOTHLYSETOPACITY_OFFSET UNITYSDK_OFFSET(0xA7D4FA0)
#define RPG_CLIENT_MAP3DUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0xA7D6CC0)
#define RPG_CLIENT_MAP3DUTILS__GETOBJECTOPACITY_OFFSET UNITYSDK_OFFSET(0xA7D6AB0)
#define RPG_CLIENT_MAP3DUTILS__GETPROPID_OFFSET UNITYSDK_OFFSET(0xA7D6980)
#define RPG_CLIENT_MAP3DUTILS__GETRAWOPACITY_OFFSET UNITYSDK_OFFSET(0xA7D3400)
#define RPG_CLIENT_MAP3DUTILS__SETOBJECTOPACITY_OFFSET UNITYSDK_OFFSET(0xA7D51C0)
#define RPG_CLIENT_MAP3DUTILS__SHOULDOPACITYIGNOREPOSE_OFFSET UNITYSDK_OFFSET(0xA7D69E0)
#define RPG_CLIENT_MAP3DUTILS__SMOOTHLYSETOPACITY_OFFSET UNITYSDK_OFFSET(0xA7D5450)

namespace RPG::Client
{
	inline static constexpr unsigned int Map3DUtils_TypeDefinitionIndex = 63643;

	class Map3DUtils : public ::System::Object
	{
	public:
		static ::RPG::Client::MonoMap3DTouch** StaticGet_s_MonoMap3DTouch()
		{
			return (::RPG::Client::MonoMap3DTouch**)Il2CppClass::FromTypeDefinitionIndex(Map3DUtils_TypeDefinitionIndex)->GetStaticField(0xCA70);
		}
		static ::UnityEngine::Transform** StaticGet_s_Map3DTransform()
		{
			return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Map3DUtils_TypeDefinitionIndex)->GetStaticField(0xCA78);
		}
		static ::RPG::Client::UIMap3DContainer** StaticGet_s_Map3DContainer()
		{
			return (::RPG::Client::UIMap3DContainer**)Il2CppClass::FromTypeDefinitionIndex(Map3DUtils_TypeDefinitionIndex)->GetStaticField(0xCA80);
		}
		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_s_RayHits()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(Map3DUtils_TypeDefinitionIndex)->GetStaticField(0xCA88);
		}
		static ::UnityEngine::Vector3* StaticGet_s_ScreenPosOffset()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Map3DUtils_TypeDefinitionIndex)->GetStaticField(0x4D40);
		}
		static ::System::Int32* StaticGet_s_Color()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Map3DUtils_TypeDefinitionIndex)->GetStaticField(0x4D4C);
		}
		static ::System::Int32* StaticGet_s_Opacity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Map3DUtils_TypeDefinitionIndex)->GetStaticField(0x4D50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsInCurFloor3DArea(::System::Int32 areaID)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS_ISINCURFLOOR3DAREA_OFFSET))(areaID);
		}

		static ::System::Boolean ShouldShow3DMap()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS_SHOULDSHOW3DMAP_OFFSET))();
		}

		static ::System::Single GetRotatableRegionItemOpacity(::RPG::Client::NavMap::NavMap3DIconData* itemMap3DIconData, ::UnityEngine::GameObject* itemGo)
		{
			return ((::System::Single(*)(::RPG::Client::NavMap::NavMap3DIconData*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS_GETROTATABLEREGIONITEMOPACITY_OFFSET))(itemMap3DIconData, itemGo);
		}

		static ::System::Single GetRotatableRegionCircleOpacity(::RPG::Client::NavMap::NavMap3DIconData* itemMap3DIconData)
		{
			return ((::System::Single(*)(::RPG::Client::NavMap::NavMap3DIconData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS_GETROTATABLEREGIONCIRCLEOPACITY_OFFSET))(itemMap3DIconData);
		}

		static ::System::Single GetRotatableRegionItemIconOpacity(::RPG::Client::NavMap::NavMap3DIconData* itemMap3DIconData)
		{
			return ((::System::Single(*)(::RPG::Client::NavMap::NavMap3DIconData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS_GETROTATABLEREGIONITEMICONOPACITY_OFFSET))(itemMap3DIconData);
		}

		static ::UnityEngine::Quaternion GetRotatableRegionItemWorldRotation(::RPG::Client::NavMap::NavMap3DIconData* itemMap3DIconData)
		{
			return ((::UnityEngine::Quaternion(*)(::RPG::Client::NavMap::NavMap3DIconData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS_GETROTATABLEREGIONITEMWORLDROTATION_OFFSET))(itemMap3DIconData);
		}

		static ::UnityEngine::Vector3 GetRotatableRegionItemWorldPosition(::RPG::Client::NavMap::ICartography3D* cartography, ::UnityEngine::Vector3 sceneWorldPos)
		{
			return ((::UnityEngine::Vector3(*)(::RPG::Client::NavMap::ICartography3D*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS_GETROTATABLEREGIONITEMWORLDPOSITION_OFFSET))(cartography, sceneWorldPos);
		}

		static ::UnityEngine::Vector3 GetRotatableRegionItemWorldPosition_1(::RPG::Client::NavMap::NavMap3DIconData* itemMap3DIconData, ::System::Boolean useRawPosition)
		{
			return ((::UnityEngine::Vector3(*)(::RPG::Client::NavMap::NavMap3DIconData*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS_GETROTATABLEREGIONITEMWORLDPOSITION_1_OFFSET))(itemMap3DIconData, useRawPosition);
		}

		static ::UnityEngine::Vector3 GetRotatableRegionItemWorldPositionWithOffset(::RPG::Client::NavMap::NavMap3DIconData* itemMap3DIconData)
		{
			return ((::UnityEngine::Vector3(*)(::RPG::Client::NavMap::NavMap3DIconData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS_GETROTATABLEREGIONITEMWORLDPOSITIONWITHOFFSET_OFFSET))(itemMap3DIconData);
		}

		static ::UnityEngine::Vector3 GetRotatableRegionItemCircleScale(::RPG::Client::NavMap::NavMap3DIconData* itemMap3DIconData)
		{
			return ((::UnityEngine::Vector3(*)(::RPG::Client::NavMap::NavMap3DIconData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS_GETROTATABLEREGIONITEMCIRCLESCALE_OFFSET))(itemMap3DIconData);
		}

		static ::UnityEngine::Coroutine* SmoothlySetOpacity(::UnityEngine::GameObject* gameObject, ::System::Single opacity, ::System::Single duration)
		{
			return ((::UnityEngine::Coroutine*(*)(::UnityEngine::GameObject*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS_SMOOTHLYSETOPACITY_OFFSET))(gameObject, opacity, duration);
		}

		static ::UnityEngine::Quaternion ComputePlayerWorldRotation(::RPG::Client::NavMap::NavMap3DIconData* itemMap3DIconData)
		{
			return ((::UnityEngine::Quaternion(*)(::RPG::Client::NavMap::NavMap3DIconData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS_COMPUTEPLAYERWORLDROTATION_OFFSET))(itemMap3DIconData);
		}

		static ::UnityEngine::Quaternion GetMainCameraWorldRotation(::RPG::Client::NavMap::Cartography3DBase* regionData)
		{
			return ((::UnityEngine::Quaternion(*)(::RPG::Client::NavMap::Cartography3DBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS_GETMAINCAMERAWORLDROTATION_OFFSET))(regionData);
		}

		static ::System::UInt32 GetMapRotationVolumeMiniMapIcon(::System::UInt32 storyLineID, ::RPG::Client::NavMap::IMapDataSource* mapData, ::RPG::Client::MapPropDef* propDef)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::RPG::Client::NavMap::IMapDataSource*, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS_GETMAPROTATIONVOLUMEMINIMAPICON_OFFSET))(storyLineID, mapData, propDef);
		}

		static ::System::UInt32 GetMapRotationChargerMiniMapIcon(::System::UInt32 storyLineID, ::RPG::Client::NavMap::IMapDataSource* mapData, ::RPG::Client::MapPropDef* propDef)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::RPG::Client::NavMap::IMapDataSource*, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS_GETMAPROTATIONCHARGERMINIMAPICON_OFFSET))(storyLineID, mapData, propDef);
		}

		static ::System::Tuple_2<::System::UInt32, ::System::UInt32>* GetByAttach(::System::UInt32 groupID, ::System::UInt32 instanceID)
		{
			return ((::System::Tuple_2<::System::UInt32, ::System::UInt32>*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS_GETBYATTACH_OFFSET))(groupID, instanceID);
		}

		static ::System::Boolean _GetRawOpacity(::RPG::Client::NavMap::NavMap3DIconData* itemMap3DIconData, ::UnityEngine::GameObject* itemGo, ::System::Boolean useRawPosition, ::System::Single& alpha)
		{
			return ((::System::Boolean(*)(::RPG::Client::NavMap::NavMap3DIconData*, ::UnityEngine::GameObject*, ::System::Boolean, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS__GETRAWOPACITY_OFFSET))(itemMap3DIconData, itemGo, useRawPosition, alpha);
		}

		static ::System::Boolean _ShouldOpacityIgnorePose(::System::UInt32 propID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS__SHOULDOPACITYIGNOREPOSE_OFFSET))(propID);
		}

		static ::System::UInt32 _GetPropID(::RPG::Client::NavMap::NavMap3DIconData* itemMap3DIconData)
		{
			return ((::System::UInt32(*)(::RPG::Client::NavMap::NavMap3DIconData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS__GETPROPID_OFFSET))(itemMap3DIconData);
		}

		static ::System::Collections::IEnumerator* _SmoothlySetOpacity(::UnityEngine::GameObject* gameObject, ::System::Single targetOpacity, ::System::Single duration)
		{
			return ((::System::Collections::IEnumerator*(*)(::UnityEngine::GameObject*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS__SMOOTHLYSETOPACITY_OFFSET))(gameObject, targetOpacity, duration);
		}

		static ::System::Single _GetObjectOpacity(::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Single(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS__GETOBJECTOPACITY_OFFSET))(gameObject);
		}

		static ::System::Void _SetObjectOpacity(::UnityEngine::GameObject* gameObject, ::System::Single opacity)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS__SETOBJECTOPACITY_OFFSET))(gameObject, opacity);
		}
	};
}
