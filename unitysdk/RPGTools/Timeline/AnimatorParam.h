#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/AnimatorParam_ParamType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_ANIMATORPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xCFD8A20)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int AnimatorParam_TypeDefinitionIndex = 45418;

	class AnimatorParam : public ::System::Object
	{
	public:
		::RPGTools::Timeline::AnimatorParam_ParamType Type; // 0x10
		::System::String* ParamName; // 0x18
		::System::Int32 IntValue; // 0x20
		::System::Boolean BoolValue; // 0x24
		::System::Single FloatValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORPARAM__CTOR_OFFSET))(this);
		}
	};
}
