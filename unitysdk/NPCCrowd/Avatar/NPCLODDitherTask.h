#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Lod/NPCLODRendererItem.h"
#include "unitysdk/System/Object.h"

class Class_3_FFD0045B4597F294;
namespace NPCCrowd::Animation { class NPCUnionAnimator; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define NPCCROWD_AVATAR_NPCLODDITHERTASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD89CAD0)
#define NPCCROWD_AVATAR_NPCLODDITHERTASK_ISCOMPLETEVISIBLE_OFFSET UNITYSDK_OFFSET(0xD89CA40)
#define NPCCROWD_AVATAR_NPCLODDITHERTASK_POSTUPDATE_OFFSET UNITYSDK_OFFSET(0xD89C780)
#define NPCCROWD_AVATAR_NPCLODDITHERTASK_RESETDATA_OFFSET UNITYSDK_OFFSET(0xD89AD00)
#define NPCCROWD_AVATAR_NPCLODDITHERTASK_SETMATDITHERENABLE_OFFSET UNITYSDK_OFFSET(0xD89AE90)
#define NPCCROWD_AVATAR_NPCLODDITHERTASK_UPDATE_OFFSET UNITYSDK_OFFSET(0xD89B420)
#define NPCCROWD_AVATAR_NPCLODDITHERTASK__CTOR_OFFSET UNITYSDK_OFFSET(0xD89CB80)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCLODDitherTask_TypeDefinitionIndex = 76612;

	class NPCLODDitherTask : public ::System::Object
	{
	public:
		static ::UnityEngine::MaterialPropertyBlock** StaticGet_cachePropertyBlock()
		{
			return (::UnityEngine::MaterialPropertyBlock**)Il2CppClass::FromTypeDefinitionIndex(NPCLODDitherTask_TypeDefinitionIndex)->GetStaticField(0x47670);
		}
		::Il2CppArray<::NPCCrowd::Lod::NPCLODRendererItem>* renderers; // 0x10
		::NPCCrowd::Animation::NPCUnionAnimator* unionAnimator; // 0x18
		::System::Action_1<::System::Boolean>* callback; // 0x20
		::Class_3_FFD0045B4597F294* matCmp; // 0x28
		::System::Single fadeSpeed; // 0x30
		::System::Single startVal; // 0x34
		::System::Single elapsedTime; // 0x38
		::System::Boolean completed; // 0x3C
		::System::Single curVal; // 0x40
		::System::Int32 tag; // 0x44
		::System::Single targetVal; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCLODDITHERTASK__CTOR_OFFSET))(this);
		}

		::System::Void ResetData(::System::Int32 tag, ::System::Single targetVal, ::System::Single fadeSpeed, ::Il2CppArray<::NPCCrowd::Lod::NPCLODRendererItem>* renderers, ::System::Single startVal, ::System::Action_1<::System::Boolean>* callback, ::Class_3_FFD0045B4597F294* materialComponent, ::NPCCrowd::Animation::NPCUnionAnimator* unionAnimator)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single, ::Il2CppArray<::NPCCrowd::Lod::NPCLODRendererItem>*, ::System::Single, ::System::Action_1<::System::Boolean>*, ::Class_3_FFD0045B4597F294*, ::NPCCrowd::Animation::NPCUnionAnimator*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCLODDITHERTASK_RESETDATA_OFFSET))(this, tag, targetVal, fadeSpeed, renderers, startVal, callback, materialComponent, unionAnimator);
		}

		::System::Boolean Update(::System::Single deltaTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCLODDITHERTASK_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void PostUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCLODDITHERTASK_POSTUPDATE_OFFSET))(this);
		}

		::System::Boolean IsCompleteVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCLODDITHERTASK_ISCOMPLETEVISIBLE_OFFSET))(this);
		}

		::System::Void SetMatDitherEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCLODDITHERTASK_SETMATDITHERENABLE_OFFSET))(this, enable);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCLODDITHERTASK_DISPOSE_OFFSET))(this);
		}
	};
}
