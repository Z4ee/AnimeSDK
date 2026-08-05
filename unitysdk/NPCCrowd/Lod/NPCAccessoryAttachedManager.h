#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define NPCCROWD_LOD_NPCACCESSORYATTACHEDMANAGER_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xD89DD60)
#define NPCCROWD_LOD_NPCACCESSORYATTACHEDMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0xD89DE70)
#define NPCCROWD_LOD_NPCACCESSORYATTACHEDMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xD89E130)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCAccessoryAttachedManager_TypeDefinitionIndex = 54391;

	class NPCAccessoryAttachedManager : public ::System::Object
	{
	public:
		::Nap::NapECS::EcsFilter* filter; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCACCESSORYATTACHEDMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void CreateFilters(::Nap::NapECS::EcsWorld* world)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCACCESSORYATTACHEDMANAGER_CREATEFILTERS_OFFSET))(this, world);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCACCESSORYATTACHEDMANAGER_UPDATE_OFFSET))(this, deltaTime);
		}
	};
}
