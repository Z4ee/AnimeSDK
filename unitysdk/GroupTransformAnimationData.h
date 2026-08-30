#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AnimTriggerType.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector2.h"

class MarbleTransformAnimationHandle;
class TransformAnimationData;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GROUPTRANSFORMANIMATIONDATA_GET_ISLOOPANIM_OFFSET UNITYSDK_OFFSET(0x15875EA0)
#define GROUPTRANSFORMANIMATIONDATA_METHOD_3_8FF66D2074F19F61_OFFSET UNITYSDK_OFFSET(0x15875F10)
#define GROUPTRANSFORMANIMATIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x158760C0)

inline static constexpr unsigned int GroupTransformAnimationData_TypeDefinitionIndex = 47593;

class GroupTransformAnimationData : public ::UnityEngine::ScriptableObject
{
public:
	::System::String* AminationName; // 0x18
	::System::Boolean NeedInputDir; // 0x20
	::System::Boolean UseRealTime; // 0x21
	::System::Single AnimationDurTimeOverride; // 0x24
	::System::Collections::Generic::List_1<::TransformAnimationData*>* RootAnimations; // 0x28
	::AnimTriggerType TriggerType; // 0x30
	::UnityEngine::Vector2 LoopRange; // 0x34
	::System::String* AudioEventName; // 0x40
	::System::String* LoopBreakAudioEventName; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUPTRANSFORMANIMATIONDATA__CTOR_OFFSET))(this);
	}

	::System::Boolean get_IsLoopAnim()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUPTRANSFORMANIMATIONDATA_GET_ISLOOPANIM_OFFSET))(this);
	}

	::System::Void Method_3_8FF66D2074F19F61(::MarbleTransformAnimationHandle* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MarbleTransformAnimationHandle*))((::PBYTE)hIl2Cpp + GROUPTRANSFORMANIMATIONDATA_METHOD_3_8FF66D2074F19F61_OFFSET))(this, a1);
	}
};
