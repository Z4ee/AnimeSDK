#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NPCCROWD_ANIMATION_CROWDANIMATIONCONSTANTS__CCTOR_OFFSET UNITYSDK_OFFSET(0xEBDA660)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int CrowdAnimationConstants_TypeDefinitionIndex = 45238;

	class CrowdAnimationConstants : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_COMPUTE_CROSS_LAYER_CORRECTION_KERNEL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x383D0);
		}
		static ::System::String** StaticGet_COMPUTE_CROWD_ANIMATOR_UBER_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x383D8);
		}
		static ::System::String** StaticGet_COMPUTE_ANIMATE_BONES_LERPED_KERNEL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x383E0);
		}
		static ::System::String** StaticGet_COMPUTE_ASYNC_BONE_UPDATE_KERNEL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x383E8);
		}
		static ::System::String** StaticGet_COMPUTE_ANIMATE_BONES_KERNEL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x383F0);
		}
		static ::System::String** StaticGet_COMPUTE_SKINNED_MESH_ANIMATE_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x383F8);
		}
		static ::System::String** StaticGet_COMPUTE_ASYNC_BONE_UPDATE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x38400);
		}
		static ::System::String** StaticGet_COMPUTE_CROWD_ANIMATOR_BONES_UBER_KERNEL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x38408);
		}
		static ::System::String** StaticGet_COMPUTE_FIX_WEIGHTS_KERNEL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x38410);
		}
		static ::System::String** StaticGet_COMPUTE_LAYER_MATRICES_KERNEL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x38418);
		}
		static ::System::String** StaticGet_COMPUTE_CROWD_ANIMATOR_UBER_KERNEL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x38420);
		}
		static ::System::String** StaticGet_COMPUTE_CROWD_ANIMATOR_BONES_UBER_LERPED_KERNEL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x38428);
		}
		static ::System::String** StaticGet_COMPUTE_CROWD_ANIMATOR_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x38430);
		}
		static ::System::String** StaticGet_COMPUTE_CROWD_ANIMATOR_KERNEL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x38438);
		}
		static ::System::Single* StaticGet_COMPUTE_SHADER_THREAD_COUNT()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0xDD30);
		}
		static ::System::Int32* StaticGet_STRIDE_SIZE_FLOAT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0xDD34);
		}
		static ::System::Int32* StaticGet_STRIDE_SIZE_MATRIX4X4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0xDD38);
		}
		static ::System::Int32* StaticGet_STRIDE_SIZE_BOOL()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0xDD3C);
		}
		static ::System::Int32* StaticGet_STRIDE_SIZE_INT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0xDD40);
		}
		static ::System::Single* StaticGet_COMPUTE_SHADER_THREAD_COUNT_2D()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0xDD44);
		}
		static ::System::Int32* StaticGet_STRIDE_SIZE_FLOAT4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0xDD48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDANIMATIONCONSTANTS__CCTOR_OFFSET))();
		}
	};
}
