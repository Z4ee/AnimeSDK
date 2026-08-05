#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SHADERVARIANTCOLLECTOR_ENDSHADERCOMPILECOLLECT_OFFSET UNITYSDK_OFFSET(0x1FC70360)
#define SHADERVARIANTCOLLECTOR_ONGETINSTANCE_OFFSET UNITYSDK_OFFSET(0x1FC70350)
#define SHADERVARIANTCOLLECTOR_ONSHADERCOMPILE_OFFSET UNITYSDK_OFFSET(0x1FC70370)
#define SHADERVARIANTCOLLECTOR_STARTSHADERCOMPILECOLLECT_OFFSET UNITYSDK_OFFSET(0x1FC70340)
#define SHADERVARIANTCOLLECTOR_STARTSHADERVARIANTCOLLECTOR_OFFSET UNITYSDK_OFFSET(0x1FC70330)
#define SHADERVARIANTCOLLECTOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC70390)
#define SHADERVARIANTCOLLECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC70380)

inline static constexpr unsigned int ShaderVariantCollector_TypeDefinitionIndex = 39158;

class ShaderVariantCollector : public ::System::Object
{
public:
	static ::System::String** StaticGet__sceneName()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderVariantCollector_TypeDefinitionIndex)->GetStaticField(0x2A970);
	}
	static ::System::Int32* StaticGet__levelID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderVariantCollector_TypeDefinitionIndex)->GetStaticField(0x8F30);
	}
	static ::System::Boolean* StaticGet_s_EnableShaderCollector()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ShaderVariantCollector_TypeDefinitionIndex)->GetStaticField(0x8F34);
	}
	static ::System::Boolean* StaticGet__collectorStart()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ShaderVariantCollector_TypeDefinitionIndex)->GetStaticField(0x8F35);
	}
	// static const ::System::String* PLATFORM; // 0x0
	// static const ::System::String* VERSION; // 0x0
	// static const ::System::String* CONTENT; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERVARIANTCOLLECTOR__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SHADERVARIANTCOLLECTOR__CCTOR_OFFSET))();
	}

	static ::System::Void StartShaderVariantCollector()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SHADERVARIANTCOLLECTOR_STARTSHADERVARIANTCOLLECTOR_OFFSET))();
	}

	static ::System::Void StartShaderCompileCollect(::System::String* sceneName, ::System::Int32 levelID)
	{
		return ((::System::Void(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SHADERVARIANTCOLLECTOR_STARTSHADERCOMPILECOLLECT_OFFSET))(sceneName, levelID);
	}

	static ::System::Void OnGetInstance(::Foundation::AssetPath path)
	{
		return ((::System::Void(*)(::Foundation::AssetPath))((::PBYTE)hIl2Cpp + SHADERVARIANTCOLLECTOR_ONGETINSTANCE_OFFSET))(path);
	}

	static ::System::Void EndShaderCompileCollect()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SHADERVARIANTCOLLECTOR_ENDSHADERCOMPILECOLLECT_OFFSET))();
	}

	static ::System::Void OnShaderCompile(::System::String* shaderCompileInfos)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SHADERVARIANTCOLLECTOR_ONSHADERCOMPILE_OFFSET))(shaderCompileInfos);
	}
};
