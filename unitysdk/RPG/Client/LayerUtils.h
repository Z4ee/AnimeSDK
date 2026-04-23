#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_LAYERUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D98670)

namespace RPG::Client
{
	inline static constexpr unsigned int LayerUtils_TypeDefinitionIndex = 9719;

	class LayerUtils : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_StageColliderLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0xA00);
		}
		static ::System::String** StaticGet_LocalPlayerColliderLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0xA08);
		}
		static ::System::String** StaticGet_UILayer3Name()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0xA10);
		}
		static ::System::String** StaticGet_DestructLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0xA18);
		}
		static ::System::String** StaticGet_UIAfterPostProcessLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0xA20);
		}
		static ::System::String** StaticGet_LocalPlayerLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0xA28);
		}
		static ::System::String** StaticGet_ProjectileLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0xA30);
		}
		static ::System::String** StaticGet_PhotoColliderName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0xA38);
		}
		static ::System::String** StaticGet_TriggerLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0xA40);
		}
		static ::System::String** StaticGet_NPCLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0xA48);
		}
		static ::System::String** StaticGet_PropLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0xA50);
		}
		static ::System::String** StaticGet_UI3DLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0xA58);
		}
		static ::System::String** StaticGet_HitBoxLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0xA60);
		}
		static ::System::String** StaticGet_CameraColliderLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0xA68);
		}
		static ::System::String** StaticGet_DefaultLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0xA70);
		}
		static ::System::String** StaticGet_LocalPlayerTriggerLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0xA78);
		}
		static ::System::String** StaticGet_PerformanceLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0xA80);
		}
		static ::System::String** StaticGet_UILayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0xA88);
		}
		static ::System::String** StaticGet_AirWallColliderLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0xA90);
		}
		static ::System::String** StaticGet_CharacterLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0xA98);
		}
		static ::System::Int32* StaticGet_PropLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x650);
		}
		static ::System::Int32* StaticGet_PhotoColliderLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x654);
		}
		static ::System::Int32* StaticGet_PlayerMoveCapsuleCastLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x658);
		}
		static ::System::Int32* StaticGet_LocalPlayerColliderLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x65C);
		}
		static ::System::Int32* StaticGet_LocalPlayerTriggerLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x660);
		}
		static ::System::Int32* StaticGet_UI3DLayerLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x664);
		}
		static ::System::Int32* StaticGet_PerformanceLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x668);
		}
		static ::System::Int32* StaticGet_TriggerLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x66C);
		}
		static ::System::Int32* StaticGet_VisionDetectLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x670);
		}
		static ::System::Int32* StaticGet_ProjectileLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x674);
		}
		static ::System::Int32* StaticGet_DefaultLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x678);
		}
		static ::System::Int32* StaticGet_UILayer3LayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x67C);
		}
		static ::System::Int32* StaticGet_DestructLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x680);
		}
		static ::System::Int32* StaticGet_DestructLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x684);
		}
		static ::System::Int32* StaticGet_CharacterLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x688);
		}
		static ::System::Int32* StaticGet_AttackDetectLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x68C);
		}
		static ::System::Int32* StaticGet_StageColliderLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x690);
		}
		static ::System::Int32* StaticGet_AirWallColliderLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x694);
		}
		static ::System::Int32* StaticGet_UIAfterPostProcessLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x698);
		}
		static ::System::Int32* StaticGet_UILayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x69C);
		}
		static ::System::Int32* StaticGet_MoveCapsuleCastLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x6A0);
		}
		static ::System::Int32* StaticGet_LocalPlayerLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x6A4);
		}
		static ::System::Int32* StaticGet_CameraDitherLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x6A8);
		}
		static ::System::Int32* StaticGet_LocalPlayerColliderLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x6AC);
		}
		static ::System::Int32* StaticGet_StageColliderLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x6B0);
		}
		static ::System::Int32* StaticGet_DefaultLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x6B4);
		}
		static ::System::Int32* StaticGet_TriggerLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x6B8);
		}
		static ::System::Int32* StaticGet_NpcMonsterDetectLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x6BC);
		}
		static ::System::Int32* StaticGet_HitBoxLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x6C0);
		}
		static ::System::Int32* StaticGet_MoveRaycastLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x6C4);
		}
		static ::System::Int32* StaticGet_NPCLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x6C8);
		}
		static ::System::Int32* StaticGet_CameraColliderLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x6CC);
		}
		static ::System::Int32* StaticGet_UILayer3LayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x6D0);
		}
		static ::System::Int32* StaticGet_CameraColliderLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x6D4);
		}
		static ::System::Int32* StaticGet_UILayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x6D8);
		}
		static ::System::Int32* StaticGet_CharacterLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x6DC);
		}
		static ::System::Int32* StaticGet_UIAfterPostProcessLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x6E0);
		}
		static ::System::Int32* StaticGet_PerformanceLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x6E4);
		}
		static ::System::Int32* StaticGet_ProjectileLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x6E8);
		}
		static ::System::Int32* StaticGet_AirWallColliderLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x6EC);
		}
		static ::System::Int32* StaticGet_HitBoxLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x6F0);
		}
		static ::System::Int32* StaticGet_LocalPlayerLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x6F4);
		}
		static ::System::Int32* StaticGet_UI3DLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x6F8);
		}
		static ::System::Int32* StaticGet_PlayerMoveRaycastLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x6FC);
		}
		static ::System::Int32* StaticGet_SceneRaycastLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x700);
		}
		static ::System::Int32* StaticGet_PhotoColliderLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x704);
		}
		static ::System::Int32* StaticGet_EntityLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x708);
		}
		static ::System::Int32* StaticGet_PropLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x70C);
		}
		static ::System::Int32* StaticGet_NPCLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x710);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LAYERUTILS__CCTOR_OFFSET))();
		}
	};
}
