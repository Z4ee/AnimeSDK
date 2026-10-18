#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_SWRTPASS_SHADERIDS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC74FB0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int SWRTPass_ShaderIDs_TypeDefinitionIndex = 37871;

	class SWRTPass_ShaderIDs : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__MainTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xB6B0);
		}
		static ::System::Int32* StaticGet__Triangle8()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xB6B4);
		}
		static ::System::Int32* StaticGet__Positions()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xB6B8);
		}
		static ::System::Int32* StaticGet__SWRTCaptureDepth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xB6BC);
		}
		static ::System::Int32* StaticGet__BVHNodes8()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xB6C0);
		}
		static ::System::Int32* StaticGet__Normals()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xB6C4);
		}
		static ::System::Int32* StaticGet__SWRTCameraPosWS()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xB6C8);
		}
		static ::System::Int32* StaticGet__NormalTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xB6CC);
		}
		static ::System::Int32* StaticGet__TriangleIndex8()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xB6D0);
		}
		static ::System::Int32* StaticGet__WorldToLocals()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xB6D4);
		}
		static ::System::Int32* StaticGet__Tangents()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xB6D8);
		}
		static ::System::Int32* StaticGet__UVs()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xB6DC);
		}
		static ::System::Int32* StaticGet__CapturePosWS()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xB6E0);
		}
		static ::System::Int32* StaticGet__CaptureNrmWS()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xB6E4);
		}
		static ::System::Int32* StaticGet__SWRTComputeResultRW()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xB6E8);
		}
		static ::System::Int32* StaticGet__SWRTComputeSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xB6EC);
		}
		static ::System::Int32* StaticGet__Indices()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xB6F0);
		}
		static ::System::Int32* StaticGet__BlasOffsets8()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xB6F4);
		}
		static ::System::Int32* StaticGet__RendererIndex8()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xB6F8);
		}
		static ::System::Int32* StaticGet__LocalToWorlds()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xB6FC);
		}
		static ::System::Int32* StaticGet__BlasIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xB700);
		}
		static ::System::Int32* StaticGet__Materials()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xB704);
		}
		static ::System::Int32* StaticGet__UVTransform()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xB708);
		}
		static ::System::Int32* StaticGet__SWRTComputeResult()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xB70C);
		}
		static ::System::Int32* StaticGet__AlbedoTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SWRTPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xB710);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS_SHADERIDS__CCTOR_OFFSET))();
		}
	};
}
