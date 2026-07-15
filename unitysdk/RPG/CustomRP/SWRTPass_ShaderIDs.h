#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_SWRTPASS_SHADERIDS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D131590)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int SWRTPass_ShaderIDs_TypeDefinitionIndex = 36020;

	class SWRTPass_ShaderIDs : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__Indices()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x129D0);
		}
		static ::System::Int32* StaticGet__MainTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x129D4);
		}
		static ::System::Int32* StaticGet__BlasOffsets8()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x129D8);
		}
		static ::System::Int32* StaticGet__BlasIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x129DC);
		}
		static ::System::Int32* StaticGet__TriangleIndex8()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x129E0);
		}
		static ::System::Int32* StaticGet__NormalTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x129E4);
		}
		static ::System::Int32* StaticGet__UVs()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x129E8);
		}
		static ::System::Int32* StaticGet__Normals()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x129EC);
		}
		static ::System::Int32* StaticGet__Materials()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x129F0);
		}
		static ::System::Int32* StaticGet__BVHNodes8()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x129F4);
		}
		static ::System::Int32* StaticGet__WorldToLocals()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x129F8);
		}
		static ::System::Int32* StaticGet__LocalToWorlds()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x129FC);
		}
		static ::System::Int32* StaticGet__Tangents()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x12A00);
		}
		static ::System::Int32* StaticGet__UVTransform()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x12A04);
		}
		static ::System::Int32* StaticGet__RendererIndex8()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x12A08);
		}
		static ::System::Int32* StaticGet__Triangle8()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x12A0C);
		}
		static ::System::Int32* StaticGet__Positions()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x12A10);
		}
		static ::System::Int32* StaticGet__AlbedoTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x12A14);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS_SHADERIDS__CCTOR_OFFSET))();
		}
	};
}
