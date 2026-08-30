#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_SWRTPASS_SHADERIDS__CCTOR_OFFSET UNITYSDK_OFFSET(0x185BCE40)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int SWRTPass_ShaderIDs_TypeDefinitionIndex = 36881;

	class SWRTPass_ShaderIDs : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__Positions()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xEFB0);
		}
		static ::System::Int32* StaticGet__BlasIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xEFB4);
		}
		static ::System::Int32* StaticGet__UVs()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xEFB8);
		}
		static ::System::Int32* StaticGet__AlbedoTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xEFBC);
		}
		static ::System::Int32* StaticGet__MainTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xEFC0);
		}
		static ::System::Int32* StaticGet__LocalToWorlds()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xEFC4);
		}
		static ::System::Int32* StaticGet__UVTransform()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xEFC8);
		}
		static ::System::Int32* StaticGet__NormalTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xEFCC);
		}
		static ::System::Int32* StaticGet__Materials()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xEFD0);
		}
		static ::System::Int32* StaticGet__BlasOffsets8()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xEFD4);
		}
		static ::System::Int32* StaticGet__Indices()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xEFD8);
		}
		static ::System::Int32* StaticGet__Tangents()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xEFDC);
		}
		static ::System::Int32* StaticGet__WorldToLocals()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xEFE0);
		}
		static ::System::Int32* StaticGet__BVHNodes8()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xEFE4);
		}
		static ::System::Int32* StaticGet__RendererIndex8()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xEFE8);
		}
		static ::System::Int32* StaticGet__TriangleIndex8()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xEFEC);
		}
		static ::System::Int32* StaticGet__Triangle8()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xEFF0);
		}
		static ::System::Int32* StaticGet__Normals()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xEFF4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS_SHADERIDS__CCTOR_OFFSET))();
		}
	};
}
