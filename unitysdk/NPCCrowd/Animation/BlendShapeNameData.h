#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NPCCROWD_ANIMATION_BLENDSHAPENAMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x12D22220)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int BlendShapeNameData_TypeDefinitionIndex = 58719;

	class BlendShapeNameData : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* names; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_BLENDSHAPENAMEDATA__CTOR_OFFSET))(this);
		}
	};
}
