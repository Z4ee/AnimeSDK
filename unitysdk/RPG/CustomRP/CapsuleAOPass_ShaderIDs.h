#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_CAPSULEAOPASS_SHADERIDS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC0D620)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CapsuleAOPass_ShaderIDs_TypeDefinitionIndex = 37552;

	class CapsuleAOPass_ShaderIDs : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__Tile_Size()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x9860);
		}
		static ::System::Int32* StaticGet__DynamicOccluderBuffer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x9864);
		}
		static ::System::Int32* StaticGet__HizMinTex_TexelSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x9868);
		}
		static ::System::Int32* StaticGet__OccluderListLookupTextureRW()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x986C);
		}
		static ::System::Int32* StaticGet__HiZMipLevel()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x9870);
		}
		static ::System::Int32* StaticGet__OccluderListBufferRW()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x9874);
		}
		static ::System::Int32* StaticGet__ConeOcclusionTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x9878);
		}
		static ::System::Int32* StaticGet__CapsuleAOColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x987C);
		}
		static ::System::Int32* StaticGet__NumDynamicOccluders()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x9880);
		}
		static ::System::Int32* StaticGet__InvProjectMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x9884);
		}
		static ::System::Int32* StaticGet__OccluderListPitch()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x9888);
		}
		static ::System::Int32* StaticGet__TileSizeInHiZMipN()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x988C);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEAOPASS_SHADERIDS__CCTOR_OFFSET))();
		}
	};
}
