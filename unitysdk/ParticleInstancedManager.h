#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"

class MonoEffectInstanceRenderer;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define PARTICLEINSTANCEDMANAGER_DRAWCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1C42D300)
#define PARTICLEINSTANCEDMANAGER_GETRENDERBATCHES_OFFSET UNITYSDK_OFFSET(0x1C42C6F0)
#define PARTICLEINSTANCEDMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1C423F80)
#define PARTICLEINSTANCEDMANAGER_HASCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1C42CB70)
#define PARTICLEINSTANCEDMANAGER_ISVALID_OFFSET UNITYSDK_OFFSET(0x1C42CC00)
#define PARTICLEINSTANCEDMANAGER_REBUILDBATCHES_OFFSET UNITYSDK_OFFSET(0x1C42C740)
#define PARTICLEINSTANCEDMANAGER_REGISTERCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1C424160)
#define PARTICLEINSTANCEDMANAGER_RENDERINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C42CE50)
#define PARTICLEINSTANCEDMANAGER_RENDER_OFFSET UNITYSDK_OFFSET(0x1C42CDA0)
#define PARTICLEINSTANCEDMANAGER_UNREGISTERCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1C424310)
#define PARTICLEINSTANCEDMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C42D510)
#define PARTICLEINSTANCEDMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C42C600)

inline static constexpr unsigned int ParticleInstancedManager_TypeDefinitionIndex = 26229;

class ParticleInstancedManager : public ::System::Object
{
public:
	static ::ParticleInstancedManager** StaticGet__instance()
	{
		return (::ParticleInstancedManager**)Il2CppClass::FromTypeDefinitionIndex(ParticleInstancedManager_TypeDefinitionIndex)->GetStaticField(0x22100);
	}
	static ::System::Boolean* StaticGet_EnableAABBFrustumCulling()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ParticleInstancedManager_TypeDefinitionIndex)->GetStaticField(0x72A0);
	}
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Collections::Generic::List_1<::MonoEffectInstanceRenderer*>*>* batches; // 0x10
	::System::Collections::Generic::List_1<::MonoEffectInstanceRenderer*>* controllers; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLEINSTANCEDMANAGER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PARTICLEINSTANCEDMANAGER__CCTOR_OFFSET))();
	}

	static ::ParticleInstancedManager* get_Instance()
	{
		return ((::ParticleInstancedManager*(*)())((::PBYTE)hIl2Cpp + PARTICLEINSTANCEDMANAGER_GET_INSTANCE_OFFSET))();
	}

	::System::Void RegisterController(::MonoEffectInstanceRenderer* controller)
	{
		return ((::System::Void(*)(::PVOID, ::MonoEffectInstanceRenderer*))((::PBYTE)hIl2Cpp + PARTICLEINSTANCEDMANAGER_REGISTERCONTROLLER_OFFSET))(this, controller);
	}

	::System::Void UnregisterController(::MonoEffectInstanceRenderer* controller)
	{
		return ((::System::Void(*)(::PVOID, ::MonoEffectInstanceRenderer*))((::PBYTE)hIl2Cpp + PARTICLEINSTANCEDMANAGER_UNREGISTERCONTROLLER_OFFSET))(this, controller);
	}

	::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Collections::Generic::List_1<::MonoEffectInstanceRenderer*>*>* GetRenderBatches()
	{
		return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Collections::Generic::List_1<::MonoEffectInstanceRenderer*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLEINSTANCEDMANAGER_GETRENDERBATCHES_OFFSET))(this);
	}

	::System::Boolean HasController(::MonoEffectInstanceRenderer* controller)
	{
		return ((::System::Boolean(*)(::PVOID, ::MonoEffectInstanceRenderer*))((::PBYTE)hIl2Cpp + PARTICLEINSTANCEDMANAGER_HASCONTROLLER_OFFSET))(this, controller);
	}

	::System::Void RebuildBatches()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLEINSTANCEDMANAGER_REBUILDBATCHES_OFFSET))(this);
	}

	::System::Boolean IsValid(::MonoEffectInstanceRenderer* controller)
	{
		return ((::System::Boolean(*)(::PVOID, ::MonoEffectInstanceRenderer*))((::PBYTE)hIl2Cpp + PARTICLEINSTANCEDMANAGER_ISVALID_OFFSET))(this, controller);
	}

	static ::System::Void Render(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::System::Boolean isHalfRes)
	{
		return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::System::Boolean))((::PBYTE)hIl2Cpp + PARTICLEINSTANCEDMANAGER_RENDER_OFFSET))(cmd, renderingData, isHalfRes);
	}

	::System::Void RenderInternal(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::System::Boolean isHalfRes)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::System::Boolean))((::PBYTE)hIl2Cpp + PARTICLEINSTANCEDMANAGER_RENDERINTERNAL_OFFSET))(this, cmd, renderingData, isHalfRes);
	}

	::System::Void DrawController(::UnityEngine::Rendering::CommandBuffer* cmd, ::MonoEffectInstanceRenderer* controller, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::System::Boolean isHalfRes)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::MonoEffectInstanceRenderer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::System::Boolean))((::PBYTE)hIl2Cpp + PARTICLEINSTANCEDMANAGER_DRAWCONTROLLER_OFFSET))(this, cmd, controller, renderingData, isHalfRes);
	}
};
