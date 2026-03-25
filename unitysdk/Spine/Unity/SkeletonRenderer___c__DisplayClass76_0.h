#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SPINE_UNITY_SKELETONRENDERER___C__DISPLAYCLASS76_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18422CD0)
#define SPINE_UNITY_SKELETONRENDERER___C__DISPLAYCLASS76_0__FINDANDAPPLYSEPARATORSLOTS_B__0_OFFSET UNITYSDK_OFFSET(0x184234C0)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonRenderer___c__DisplayClass76_0_TypeDefinitionIndex = 34785;

	class SkeletonRenderer___c__DisplayClass76_0 : public ::System::Object
	{
	public:
		::System::String* startsWith; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER___C__DISPLAYCLASS76_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _FindAndApplySeparatorSlots_b__0(::System::String* slotName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER___C__DISPLAYCLASS76_0__FINDANDAPPLYSEPARATORSLOTS_B__0_OFFSET))(this, slotName);
		}
	};
}
