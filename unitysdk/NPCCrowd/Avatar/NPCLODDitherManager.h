#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Lod/NPCLODRendererItem.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleManagerBase.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

class Class_3_FFD0045B4597F294;
namespace NPCCrowd::Animation { class NPCUnionAnimator; }
namespace NPCCrowd::Avatar { class NPCLODDitherTask; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AVATAR_NPCLODDITHERMANAGER_ADDDITHERTASK_OFFSET UNITYSDK_OFFSET(0x10A0B040)
#define NPCCROWD_AVATAR_NPCLODDITHERMANAGER_FORCEDITHERTASK_OFFSET UNITYSDK_OFFSET(0x10A0B470)
#define NPCCROWD_AVATAR_NPCLODDITHERMANAGER_GET_OFFSET UNITYSDK_OFFSET(0x10A0AC70)
#define NPCCROWD_AVATAR_NPCLODDITHERMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x10A0ADF0)
#define NPCCROWD_AVATAR_NPCLODDITHERMANAGER_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x10A0BE00)
#define NPCCROWD_AVATAR_NPCLODDITHERMANAGER_PREUPDATE_OFFSET UNITYSDK_OFFSET(0x10A0B810)
#define NPCCROWD_AVATAR_NPCLODDITHERMANAGER_REMOVETASK_OFFSET UNITYSDK_OFFSET(0x10A0B340)
#define NPCCROWD_AVATAR_NPCLODDITHERMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x10A0C360)
#define NPCCROWD_AVATAR_NPCLODDITHERMANAGER___BASE_INIT_OFFSET UNITYSDK_OFFSET(0x10A0C370)
#define NPCCROWD_AVATAR_NPCLODDITHERMANAGER___BASE_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x10A0C400)
#define NPCCROWD_AVATAR_NPCLODDITHERMANAGER___BASE_PREUPDATE_OFFSET UNITYSDK_OFFSET(0x10A0C4A0)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCLODDitherManager_TypeDefinitionIndex = 64762;

	class NPCLODDitherManager : public ::NPCCrowd::NPCCrowdModuleManagerBase
	{
	public:
		::System::Collections::Generic::List_1<::NPCCrowd::Avatar::NPCLODDitherTask*>* invalidTasks; // 0x18
		::System::Collections::Generic::List_1<::System::Action_1<::System::Boolean>*>* callbacks; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::Avatar::NPCLODDitherTask*>* lodTasks; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* lodDitherVal; // 0x30
		::Unity::Jobs::JobHandle _jobHandle; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCLODDITHERMANAGER__CTOR_OFFSET))(this);
		}

		static ::NPCCrowd::Avatar::NPCLODDitherManager* Get()
		{
			return ((::NPCCrowd::Avatar::NPCLODDitherManager*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCLODDITHERMANAGER_GET_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCLODDITHERMANAGER_INIT_OFFSET))(this);
		}

		::System::Void AddDitherTask(::System::Int32 tag, ::System::Single startVal, ::System::Single targetVal, ::System::Single fadeSpeed, ::Il2CppArray<::NPCCrowd::Lod::NPCLODRendererItem>* renderers, ::System::Action_1<::System::Boolean>* callback, ::Class_3_FFD0045B4597F294* materialComponent, ::System::Boolean inheritValue, ::System::Boolean replace, ::NPCCrowd::Animation::NPCUnionAnimator* unionAnimator)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::Il2CppArray<::NPCCrowd::Lod::NPCLODRendererItem>*, ::System::Action_1<::System::Boolean>*, ::Class_3_FFD0045B4597F294*, ::System::Boolean, ::System::Boolean, ::NPCCrowd::Animation::NPCUnionAnimator*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCLODDITHERMANAGER_ADDDITHERTASK_OFFSET))(this, tag, startVal, targetVal, fadeSpeed, renderers, callback, materialComponent, inheritValue, replace, unionAnimator);
		}

		::System::Void RemoveTask(::System::Int32 tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCLODDITHERMANAGER_REMOVETASK_OFFSET))(this, tag);
		}

		::System::Void ForceDitherTask(::System::Int32 tag, ::System::Single startVal, ::System::Single targetVal, ::Il2CppArray<::NPCCrowd::Lod::NPCLODRendererItem>* renderers, ::Class_3_FFD0045B4597F294* materialComponent, ::System::Boolean inheritValue, ::System::Boolean replace, ::NPCCrowd::Animation::NPCUnionAnimator* unionAnimator)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single, ::Il2CppArray<::NPCCrowd::Lod::NPCLODRendererItem>*, ::Class_3_FFD0045B4597F294*, ::System::Boolean, ::System::Boolean, ::NPCCrowd::Animation::NPCUnionAnimator*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCLODDITHERMANAGER_FORCEDITHERTASK_OFFSET))(this, tag, startVal, targetVal, renderers, materialComponent, inheritValue, replace, unionAnimator);
		}

		::System::Void PreUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCLODDITHERMANAGER_PREUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void PostLateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCLODDITHERMANAGER_POSTLATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCLODDITHERMANAGER___BASE_INIT_OFFSET))(this);
		}

		::System::Void __base_PostLateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCLODDITHERMANAGER___BASE_POSTLATEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_PreUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCLODDITHERMANAGER___BASE_PREUPDATE_OFFSET))(this, P0);
		}
	};
}
