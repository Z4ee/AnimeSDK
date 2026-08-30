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

#define RPG_CLIENT_MAP3DUTILS_COMPUTEPLAYERWORLDROTATION_OFFSET UNITYSDK_OFFSET(0xD5D3970)
#define RPG_CLIENT_MAP3DUTILS_GETBYATTACH_OFFSET UNITYSDK_OFFSET(0xD5D4BF0)
#define RPG_CLIENT_MAP3DUTILS_GETMAINCAMERAWORLDROTATION_OFFSET UNITYSDK_OFFSET(0xD5D3FE0)
#define RPG_CLIENT_MAP3DUTILS_GETMAPROTATIONCHARGERMINIMAPICON_OFFSET UNITYSDK_OFFSET(0xD5D4780)
#define RPG_CLIENT_MAP3DUTILS_GETMAPROTATIONVOLUMEMINIMAPICON_OFFSET UNITYSDK_OFFSET(0xD5D41F0)
#define RPG_CLIENT_MAP3DUTILS_GETROTATABLEREGIONCIRCLEOPACITY_OFFSET UNITYSDK_OFFSET(0xD5D24C0)
#define RPG_CLIENT_MAP3DUTILS_GETROTATABLEREGIONITEMCIRCLESCALE_OFFSET UNITYSDK_OFFSET(0xD5D2F60)
#define RPG_CLIENT_MAP3DUTILS_GETROTATABLEREGIONITEMICONOPACITY_OFFSET UNITYSDK_OFFSET(0xD5D2540)
#define RPG_CLIENT_MAP3DUTILS_GETROTATABLEREGIONITEMOPACITY_OFFSET UNITYSDK_OFFSET(0xD5D1760)
#define RPG_CLIENT_MAP3DUTILS_GETROTATABLEREGIONITEMWORLDPOSITIONWITHOFFSET_OFFSET UNITYSDK_OFFSET(0xD5D2B80)
#define RPG_CLIENT_MAP3DUTILS_GETROTATABLEREGIONITEMWORLDPOSITION_1_OFFSET UNITYSDK_OFFSET(0xD5D2A30)
#define RPG_CLIENT_MAP3DUTILS_GETROTATABLEREGIONITEMWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0xD5D28B0)
#define RPG_CLIENT_MAP3DUTILS_GETROTATABLEREGIONITEMWORLDROTATION_OFFSET UNITYSDK_OFFSET(0xD5D2690)
#define RPG_CLIENT_MAP3DUTILS_ISINCURFLOOR3DAREA_OFFSET UNITYSDK_OFFSET(0xD5D1360)
#define RPG_CLIENT_MAP3DUTILS_SHOULDSHOW3DMAP_OFFSET UNITYSDK_OFFSET(0xD5D1610)
#define RPG_CLIENT_MAP3DUTILS_SMOOTHLYSETOPACITY_OFFSET UNITYSDK_OFFSET(0xD5D3480)
#define RPG_CLIENT_MAP3DUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0xD5D5120)
#define RPG_CLIENT_MAP3DUTILS__GETOBJECTOPACITY_OFFSET UNITYSDK_OFFSET(0xD5D4F30)
#define RPG_CLIENT_MAP3DUTILS__GETPROPID_OFFSET UNITYSDK_OFFSET(0xD5D4DC0)
#define RPG_CLIENT_MAP3DUTILS__GETRAWOPACITY_OFFSET UNITYSDK_OFFSET(0xD5D1930)
#define RPG_CLIENT_MAP3DUTILS__SETOBJECTOPACITY_OFFSET UNITYSDK_OFFSET(0xD5D3680)
#define RPG_CLIENT_MAP3DUTILS__SHOULDOPACITYIGNOREPOSE_OFFSET UNITYSDK_OFFSET(0xD5D4E60)
#define RPG_CLIENT_MAP3DUTILS__SMOOTHLYSETOPACITY_OFFSET UNITYSDK_OFFSET(0xD5D38E0)

namespace RPG::Client
{
	inline static constexpr unsigned int Map3DUtils_TypeDefinitionIndex = 69003;

	class Map3DUtils : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_s_RayHits()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(Map3DUtils_TypeDefinitionIndex)->GetStaticField(0x2750);
		}
		static ::RPG::Client::UIMap3DContainer** StaticGet_s_Map3DContainer()
		{
			return (::RPG::Client::UIMap3DContainer**)Il2CppClass::FromTypeDefinitionIndex(Map3DUtils_TypeDefinitionIndex)->GetStaticField(0x2758);
		}
		static ::UnityEngine::Transform** StaticGet_s_Map3DTransform()
		{
			return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Map3DUtils_TypeDefinitionIndex)->GetStaticField(0x2760);
		}
		static ::RPG::Client::MonoMap3DTouch** StaticGet_s_MonoMap3DTouch()
		{
			return (::RPG::Client::MonoMap3DTouch**)Il2CppClass::FromTypeDefinitionIndex(Map3DUtils_TypeDefinitionIndex)->GetStaticField(0x2768);
		}
		static ::System::Int32* StaticGet_s_Opacity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Map3DUtils_TypeDefinitionIndex)->GetStaticField(0xE40);
		}
		static ::System::Int32* StaticGet_s_Color()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Map3DUtils_TypeDefinitionIndex)->GetStaticField(0xE44);
		}
		static ::UnityEngine::Vector3* StaticGet_s_ScreenPosOffset()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Map3DUtils_TypeDefinitionIndex)->GetStaticField(0xE48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsInCurFloor3DArea(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS_ISINCURFLOOR3DAREA_OFFSET))(a1);
		}

		static ::System::Boolean ShouldShow3DMap()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS_SHOULDSHOW3DMAP_OFFSET))();
		}

		static ::System::Single GetRotatableRegionItemOpacity(::RPG::Client::NavMap::NavMap3DIconData* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Single(*)(::RPG::Client::NavMap::NavMap3DIconData*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS_GETROTATABLEREGIONITEMOPACITY_OFFSET))(a1, a2);
		}

		static ::System::Single GetRotatableRegionCircleOpacity(::RPG::Client::NavMap::NavMap3DIconData* a1)
		{
			return ((::System::Single(*)(::RPG::Client::NavMap::NavMap3DIconData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS_GETROTATABLEREGIONCIRCLEOPACITY_OFFSET))(a1);
		}

		static ::System::Single GetRotatableRegionItemIconOpacity(::RPG::Client::NavMap::NavMap3DIconData* a1)
		{
			return ((::System::Single(*)(::RPG::Client::NavMap::NavMap3DIconData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS_GETROTATABLEREGIONITEMICONOPACITY_OFFSET))(a1);
		}

		static ::UnityEngine::Quaternion GetRotatableRegionItemWorldRotation(::RPG::Client::NavMap::NavMap3DIconData* a1)
		{
			return ((::UnityEngine::Quaternion(*)(::RPG::Client::NavMap::NavMap3DIconData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS_GETROTATABLEREGIONITEMWORLDROTATION_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 GetRotatableRegionItemWorldPosition(::RPG::Client::NavMap::ICartography3D* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::RPG::Client::NavMap::ICartography3D*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS_GETROTATABLEREGIONITEMWORLDPOSITION_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 GetRotatableRegionItemWorldPosition_1(::RPG::Client::NavMap::NavMap3DIconData* a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Vector3(*)(::RPG::Client::NavMap::NavMap3DIconData*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS_GETROTATABLEREGIONITEMWORLDPOSITION_1_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 GetRotatableRegionItemWorldPositionWithOffset(::RPG::Client::NavMap::NavMap3DIconData* a1)
		{
			return ((::UnityEngine::Vector3(*)(::RPG::Client::NavMap::NavMap3DIconData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS_GETROTATABLEREGIONITEMWORLDPOSITIONWITHOFFSET_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 GetRotatableRegionItemCircleScale(::RPG::Client::NavMap::NavMap3DIconData* a1)
		{
			return ((::UnityEngine::Vector3(*)(::RPG::Client::NavMap::NavMap3DIconData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS_GETROTATABLEREGIONITEMCIRCLESCALE_OFFSET))(a1);
		}

		static ::UnityEngine::Coroutine* SmoothlySetOpacity(::UnityEngine::GameObject* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::UnityEngine::Coroutine*(*)(::UnityEngine::GameObject*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS_SMOOTHLYSETOPACITY_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Quaternion ComputePlayerWorldRotation(::RPG::Client::NavMap::NavMap3DIconData* a1)
		{
			return ((::UnityEngine::Quaternion(*)(::RPG::Client::NavMap::NavMap3DIconData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS_COMPUTEPLAYERWORLDROTATION_OFFSET))(a1);
		}

		static ::UnityEngine::Quaternion GetMainCameraWorldRotation(::RPG::Client::NavMap::Cartography3DBase* a1)
		{
			return ((::UnityEngine::Quaternion(*)(::RPG::Client::NavMap::Cartography3DBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS_GETMAINCAMERAWORLDROTATION_OFFSET))(a1);
		}

		static ::System::UInt32 GetMapRotationVolumeMiniMapIcon(::System::UInt32 a1, ::RPG::Client::NavMap::IMapDataSource* a2, ::RPG::Client::MapPropDef* a3)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::RPG::Client::NavMap::IMapDataSource*, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS_GETMAPROTATIONVOLUMEMINIMAPICON_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 GetMapRotationChargerMiniMapIcon(::System::UInt32 a1, ::RPG::Client::NavMap::IMapDataSource* a2, ::RPG::Client::MapPropDef* a3)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::RPG::Client::NavMap::IMapDataSource*, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS_GETMAPROTATIONCHARGERMINIMAPICON_OFFSET))(a1, a2, a3);
		}

		static ::System::Tuple_2<::System::UInt32, ::System::UInt32>* GetByAttach(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Tuple_2<::System::UInt32, ::System::UInt32>*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS_GETBYATTACH_OFFSET))(a1, a2);
		}

		static ::System::Boolean _GetRawOpacity(::RPG::Client::NavMap::NavMap3DIconData* a1, ::UnityEngine::GameObject* a2, ::System::Boolean a3, ::System::Single& a4)
		{
			return ((::System::Boolean(*)(::RPG::Client::NavMap::NavMap3DIconData*, ::UnityEngine::GameObject*, ::System::Boolean, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS__GETRAWOPACITY_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean _ShouldOpacityIgnorePose(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS__SHOULDOPACITYIGNOREPOSE_OFFSET))(a1);
		}

		static ::System::UInt32 _GetPropID(::RPG::Client::NavMap::NavMap3DIconData* a1)
		{
			return ((::System::UInt32(*)(::RPG::Client::NavMap::NavMap3DIconData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS__GETPROPID_OFFSET))(a1);
		}

		static ::System::Collections::IEnumerator* _SmoothlySetOpacity(::UnityEngine::GameObject* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Collections::IEnumerator*(*)(::UnityEngine::GameObject*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS__SMOOTHLYSETOPACITY_OFFSET))(a1, a2, a3);
		}

		static ::System::Single _GetObjectOpacity(::UnityEngine::GameObject* a1)
		{
			return ((::System::Single(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS__GETOBJECTOPACITY_OFFSET))(a1);
		}

		static ::System::Void _SetObjectOpacity(::UnityEngine::GameObject* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS__SETOBJECTOPACITY_OFFSET))(a1, a2);
		}
	};
}
