#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_LAYERUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5926A0)

namespace RPG::Client
{
	inline static constexpr unsigned int LayerUtils_TypeDefinitionIndex = 34625;

	class LayerUtils : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_CameraColliderLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0xB10);
		}
		static ::System::String** StaticGet_StageColliderLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0xB18);
		}
		static ::System::String** StaticGet_CharacterLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0xB20);
		}
		static ::System::String** StaticGet_LocalPlayerLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0xB28);
		}
		static ::System::String** StaticGet_LocalPlayerTriggerLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0xB30);
		}
		static ::System::String** StaticGet_PhotoColliderName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0xB38);
		}
		static ::System::String** StaticGet_PropLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0xB40);
		}
		static ::System::String** StaticGet_DestructLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0xB48);
		}
		static ::System::String** StaticGet_PerformanceLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0xB50);
		}
		static ::System::String** StaticGet_UIAfterPostProcessLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0xB58);
		}
		static ::System::String** StaticGet_AirWallColliderLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0xB60);
		}
		static ::System::String** StaticGet_ProjectileLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0xB68);
		}
		static ::System::String** StaticGet_UI3DLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0xB70);
		}
		static ::System::String** StaticGet_TriggerLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0xB78);
		}
		static ::System::String** StaticGet_UILayer3Name()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0xB80);
		}
		static ::System::String** StaticGet_LocalPlayerColliderLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0xB88);
		}
		static ::System::String** StaticGet_UILayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0xB90);
		}
		static ::System::String** StaticGet_HitBoxLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0xB98);
		}
		static ::System::String** StaticGet_NPCLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0xBA0);
		}
		static ::System::String** StaticGet_DefaultLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0xBA8);
		}
		static ::System::Int32* StaticGet_UILayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x5B0);
		}
		static ::System::Int32* StaticGet_PhotoColliderLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x5B4);
		}
		static ::System::Int32* StaticGet_CharacterLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x5B8);
		}
		static ::System::Int32* StaticGet_PropLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x5BC);
		}
		static ::System::Int32* StaticGet_AttackDetectLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x5C0);
		}
		static ::System::Int32* StaticGet_VisionDetectLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x5C4);
		}
		static ::System::Int32* StaticGet_PerformanceLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x5C8);
		}
		static ::System::Int32* StaticGet_PlayerMoveRaycastLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x5CC);
		}
		static ::System::Int32* StaticGet_SceneRaycastLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x5D0);
		}
		static ::System::Int32* StaticGet_HitBoxLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x5D4);
		}
		static ::System::Int32* StaticGet_DefaultLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x5D8);
		}
		static ::System::Int32* StaticGet_DestructLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x5DC);
		}
		static ::System::Int32* StaticGet_AirWallColliderLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x5E0);
		}
		static ::System::Int32* StaticGet_UIAfterPostProcessLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x5E4);
		}
		static ::System::Int32* StaticGet_PlayerMoveCapsuleCastLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x5E8);
		}
		static ::System::Int32* StaticGet_TriggerLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x5EC);
		}
		static ::System::Int32* StaticGet_NPCLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x5F0);
		}
		static ::System::Int32* StaticGet_UILayer3LayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x5F4);
		}
		static ::System::Int32* StaticGet_PerformanceLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x5F8);
		}
		static ::System::Int32* StaticGet_CameraColliderLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x5FC);
		}
		static ::System::Int32* StaticGet_LocalPlayerTriggerLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x600);
		}
		static ::System::Int32* StaticGet_PhotoColliderLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x604);
		}
		static ::System::Int32* StaticGet_ProjectileLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x608);
		}
		static ::System::Int32* StaticGet_LocalPlayerLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x60C);
		}
		static ::System::Int32* StaticGet_UI3DLayerLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x610);
		}
		static ::System::Int32* StaticGet_CharacterLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x614);
		}
		static ::System::Int32* StaticGet_NPCLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x618);
		}
		static ::System::Int32* StaticGet_DefaultLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x61C);
		}
		static ::System::Int32* StaticGet_EntityLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x620);
		}
		static ::System::Int32* StaticGet_CameraDitherLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x624);
		}
		static ::System::Int32* StaticGet_ProjectileLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x628);
		}
		static ::System::Int32* StaticGet_StageColliderLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x62C);
		}
		static ::System::Int32* StaticGet_HitBoxLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x630);
		}
		static ::System::Int32* StaticGet_LocalPlayerColliderLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x634);
		}
		static ::System::Int32* StaticGet_MoveRaycastLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x638);
		}
		static ::System::Int32* StaticGet_UIAfterPostProcessLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x63C);
		}
		static ::System::Int32* StaticGet_MoveCapsuleCastLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x640);
		}
		static ::System::Int32* StaticGet_UILayer3LayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x644);
		}
		static ::System::Int32* StaticGet_TriggerLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x648);
		}
		static ::System::Int32* StaticGet_AirWallColliderLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x64C);
		}
		static ::System::Int32* StaticGet_NpcMonsterDetectLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x650);
		}
		static ::System::Int32* StaticGet_PropLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x654);
		}
		static ::System::Int32* StaticGet_LocalPlayerColliderLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x658);
		}
		static ::System::Int32* StaticGet_DestructLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x65C);
		}
		static ::System::Int32* StaticGet_UI3DLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x660);
		}
		static ::System::Int32* StaticGet_UILayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x664);
		}
		static ::System::Int32* StaticGet_LocalPlayerLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x668);
		}
		static ::System::Int32* StaticGet_CameraColliderLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x66C);
		}
		static ::System::Int32* StaticGet_StageColliderLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x670);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LAYERUTILS__CCTOR_OFFSET))();
		}
	};
}
