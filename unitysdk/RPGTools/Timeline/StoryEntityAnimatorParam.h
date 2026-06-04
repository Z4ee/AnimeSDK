#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimatorParameterType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_STORYENTITYANIMATORPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xD058690)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int StoryEntityAnimatorParam_TypeDefinitionIndex = 45524;

	class StoryEntityAnimatorParam : public ::System::Object
	{
	public:
		::System::String* ParameterName; // 0x10
		::RPG::GameCore::AnimatorParameterType ParameterType; // 0x18
		::System::Boolean BoolValue; // 0x1C
		::System::Single FloatValue; // 0x20
		::System::Int32 IntValue; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYENTITYANIMATORPARAM__CTOR_OFFSET))(this);
		}
	};
}
