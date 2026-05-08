#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NPCCROWD_ANIMATION_CROWDANIMATIONCONSTANTS__CCTOR_OFFSET UNITYSDK_OFFSET(0xFB56AA0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int CrowdAnimationConstants_TypeDefinitionIndex = 55805;

	class CrowdAnimationConstants : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_COMPUTE_CROWD_ANIMATOR_BONES_UBER_KERNEL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x35980);
		}
		static ::System::String** StaticGet_COMPUTE_ASYNC_BONE_UPDATE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x35988);
		}
		static ::System::String** StaticGet_COMPUTE_SKINNED_MESH_ANIMATE_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x35990);
		}
		static ::System::String** StaticGet_COMPUTE_ANIMATE_BONES_LERPED_KERNEL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x35998);
		}
		static ::System::String** StaticGet_COMPUTE_CROWD_ANIMATOR_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x359A0);
		}
		static ::System::String** StaticGet_COMPUTE_CROWD_ANIMATOR_BONES_UBER_LERPED_KERNEL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x359A8);
		}
		static ::System::String** StaticGet_COMPUTE_CROWD_ANIMATOR_UBER_KERNEL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x359B0);
		}
		static ::System::String** StaticGet_COMPUTE_FIX_WEIGHTS_KERNEL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x359B8);
		}
		static ::System::String** StaticGet_COMPUTE_CROWD_ANIMATOR_KERNEL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x359C0);
		}
		static ::System::String** StaticGet_COMPUTE_CROWD_ANIMATOR_UBER_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x359C8);
		}
		static ::System::String** StaticGet_COMPUTE_ASYNC_BONE_UPDATE_KERNEL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x359D0);
		}
		static ::System::String** StaticGet_COMPUTE_ANIMATE_BONES_KERNEL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x359D8);
		}
		static ::System::Int32* StaticGet_STRIDE_SIZE_FLOAT4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0xD1B0);
		}
		static ::System::Int32* StaticGet_STRIDE_SIZE_BOOL()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0xD1B4);
		}
		static ::System::Int32* StaticGet_STRIDE_SIZE_MATRIX4X4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0xD1B8);
		}
		static ::System::Single* StaticGet_COMPUTE_SHADER_THREAD_COUNT()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0xD1BC);
		}
		static ::System::Int32* StaticGet_STRIDE_SIZE_FLOAT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0xD1C0);
		}
		static ::System::Int32* StaticGet_STRIDE_SIZE_INT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0xD1C4);
		}
		static ::System::Single* StaticGet_COMPUTE_SHADER_THREAD_COUNT_2D()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0xD1C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDANIMATIONCONSTANTS__CCTOR_OFFSET))();
		}
	};
}
