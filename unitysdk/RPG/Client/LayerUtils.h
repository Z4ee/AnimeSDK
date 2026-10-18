#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_LAYERUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC48000)

namespace RPG::Client
{
	inline static constexpr unsigned int LayerUtils_TypeDefinitionIndex = 35289;

	class LayerUtils : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_PerformanceLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x11F0);
		}
		static ::System::String** StaticGet_CameraColliderLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x11F8);
		}
		static ::System::String** StaticGet_PropLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1200);
		}
		static ::System::String** StaticGet_PVSGrdLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1208);
		}
		static ::System::String** StaticGet_HitBoxLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1210);
		}
		static ::System::String** StaticGet_LocalPlayerLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1218);
		}
		static ::System::String** StaticGet_DestructLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1220);
		}
		static ::System::String** StaticGet_NPCLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1228);
		}
		static ::System::String** StaticGet_CharacterLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1230);
		}
		static ::System::String** StaticGet_UILayer3Name()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1238);
		}
		static ::System::String** StaticGet_StageColliderLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1240);
		}
		static ::System::String** StaticGet_TriggerLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1248);
		}
		static ::System::String** StaticGet_UIAfterPostProcessLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1250);
		}
		static ::System::String** StaticGet_PhotoColliderName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1258);
		}
		static ::System::String** StaticGet_AirWallColliderLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1260);
		}
		static ::System::String** StaticGet_DefaultLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1268);
		}
		static ::System::String** StaticGet_LocalPlayerColliderLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1270);
		}
		static ::System::String** StaticGet_LocalPlayerTriggerLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1278);
		}
		static ::System::String** StaticGet_UI3DLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1280);
		}
		static ::System::String** StaticGet_UILayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1288);
		}
		static ::System::String** StaticGet_IgnoreCollisionLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1290);
		}
		static ::System::String** StaticGet_ProjectileLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1298);
		}
		static ::System::Int32* StaticGet_TriggerLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x700);
		}
		static ::System::Int32* StaticGet_LocalPlayerLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x704);
		}
		static ::System::Int32* StaticGet_PerformanceLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x708);
		}
		static ::System::Int32* StaticGet_UIAfterPostProcessLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x70C);
		}
		static ::System::Int32* StaticGet_CameraDitherLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x710);
		}
		static ::System::Int32* StaticGet_CameraColliderLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x714);
		}
		static ::System::Int32* StaticGet_UILayer3LayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x718);
		}
		static ::System::Int32* StaticGet_UILayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x71C);
		}
		static ::System::Int32* StaticGet_DestructLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x720);
		}
		static ::System::Int32* StaticGet_TriggerLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x724);
		}
		static ::System::Int32* StaticGet_ProjectileLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x728);
		}
		static ::System::Int32* StaticGet_SceneRaycastLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x72C);
		}
		static ::System::Int32* StaticGet_CharacterLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x730);
		}
		static ::System::Int32* StaticGet_PropLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x734);
		}
		static ::System::Int32* StaticGet_IgnoreCollisionLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x738);
		}
		static ::System::Int32* StaticGet_LocalPlayerTriggerLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x73C);
		}
		static ::System::Int32* StaticGet_PlayerMoveCapsuleCastLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x740);
		}
		static ::System::Int32* StaticGet_AirWallColliderLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x744);
		}
		static ::System::Int32* StaticGet_PropLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x748);
		}
		static ::System::Int32* StaticGet_HitBoxLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x74C);
		}
		static ::System::Int32* StaticGet_PhotoColliderLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x750);
		}
		static ::System::Int32* StaticGet_UI3DLayerLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x754);
		}
		static ::System::Int32* StaticGet_UIAfterPostProcessLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x758);
		}
		static ::System::Int32* StaticGet_DefaultLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x75C);
		}
		static ::System::Int32* StaticGet_LocalPlayerColliderLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x760);
		}
		static ::System::Int32* StaticGet_LocalPlayerLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x764);
		}
		static ::System::Int32* StaticGet_PVSGrdLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x768);
		}
		static ::System::Int32* StaticGet_PerformanceLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x76C);
		}
		static ::System::Int32* StaticGet_CharacterLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x770);
		}
		static ::System::Int32* StaticGet_NpcMonsterDetectLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x774);
		}
		static ::System::Int32* StaticGet_UILayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x778);
		}
		static ::System::Int32* StaticGet_FullTriggerTargetLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x77C);
		}
		static ::System::Int32* StaticGet_HitBoxLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x780);
		}
		static ::System::Int32* StaticGet_ProjectileLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x784);
		}
		static ::System::Int32* StaticGet_MoveCapsuleCastLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x788);
		}
		static ::System::Int32* StaticGet_StageColliderLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x78C);
		}
		static ::System::Int32* StaticGet_AirWallColliderLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x790);
		}
		static ::System::Int32* StaticGet_MoveRaycastLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x794);
		}
		static ::System::Int32* StaticGet_CameraColliderLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x798);
		}
		static ::System::Int32* StaticGet_PhotoColliderLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x79C);
		}
		static ::System::Int32* StaticGet_PVSGrdLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x7A0);
		}
		static ::System::Int32* StaticGet_StageColliderLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x7A4);
		}
		static ::System::Int32* StaticGet_UILayer3LayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x7A8);
		}
		static ::System::Int32* StaticGet_NPCLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x7AC);
		}
		static ::System::Int32* StaticGet_VisionDetectLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x7B0);
		}
		static ::System::Int32* StaticGet_EntityLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x7B4);
		}
		static ::System::Int32* StaticGet_UI3DLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x7B8);
		}
		static ::System::Int32* StaticGet_PlayerMoveRaycastLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x7BC);
		}
		static ::System::Int32* StaticGet_DefaultTriggerTargetLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x7C0);
		}
		static ::System::Int32* StaticGet_LocalPlayerColliderLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x7C4);
		}
		static ::System::Int32* StaticGet_DestructLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x7C8);
		}
		static ::System::Int32* StaticGet_DefaultLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x7CC);
		}
		static ::System::Int32* StaticGet_NPCLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x7D0);
		}
		static ::System::Int32* StaticGet_AttackDetectLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x7D4);
		}
		static ::System::Int32* StaticGet_IgnoreCollisionLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x7D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LAYERUTILS__CCTOR_OFFSET))();
		}
	};
}
