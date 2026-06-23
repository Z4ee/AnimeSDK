#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleSubSystemBase.h"

class Class_3_5F87CE2CF67D917A;
class Class_3_F2DAD7F45F518868;
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define NPCCROWD_AI_STATETREECONTEXTSUBSYSTEM_COLLECTCROWDNPC_OFFSET UNITYSDK_OFFSET(0xE00C5D0)
#define NPCCROWD_AI_STATETREECONTEXTSUBSYSTEM_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xE00C190)
#define NPCCROWD_AI_STATETREECONTEXTSUBSYSTEM_FLUSHCROWDNPC_OFFSET UNITYSDK_OFFSET(0xE00C810)
#define NPCCROWD_AI_STATETREECONTEXTSUBSYSTEM_ISIDLE_OFFSET UNITYSDK_OFFSET(0xE00C3D0)
#define NPCCROWD_AI_STATETREECONTEXTSUBSYSTEM_POSTPREUPDATE_OFFSET UNITYSDK_OFFSET(0xE00C4E0)
#define NPCCROWD_AI_STATETREECONTEXTSUBSYSTEM_PREUPDATE_OFFSET UNITYSDK_OFFSET(0xE00C2E0)
#define NPCCROWD_AI_STATETREECONTEXTSUBSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0xE00CE20)
#define NPCCROWD_AI_STATETREECONTEXTSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0xE00CE10)
#define NPCCROWD_AI_STATETREECONTEXTSUBSYSTEM___BASE_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xE00CEC0)
#define NPCCROWD_AI_STATETREECONTEXTSUBSYSTEM___BASE_POSTPREUPDATE_OFFSET UNITYSDK_OFFSET(0xE00CED0)
#define NPCCROWD_AI_STATETREECONTEXTSUBSYSTEM___BASE_PREUPDATE_OFFSET UNITYSDK_OFFSET(0xE00CF70)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int StateTreeContextSubSystem_TypeDefinitionIndex = 54171;

	class StateTreeContextSubSystem : public ::NPCCrowd::NPCCrowdModuleSubSystemBase
	{
	public:
		static ::System::Action_2<::Class_3_5F87CE2CF67D917A*, ::Class_3_F2DAD7F45F518868*>** StaticGet_s_flushCrowdNpcDelegate()
		{
			return (::System::Action_2<::Class_3_5F87CE2CF67D917A*, ::Class_3_F2DAD7F45F518868*>**)Il2CppClass::FromTypeDefinitionIndex(StateTreeContextSubSystem_TypeDefinitionIndex)->GetStaticField(0x4A200);
		}
		static ::System::Action_2<::Class_3_5F87CE2CF67D917A*, ::Class_3_F2DAD7F45F518868*>** StaticGet_s_collectCrowdNpcDelegate()
		{
			return (::System::Action_2<::Class_3_5F87CE2CF67D917A*, ::Class_3_F2DAD7F45F518868*>**)Il2CppClass::FromTypeDefinitionIndex(StateTreeContextSubSystem_TypeDefinitionIndex)->GetStaticField(0x4A208);
		}
		::Nap::NapECS::EcsFilter* _filterCrowdNpcContext; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_STATETREECONTEXTSUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_STATETREECONTEXTSUBSYSTEM__CCTOR_OFFSET))();
		}

		::System::Void CreateFilters(::Nap::NapECS::EcsWorld* world)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_STATETREECONTEXTSUBSYSTEM_CREATEFILTERS_OFFSET))(this, world);
		}

		::System::Void PreUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_STATETREECONTEXTSUBSYSTEM_PREUPDATE_OFFSET))(this, deltaTime);
		}

		static ::System::Boolean IsIdle(::System::UInt32 entityID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_STATETREECONTEXTSUBSYSTEM_ISIDLE_OFFSET))(entityID);
		}

		::System::Void PostPreUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_STATETREECONTEXTSUBSYSTEM_POSTPREUPDATE_OFFSET))(this, deltaTime);
		}

		static ::System::Void CollectCrowdNpc(::Class_3_5F87CE2CF67D917A* contextComponent, ::Class_3_F2DAD7F45F518868* npcComponent)
		{
			return ((::System::Void(*)(::Class_3_5F87CE2CF67D917A*, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_STATETREECONTEXTSUBSYSTEM_COLLECTCROWDNPC_OFFSET))(contextComponent, npcComponent);
		}

		static ::System::Void FlushCrowdNpc(::Class_3_5F87CE2CF67D917A* contextComponent, ::Class_3_F2DAD7F45F518868* npcComponent)
		{
			return ((::System::Void(*)(::Class_3_5F87CE2CF67D917A*, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_STATETREECONTEXTSUBSYSTEM_FLUSHCROWDNPC_OFFSET))(contextComponent, npcComponent);
		}

		::System::Void __base_CreateFilters(::Nap::NapECS::EcsWorld* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_STATETREECONTEXTSUBSYSTEM___BASE_CREATEFILTERS_OFFSET))(this, P0);
		}

		::System::Void __base_PostPreUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_STATETREECONTEXTSUBSYSTEM___BASE_POSTPREUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_PreUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_STATETREECONTEXTSUBSYSTEM___BASE_PREUPDATE_OFFSET))(this, P0);
		}
	};
}
