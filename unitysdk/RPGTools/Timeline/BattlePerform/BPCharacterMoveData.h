#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CharacterStoryMoveData_MoveStopMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERMOVEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xE8AEB40)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERMOVEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE8AEB10)

namespace RPGTools::Timeline::BattlePerform
{
	inline static constexpr unsigned int BPCharacterMoveData_TypeDefinitionIndex = 48819;

	class BPCharacterMoveData : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_JsonPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BPCharacterMoveData_TypeDefinitionIndex)->GetStaticField(0x62D80);
		}
		::System::String* CharacterUniqueName; // 0x10
		::RPGTools::Timeline::CharacterStoryMoveData_MoveStopMode StopMode; // 0x18
		::System::Single MotionSpeed; // 0x1C
		::System::Boolean OverrideMotionAnimStartOffset; // 0x20
		::System::Single MotionAnimStartOffset; // 0x24
		::System::Boolean OverrideMotionAnimStartTransitionDuration; // 0x28
		::System::Single MotionAnimStartTransitionDuration; // 0x2C
		::System::Boolean OverrideMotionAnimStopInfo; // 0x30
		::System::Single MotionAnimStopOffset; // 0x34
		::System::Single MotionAnimStopDuration; // 0x38
		::System::Single MotionAnimStopLoopSpeed; // 0x3C
		::UnityEngine::Vector3 StartPosition; // 0x40
		::UnityEngine::Vector3 EndPosition; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERMOVEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERMOVEDATA__CCTOR_OFFSET))();
		}
	};
}
