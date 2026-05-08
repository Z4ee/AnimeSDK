#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class MaterialPropertyBlock; }

#define MONOEFFECTINSTANCERENDERER_RENDERBATCH_GETSCRATCHFLOATARRAY_OFFSET UNITYSDK_OFFSET(0xF7EB440)
#define MONOEFFECTINSTANCERENDERER_RENDERBATCH_GETSCRATCHVECTORARRAY_OFFSET UNITYSDK_OFFSET(0xF7EB590)
#define MONOEFFECTINSTANCERENDERER_RENDERBATCH__CTOR_OFFSET UNITYSDK_OFFSET(0xF7EB690)

inline static constexpr unsigned int MonoEffectInstanceRenderer_RenderBatch_TypeDefinitionIndex = 29501;

class MonoEffectInstanceRenderer_RenderBatch : public ::System::Object
{
public:
	::Il2CppArray<::UnityEngine::Vector4>* scratchVectorArray; // 0x10
	::Il2CppArray<::System::Single>* scratchFloatArray; // 0x18
	::Il2CppArray<::UnityEngine::Matrix4x4>* worldMatrices; // 0x20
	::UnityEngine::MaterialPropertyBlock* propertyBlock; // 0x28
	::System::Int32 count; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEFFECTINSTANCERENDERER_RENDERBATCH__CTOR_OFFSET))(this);
	}

	::Il2CppArray<::System::Single>* GetScratchFloatArray(::System::Int32 size, ::System::Single val)
	{
		return ((::Il2CppArray<::System::Single>*(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MONOEFFECTINSTANCERENDERER_RENDERBATCH_GETSCRATCHFLOATARRAY_OFFSET))(this, size, val);
	}

	::Il2CppArray<::UnityEngine::Vector4>* GetScratchVectorArray(::System::Int32 size, ::UnityEngine::Vector4 val)
	{
		return ((::Il2CppArray<::UnityEngine::Vector4>*(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MONOEFFECTINSTANCERENDERER_RENDERBATCH_GETSCRATCHVECTORARRAY_OFFSET))(this, size, val);
	}
};
