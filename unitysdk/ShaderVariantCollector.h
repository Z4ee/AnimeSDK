#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SHADERVARIANTCOLLECTOR_ENDSHADERCOMPILECOLLECT_OFFSET UNITYSDK_OFFSET(0x1C5612C0)
#define SHADERVARIANTCOLLECTOR_ONGETINSTANCE_OFFSET UNITYSDK_OFFSET(0x1C5612B0)
#define SHADERVARIANTCOLLECTOR_ONSHADERCOMPILE_OFFSET UNITYSDK_OFFSET(0x1C5612D0)
#define SHADERVARIANTCOLLECTOR_STARTSHADERCOMPILECOLLECT_OFFSET UNITYSDK_OFFSET(0x1C5612A0)
#define SHADERVARIANTCOLLECTOR_STARTSHADERVARIANTCOLLECTOR_OFFSET UNITYSDK_OFFSET(0x1C561290)
#define SHADERVARIANTCOLLECTOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C5612F0)
#define SHADERVARIANTCOLLECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5612E0)

inline static constexpr unsigned int ShaderVariantCollector_TypeDefinitionIndex = 36887;

class ShaderVariantCollector : public ::System::Object
{
public:
	static ::System::String** StaticGet__sceneName()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderVariantCollector_TypeDefinitionIndex)->GetStaticField(0x273C0);
	}
	static ::System::Int32* StaticGet__levelID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderVariantCollector_TypeDefinitionIndex)->GetStaticField(0x8980);
	}
	static ::System::Boolean* StaticGet__collectorStart()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ShaderVariantCollector_TypeDefinitionIndex)->GetStaticField(0x8984);
	}
	static ::System::Boolean* StaticGet_s_EnableShaderCollector()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ShaderVariantCollector_TypeDefinitionIndex)->GetStaticField(0x8985);
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
