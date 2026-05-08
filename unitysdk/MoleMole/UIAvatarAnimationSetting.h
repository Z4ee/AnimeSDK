#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UIAVATARANIMATIONSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x158AF8B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarAnimationSetting_TypeDefinitionIndex = 49200;

	class UIAvatarAnimationSetting : public ::System::Object
	{
	public:
		::System::String* AnimationName; // 0x10
		::System::Int32 AniLayer; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARANIMATIONSETTING__CTOR_OFFSET))(this);
		}
	};
}
