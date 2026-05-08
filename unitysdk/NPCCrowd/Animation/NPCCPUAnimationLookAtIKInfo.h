#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::Animation { class NPCCPUAnimationLookAtIKParam; }
namespace NPCCrowd::Animation { class NPCCPUAnimationLookControllerParam; }
namespace System { class String; }

#define NPCCROWD_ANIMATION_NPCCPUANIMATIONLOOKATIKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xD453030)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCPUAnimationLookAtIKInfo_TypeDefinitionIndex = 71666;

	class NPCCPUAnimationLookAtIKInfo : public ::System::Object
	{
	public:
		::System::String* attachPoint; // 0x10
		::Il2CppArray<::System::Int32>* spineBoneIDList; // 0x18
		::Il2CppArray<::System::String*>* spineBonePathList; // 0x20
		::System::Int32 headBoneID; // 0x28
		::System::String* headBonePath; // 0x30
		::Il2CppArray<::System::Int32>* eyeBoneIDList; // 0x38
		::Il2CppArray<::System::String*>* eyeBonePathList; // 0x40
		::UnityEngine::Vector3 spineAxis; // 0x48
		::UnityEngine::Vector3 headAxis; // 0x54
		::UnityEngine::Vector3 eyeAxis; // 0x60
		::NPCCrowd::Animation::NPCCPUAnimationLookControllerParam* lookControllerParam; // 0x70
		::NPCCrowd::Animation::NPCCPUAnimationLookAtIKParam* lookAtIKParam; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONLOOKATIKINFO__CTOR_OFFSET))(this);
		}
	};
}
