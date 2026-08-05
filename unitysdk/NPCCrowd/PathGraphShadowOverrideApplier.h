#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphShadowOverrideConfig.h"
#include "unitysdk/NPCCrowd/PathGraphShadowOverrideApplier_CachedNpcShadowState.h"
#include "unitysdk/NPCCrowd/PathGraphShadowOverrideApplier_ShadowFadeState.h"
#include "unitysdk/System/Object.h"

class Class_3_F2DAD7F45F518868;
class MonoRenderEntity;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Rendering::Universal { class MonoPerObjectShadow; }

#define NPCCROWD_PATHGRAPHSHADOWOVERRIDEAPPLIER_APPLYFORSPAWNEDNPC_OFFSET UNITYSDK_OFFSET(0x9547670)
#define NPCCROWD_PATHGRAPHSHADOWOVERRIDEAPPLIER_APPLYOVERRIDE_1_OFFSET UNITYSDK_OFFSET(0x9548B20)
#define NPCCROWD_PATHGRAPHSHADOWOVERRIDEAPPLIER_APPLYOVERRIDE_OFFSET UNITYSDK_OFFSET(0x95486F0)
#define NPCCROWD_PATHGRAPHSHADOWOVERRIDEAPPLIER_APPLY_OFFSET UNITYSDK_OFFSET(0x9547970)
#define NPCCROWD_PATHGRAPHSHADOWOVERRIDEAPPLIER_CAPTURE_OFFSET UNITYSDK_OFFSET(0x9548CB0)
#define NPCCROWD_PATHGRAPHSHADOWOVERRIDEAPPLIER_CLEARCACHE_OFFSET UNITYSDK_OFFSET(0x9547560)
#define NPCCROWD_PATHGRAPHSHADOWOVERRIDEAPPLIER_REFRESHSNAPSHOTSIFNEEDED_OFFSET UNITYSDK_OFFSET(0x95487B0)
#define NPCCROWD_PATHGRAPHSHADOWOVERRIDEAPPLIER_RESTORE_OFFSET UNITYSDK_OFFSET(0x9548BE0)
#define NPCCROWD_PATHGRAPHSHADOWOVERRIDEAPPLIER__CCTOR_OFFSET UNITYSDK_OFFSET(0x9548D50)

namespace NPCCrowd
{
	inline static constexpr unsigned int PathGraphShadowOverrideApplier_TypeDefinitionIndex = 46714;

	class PathGraphShadowOverrideApplier : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::PathGraphShadowOverrideApplier_CachedNpcShadowState>** StaticGet_s_cachedStateByGoId()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::PathGraphShadowOverrideApplier_CachedNpcShadowState>**)Il2CppClass::FromTypeDefinitionIndex(PathGraphShadowOverrideApplier_TypeDefinitionIndex)->GetStaticField(0x511E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_PATHGRAPHSHADOWOVERRIDEAPPLIER__CCTOR_OFFSET))();
		}

		static ::System::Void ClearCache()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_PATHGRAPHSHADOWOVERRIDEAPPLIER_CLEARCACHE_OFFSET))();
		}

		static ::System::Void ApplyForSpawnedNpc(::Class_3_F2DAD7F45F518868* npcComp, ::System::Int32 graphID)
		{
			return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_PATHGRAPHSHADOWOVERRIDEAPPLIER_APPLYFORSPAWNEDNPC_OFFSET))(npcComp, graphID);
		}

		static ::System::Void Apply(::UnityEngine::GameObject* rootGo, ::System::Boolean enableOverride, ::NPCCrowd::AI::PathGraphShadowOverrideConfig config)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean, ::NPCCrowd::AI::PathGraphShadowOverrideConfig))((::PBYTE)hIl2Cpp + NPCCROWD_PATHGRAPHSHADOWOVERRIDEAPPLIER_APPLY_OFFSET))(rootGo, enableOverride, config);
		}

		static ::System::Void RefreshSnapshotsIfNeeded(::NPCCrowd::PathGraphShadowOverrideApplier_CachedNpcShadowState& cachedState, ::MonoRenderEntity* monoRenderEntity)
		{
			return ((::System::Void(*)(::NPCCrowd::PathGraphShadowOverrideApplier_CachedNpcShadowState&, ::MonoRenderEntity*))((::PBYTE)hIl2Cpp + NPCCROWD_PATHGRAPHSHADOWOVERRIDEAPPLIER_REFRESHSNAPSHOTSIFNEEDED_OFFSET))(cachedState, monoRenderEntity);
		}

		static ::NPCCrowd::PathGraphShadowOverrideApplier_ShadowFadeState Capture(::MonoRenderEntity* monoRenderEntity)
		{
			return ((::NPCCrowd::PathGraphShadowOverrideApplier_ShadowFadeState(*)(::MonoRenderEntity*))((::PBYTE)hIl2Cpp + NPCCROWD_PATHGRAPHSHADOWOVERRIDEAPPLIER_CAPTURE_OFFSET))(monoRenderEntity);
		}

		static ::System::Void ApplyOverride(::UnityEngine::Rendering::Universal::MonoPerObjectShadow* monoPerObjectShadow, ::NPCCrowd::AI::PathGraphShadowOverrideConfig config)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::MonoPerObjectShadow*, ::NPCCrowd::AI::PathGraphShadowOverrideConfig))((::PBYTE)hIl2Cpp + NPCCROWD_PATHGRAPHSHADOWOVERRIDEAPPLIER_APPLYOVERRIDE_OFFSET))(monoPerObjectShadow, config);
		}

		static ::System::Void ApplyOverride_1(::MonoRenderEntity* monoRenderEntity, ::NPCCrowd::AI::PathGraphShadowOverrideConfig config)
		{
			return ((::System::Void(*)(::MonoRenderEntity*, ::NPCCrowd::AI::PathGraphShadowOverrideConfig))((::PBYTE)hIl2Cpp + NPCCROWD_PATHGRAPHSHADOWOVERRIDEAPPLIER_APPLYOVERRIDE_1_OFFSET))(monoRenderEntity, config);
		}

		static ::System::Void Restore(::MonoRenderEntity* monoRenderEntity, ::NPCCrowd::PathGraphShadowOverrideApplier_ShadowFadeState snapshot)
		{
			return ((::System::Void(*)(::MonoRenderEntity*, ::NPCCrowd::PathGraphShadowOverrideApplier_ShadowFadeState))((::PBYTE)hIl2Cpp + NPCCROWD_PATHGRAPHSHADOWOVERRIDEAPPLIER_RESTORE_OFFSET))(monoRenderEntity, snapshot);
		}
	};
}
