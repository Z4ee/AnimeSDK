#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_ENTITYTIMELINECONTROLNODE_METHOD_1_ED150F169DBA57DC_OFFSET UNITYSDK_OFFSET(0x9605950)
#define RPG_CLIENT_ENTITYTIMELINECONTROLNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x9605A10)

namespace RPG::Client
{
	inline static constexpr unsigned int EntityTimelineControlNode_TypeDefinitionIndex = 51814;

	class EntityTimelineControlNode : public ::System::Object
	{
	public:
		::System::String* AnimStateName; // 0x10
		::System::Single AnimStateSpeed; // 0x18
		::System::Int32 AnimHash; // 0x1C
		::System::Single AnimClipDuration; // 0x20
		::System::Int32 NodeIndex; // 0x24
		::Il2CppArray<::System::Int32>* TrackIndex; // 0x28
		::Il2CppArray<::System::Int32>* TrackNodeIndex; // 0x30
		::Il2CppArray<::UnityEngine::AnimationCurve*>* PositionCurve; // 0x38
		::Il2CppArray<::UnityEngine::AnimationCurve*>* RotationCurve; // 0x40
		::System::String* ClipName; // 0x48
		::System::Boolean IsLoop; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYTIMELINECONTROLNODE__CTOR_OFFSET))(this);
		}

		::RPG::Client::EntityTimelineControlNode* Method_1_ED150F169DBA57DC()
		{
			return ((::RPG::Client::EntityTimelineControlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYTIMELINECONTROLNODE_METHOD_1_ED150F169DBA57DC_OFFSET))(this);
		}
	};
}
