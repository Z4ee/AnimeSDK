#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/NativeHashSet_2.h"
#include "unitysdk/NPCCrowd/Ability/NPCEntityNativeData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace NPCCrowd::AI { class AttractorRuntimeData; }

#define NPCCROWD_AI_ATTRACTORQUERYENTITYPROCESSOR_EXECUTE_OFFSET UNITYSDK_OFFSET(0x11B0F860)
#define NPCCROWD_AI_ATTRACTORQUERYENTITYPROCESSOR_GETNATIVEDATA_OFFSET UNITYSDK_OFFSET(0x11B0F760)
#define NPCCROWD_AI_ATTRACTORQUERYENTITYPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x11B0FA70)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AttractorQueryEntityProcessor_TypeDefinitionIndex = 46377;

	class AttractorQueryEntityProcessor : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORQUERYENTITYPROCESSOR__CTOR_OFFSET))(this);
		}

		static ::NPCCrowd::Ability::NPCEntityNativeData GetNativeData(::System::UInt32 entityId, ::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData> entityMap)
		{
			return ((::NPCCrowd::Ability::NPCEntityNativeData(*)(::System::UInt32, ::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData>))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORQUERYENTITYPROCESSOR_GETNATIVEDATA_OFFSET))(entityId, entityMap);
		}

		::Unity::Jobs::JobHandle Execute(::NPCCrowd::AI::AttractorRuntimeData* runtime, ::System::Single deltaTime, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::NPCCrowd::AI::AttractorRuntimeData*, ::System::Single, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORQUERYENTITYPROCESSOR_EXECUTE_OFFSET))(this, runtime, deltaTime, dependsOn);
		}
	};
}
