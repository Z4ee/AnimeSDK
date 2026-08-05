#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NPCCROWD_ANIMATION_CROWDANIMATIONCONSTANTS__CCTOR_OFFSET UNITYSDK_OFFSET(0xF612770)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int CrowdAnimationConstants_TypeDefinitionIndex = 63185;

	class CrowdAnimationConstants : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_COMPUTE_ASYNC_BONE_UPDATE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x3ACF0);
		}
		static ::System::String** StaticGet_COMPUTE_ANIMATE_BONES_KERNEL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x3ACF8);
		}
		static ::System::String** StaticGet_COMPUTE_CROWD_ANIMATOR_UBER_KERNEL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x3AD00);
		}
		static ::System::String** StaticGet_COMPUTE_ASYNC_BONE_UPDATE_KERNEL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x3AD08);
		}
		static ::System::String** StaticGet_COMPUTE_ANIMATE_BONES_LERPED_KERNEL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x3AD10);
		}
		static ::System::String** StaticGet_COMPUTE_FIX_WEIGHTS_KERNEL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x3AD18);
		}
		static ::System::String** StaticGet_COMPUTE_CROSS_LAYER_CORRECTION_KERNEL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x3AD20);
		}
		static ::System::String** StaticGet_COMPUTE_CROWD_ANIMATOR_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x3AD28);
		}
		static ::System::String** StaticGet_COMPUTE_CROWD_ANIMATOR_BONES_UBER_LERPED_KERNEL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x3AD30);
		}
		static ::System::String** StaticGet_COMPUTE_CROWD_ANIMATOR_UBER_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x3AD38);
		}
		static ::System::String** StaticGet_COMPUTE_CROWD_ANIMATOR_BONES_UBER_KERNEL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x3AD40);
		}
		static ::System::String** StaticGet_COMPUTE_CROWD_ANIMATOR_KERNEL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x3AD48);
		}
		static ::System::String** StaticGet_COMPUTE_LAYER_MATRICES_KERNEL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x3AD50);
		}
		static ::System::String** StaticGet_COMPUTE_SKINNED_MESH_ANIMATE_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x3AD58);
		}
		static ::System::Single* StaticGet_COMPUTE_SHADER_THREAD_COUNT_2D()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0xDDC0);
		}
		static ::System::Int32* StaticGet_STRIDE_SIZE_MATRIX4X4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0xDDC4);
		}
		static ::System::Int32* StaticGet_STRIDE_SIZE_FLOAT4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0xDDC8);
		}
		static ::System::Single* StaticGet_COMPUTE_SHADER_THREAD_COUNT()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0xDDCC);
		}
		static ::System::Int32* StaticGet_STRIDE_SIZE_BOOL()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0xDDD0);
		}
		static ::System::Int32* StaticGet_STRIDE_SIZE_INT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0xDDD4);
		}
		static ::System::Int32* StaticGet_STRIDE_SIZE_FLOAT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0xDDD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDANIMATIONCONSTANTS__CCTOR_OFFSET))();
		}
	};
}
