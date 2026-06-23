#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace NPCCrowd::Lod { class NPCCrowdPositionAgent; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_28B671B377BD13CF_METHOD_2_DA0C05F7A3F43143_OFFSET UNITYSDK_OFFSET(0x13109690)
#define CLASS_2_28B671B377BD13CF_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x13109860)
#define CLASS_2_28B671B377BD13CF_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x13109040)
#define CLASS_2_28B671B377BD13CF__CTOR_OFFSET UNITYSDK_OFFSET(0x131097D0)

inline static constexpr unsigned int Class_2_28B671B377BD13CF_TypeDefinitionIndex = 51496;

class Class_2_28B671B377BD13CF : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::Lod::NPCCrowdPositionAgent*>* Field_2_1; // 0x10
	::System::Boolean Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28B671B377BD13CF__CTOR_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_28B671B377BD13CF_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_DA0C05F7A3F43143(::NPCCrowd::Lod::NPCCrowdPositionAgent* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::NPCCrowdPositionAgent*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_28B671B377BD13CF_METHOD_2_DA0C05F7A3F43143_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_28B671B377BD13CF_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}
};
