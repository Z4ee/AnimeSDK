#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OCEANSDFGENERATOR_SHADERIDS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C42C530)

inline static constexpr unsigned int OceanSdfGenerator_ShaderIDs_TypeDefinitionIndex = 26954;

class OceanSdfGenerator_ShaderIDs : public ::System::Object
{
public:
	static ::System::Int32* StaticGet__FloodTexRead()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OceanSdfGenerator_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7280);
	}
	static ::System::Int32* StaticGet__FloodTex()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OceanSdfGenerator_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7284);
	}
	static ::System::Int32* StaticGet__StepSize()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OceanSdfGenerator_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7288);
	}
	static ::System::Int32* StaticGet__CoastlineTex()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OceanSdfGenerator_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x728C);
	}
	static ::System::Int32* StaticGet__Resolution()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OceanSdfGenerator_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7290);
	}
	static ::System::Int32* StaticGet__SeaLevel()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OceanSdfGenerator_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7294);
	}
	static ::System::Int32* StaticGet__SdfTex()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OceanSdfGenerator_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7298);
	}
	static ::System::Int32* StaticGet__CaptureTexRead()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OceanSdfGenerator_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x729C);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCEANSDFGENERATOR_SHADERIDS__CCTOR_OFFSET))();
	}
};
