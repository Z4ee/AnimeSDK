#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FURHELPER_SHADERIDS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C996F10)

inline static constexpr unsigned int FurHelper_ShaderIDs_TypeDefinitionIndex = 26940;

class FurHelper_ShaderIDs : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_SHBg()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6280);
	}
	static ::System::Int32* StaticGet_SHAg()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6284);
	}
	static ::System::Int32* StaticGet_SHAb()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6288);
	}
	static ::System::Int32* StaticGet_SHBb()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x628C);
	}
	static ::System::Int32* StaticGet_RenderingLayer()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6290);
	}
	static ::System::Int32* StaticGet_LIGHTMAP_ON()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6294);
	}
	static ::System::Int32* StaticGet_SHBr()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6298);
	}
	static ::System::Int32* StaticGet_SHC()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x629C);
	}
	static ::System::Int32* StaticGet_NO_ADDITIONAL_LIGHTS()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x62A0);
	}
	static ::System::Int32* StaticGet_FurLayerCount()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x62A4);
	}
	static ::System::Int32* StaticGet_SHAr()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x62A8);
	}
	static ::System::Int32* StaticGet_FurStep()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FurHelper_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x62AC);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FURHELPER_SHADERIDS__CCTOR_OFFSET))();
	}
};
