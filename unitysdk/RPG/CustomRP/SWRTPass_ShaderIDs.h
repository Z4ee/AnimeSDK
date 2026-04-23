#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_SWRTPASS_SHADERIDS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1817D660)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int SWRTPass_ShaderIDs_TypeDefinitionIndex = 34953;

	class SWRTPass_ShaderIDs : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__Indices()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11480);
		}
		static ::System::Int32* StaticGet__UVs()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11484);
		}
		static ::System::Int32* StaticGet__Triangle8()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11488);
		}
		static ::System::Int32* StaticGet__RendererIndex8()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1148C);
		}
		static ::System::Int32* StaticGet__Tangents()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11490);
		}
		static ::System::Int32* StaticGet__Positions()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11494);
		}
		static ::System::Int32* StaticGet__Materials()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11498);
		}
		static ::System::Int32* StaticGet__NormalTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1149C);
		}
		static ::System::Int32* StaticGet__MainTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x114A0);
		}
		static ::System::Int32* StaticGet__UVTransform()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x114A4);
		}
		static ::System::Int32* StaticGet__BVHNodes8()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x114A8);
		}
		static ::System::Int32* StaticGet__Normals()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x114AC);
		}
		static ::System::Int32* StaticGet__BlasIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x114B0);
		}
		static ::System::Int32* StaticGet__TriangleIndex8()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x114B4);
		}
		static ::System::Int32* StaticGet__LocalToWorlds()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x114B8);
		}
		static ::System::Int32* StaticGet__WorldToLocals()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x114BC);
		}
		static ::System::Int32* StaticGet__AlbedoTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x114C0);
		}
		static ::System::Int32* StaticGet__BlasOffsets8()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x114C4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS_SHADERIDS__CCTOR_OFFSET))();
		}
	};
}
