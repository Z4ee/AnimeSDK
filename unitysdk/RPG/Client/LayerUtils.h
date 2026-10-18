#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_LAYERUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC1A950)

namespace RPG::Client
{
	inline static constexpr unsigned int LayerUtils_TypeDefinitionIndex = 35289;

	class LayerUtils : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_UILayer3Name()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1880);
		}
		static ::System::String** StaticGet_UI3DLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1888);
		}
		static ::System::String** StaticGet_LocalPlayerColliderLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1890);
		}
		static ::System::String** StaticGet_LocalPlayerLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1898);
		}
		static ::System::String** StaticGet_HitBoxLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x18A0);
		}
		static ::System::String** StaticGet_StageColliderLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x18A8);
		}
		static ::System::String** StaticGet_UIAfterPostProcessLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x18B0);
		}
		static ::System::String** StaticGet_PropLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x18B8);
		}
		static ::System::String** StaticGet_PhotoColliderName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x18C0);
		}
		static ::System::String** StaticGet_NPCLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x18C8);
		}
		static ::System::String** StaticGet_TriggerLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x18D0);
		}
		static ::System::String** StaticGet_CameraColliderLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x18D8);
		}
		static ::System::String** StaticGet_DefaultLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x18E0);
		}
		static ::System::String** StaticGet_IgnoreCollisionLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x18E8);
		}
		static ::System::String** StaticGet_AirWallColliderLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x18F0);
		}
		static ::System::String** StaticGet_CharacterLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x18F8);
		}
		static ::System::String** StaticGet_UILayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1900);
		}
		static ::System::String** StaticGet_ProjectileLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1908);
		}
		static ::System::String** StaticGet_PerformanceLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1910);
		}
		static ::System::String** StaticGet_DestructLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1918);
		}
		static ::System::String** StaticGet_LocalPlayerTriggerLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1920);
		}
		static ::System::String** StaticGet_PVSGrdLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1928);
		}
		static ::System::Int32* StaticGet_ProjectileLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1A30);
		}
		static ::System::Int32* StaticGet_AttackDetectLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1A34);
		}
		static ::System::Int32* StaticGet_MoveCapsuleCastLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1A38);
		}
		static ::System::Int32* StaticGet_TriggerLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1A3C);
		}
		static ::System::Int32* StaticGet_DefaultLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1A40);
		}
		static ::System::Int32* StaticGet_PerformanceLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1A44);
		}
		static ::System::Int32* StaticGet_CameraDitherLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1A48);
		}
		static ::System::Int32* StaticGet_IgnoreCollisionLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1A4C);
		}
		static ::System::Int32* StaticGet_StageColliderLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1A50);
		}
		static ::System::Int32* StaticGet_UILayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1A54);
		}
		static ::System::Int32* StaticGet_AirWallColliderLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1A58);
		}
		static ::System::Int32* StaticGet_ProjectileLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1A5C);
		}
		static ::System::Int32* StaticGet_LocalPlayerColliderLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1A60);
		}
		static ::System::Int32* StaticGet_CameraColliderLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1A64);
		}
		static ::System::Int32* StaticGet_PlayerMoveCapsuleCastLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1A68);
		}
		static ::System::Int32* StaticGet_PVSGrdLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1A6C);
		}
		static ::System::Int32* StaticGet_DestructLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1A70);
		}
		static ::System::Int32* StaticGet_LocalPlayerColliderLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1A74);
		}
		static ::System::Int32* StaticGet_DefaultLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1A78);
		}
		static ::System::Int32* StaticGet_NPCLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1A7C);
		}
		static ::System::Int32* StaticGet_TriggerLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1A80);
		}
		static ::System::Int32* StaticGet_CameraColliderLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1A84);
		}
		static ::System::Int32* StaticGet_StageColliderLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1A88);
		}
		static ::System::Int32* StaticGet_SceneRaycastLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1A8C);
		}
		static ::System::Int32* StaticGet_UIAfterPostProcessLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1A90);
		}
		static ::System::Int32* StaticGet_AirWallColliderLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1A94);
		}
		static ::System::Int32* StaticGet_PerformanceLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1A98);
		}
		static ::System::Int32* StaticGet_DestructLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1A9C);
		}
		static ::System::Int32* StaticGet_FullTriggerTargetLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1AA0);
		}
		static ::System::Int32* StaticGet_UILayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1AA4);
		}
		static ::System::Int32* StaticGet_UILayer3LayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1AA8);
		}
		static ::System::Int32* StaticGet_EntityLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1AAC);
		}
		static ::System::Int32* StaticGet_UI3DLayerLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1AB0);
		}
		static ::System::Int32* StaticGet_IgnoreCollisionLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1AB4);
		}
		static ::System::Int32* StaticGet_CharacterLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1AB8);
		}
		static ::System::Int32* StaticGet_VisionDetectLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1ABC);
		}
		static ::System::Int32* StaticGet_CharacterLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1AC0);
		}
		static ::System::Int32* StaticGet_PropLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1AC4);
		}
		static ::System::Int32* StaticGet_MoveRaycastLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1AC8);
		}
		static ::System::Int32* StaticGet_PlayerMoveRaycastLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1ACC);
		}
		static ::System::Int32* StaticGet_PVSGrdLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1AD0);
		}
		static ::System::Int32* StaticGet_PhotoColliderLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1AD4);
		}
		static ::System::Int32* StaticGet_UI3DLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1AD8);
		}
		static ::System::Int32* StaticGet_UIAfterPostProcessLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1ADC);
		}
		static ::System::Int32* StaticGet_UILayer3LayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1AE0);
		}
		static ::System::Int32* StaticGet_PhotoColliderLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1AE4);
		}
		static ::System::Int32* StaticGet_LocalPlayerTriggerLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1AE8);
		}
		static ::System::Int32* StaticGet_LocalPlayerLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1AEC);
		}
		static ::System::Int32* StaticGet_HitBoxLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1AF0);
		}
		static ::System::Int32* StaticGet_LocalPlayerLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1AF4);
		}
		static ::System::Int32* StaticGet_NPCLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1AF8);
		}
		static ::System::Int32* StaticGet_PropLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1AFC);
		}
		static ::System::Int32* StaticGet_DefaultTriggerTargetLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1B00);
		}
		static ::System::Int32* StaticGet_NpcMonsterDetectLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1B04);
		}
		static ::System::Int32* StaticGet_HitBoxLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x1B08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LAYERUTILS__CCTOR_OFFSET))();
		}
	};
}
