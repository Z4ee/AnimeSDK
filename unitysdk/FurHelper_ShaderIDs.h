#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FURHELPER_SHADERIDS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A6E9460)

inline static constexpr unsigned int FurHelper_ShaderIDs_TypeDefinitionIndex = 29537;

class FurHelper_ShaderIDs : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_RenderingLayer()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x66D0);
	}
	static ::System::Int32* StaticGet_NO_ADDITIONAL_LIGHTS()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x66D4);
	}
	static ::System::Int32* StaticGet_SHC()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x66D8);
	}
	static ::System::Int32* StaticGet_SHAr()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x66DC);
	}
	static ::System::Int32* StaticGet_SHBb()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x66E0);
	}
	static ::System::Int32* StaticGet_SHBg()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x66E4);
	}
	static ::System::Int32* StaticGet_LIGHTMAP_ON()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x66E8);
	}
	static ::System::Int32* StaticGet_SHBr()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x66EC);
	}
	static ::System::Int32* StaticGet_FurStep()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x66F0);
	}
	static ::System::Int32* StaticGet_SHAg()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x66F4);
	}
	static ::System::Int32* StaticGet_FurLayerCount()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x66F8);
	}
	static ::System::Int32* StaticGet_SHAb()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x66FC);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FURHELPER_SHADERIDS__CCTOR_OFFSET))();
	}
};
