#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Lod/ConditionData.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace NPCCrowd::Lod { class INPCCrowdDistanceCheckInterface; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER_NPCCROWDDISTANCECHECK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11B30180)
#define NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER_NPCCROWDDISTANCECHECK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11B30230)
#define NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER_NPCCROWDDISTANCECHECK_INVOKE_OFFSET UNITYSDK_OFFSET(0x11B2F590)
#define NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER_NPCCROWDDISTANCECHECK__CTOR_OFFSET UNITYSDK_OFFSET(0x11B30170)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdDistanceManager_NpcCrowdDistanceCheck_TypeDefinitionIndex = 80073;

	class NPCCrowdDistanceManager_NpcCrowdDistanceCheck : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER_NPCCROWDDISTANCECHECK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::NPCCrowd::Lod::ConditionData condition, ::System::Boolean greater, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* p1, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* p2)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::ConditionData, ::System::Boolean, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER_NPCCROWDDISTANCECHECK_INVOKE_OFFSET))(this, condition, greater, p1, p2);
		}

		::System::IAsyncResult* BeginInvoke(::NPCCrowd::Lod::ConditionData condition, ::System::Boolean greater, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* p1, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* p2, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::NPCCrowd::Lod::ConditionData, ::System::Boolean, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER_NPCCROWDDISTANCECHECK_BEGININVOKE_OFFSET))(this, condition, greater, p1, p2, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDDISTANCEMANAGER_NPCCROWDDISTANCECHECK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
