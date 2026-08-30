#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SPINE_UNITY_ANIMATIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E62FBB0)

namespace Spine::Unity
{
	inline static constexpr unsigned int AnimationData_TypeDefinitionIndex = 43841;

	class AnimationData : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::Int32 trackIndex; // 0x18
		::System::Boolean isLoop; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ANIMATIONDATA__CTOR_OFFSET))(this);
		}
	};
}
