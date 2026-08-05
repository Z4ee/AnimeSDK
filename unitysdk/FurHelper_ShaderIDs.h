#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FURHELPER_SHADERIDS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDF3610)

inline static constexpr unsigned int FurHelper_ShaderIDs_TypeDefinitionIndex = 27705;

class FurHelper_ShaderIDs : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_NO_ADDITIONAL_LIGHTS()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6240);
	}
	static ::System::Int32* StaticGet_SHAb()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6244);
	}
	static ::System::Int32* StaticGet__FurStep()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6248);
	}
	static ::System::Int32* StaticGet_LIGHTMAP_ON()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x624C);
	}
	static ::System::Int32* StaticGet__FurLayerCount()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6250);
	}
	static ::System::Int32* StaticGet_SHAr()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6254);
	}
	static ::System::Int32* StaticGet_SHAg()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6258);
	}
	static ::System::Int32* StaticGet_SHBg()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x625C);
	}
	static ::System::Int32* StaticGet_unity_RenderingLayer()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6260);
	}
	static ::System::Int32* StaticGet_SHBr()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6264);
	}
	static ::System::Int32* StaticGet_SHC()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6268);
	}
	static ::System::Int32* StaticGet_SHBb()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x626C);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FURHELPER_SHADERIDS__CCTOR_OFFSET))();
	}
};
