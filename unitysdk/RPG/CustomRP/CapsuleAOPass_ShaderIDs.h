#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_CAPSULEAOPASS_SHADERIDS__CCTOR_OFFSET UNITYSDK_OFFSET(0x18EC03F0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CapsuleAOPass_ShaderIDs_TypeDefinitionIndex = 35222;

	class CapsuleAOPass_ShaderIDs : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__OccluderListLookupTextureRW()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x12D50);
		}
		static ::System::Int32* StaticGet__Tile_Size()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x12D54);
		}
		static ::System::Int32* StaticGet__DynamicOccluderBuffer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x12D58);
		}
		static ::System::Int32* StaticGet__TileSizeInHiZMipN()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x12D5C);
		}
		static ::System::Int32* StaticGet__InvProjectMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x12D60);
		}
		static ::System::Int32* StaticGet__CapsuleAOColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x12D64);
		}
		static ::System::Int32* StaticGet__NumDynamicOccluders()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x12D68);
		}
		static ::System::Int32* StaticGet__HizMinTex_TexelSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x12D6C);
		}
		static ::System::Int32* StaticGet__OccluderListPitch()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x12D70);
		}
		static ::System::Int32* StaticGet__OccluderListBufferRW()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x12D74);
		}
		static ::System::Int32* StaticGet__ConeOcclusionTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x12D78);
		}
		static ::System::Int32* StaticGet__HiZMipLevel()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x12D7C);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEAOPASS_SHADERIDS__CCTOR_OFFSET))();
		}
	};
}
