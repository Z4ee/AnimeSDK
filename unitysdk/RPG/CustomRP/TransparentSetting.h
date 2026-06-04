#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_TRANSPARENTSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x18F27540)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int TransparentSetting_TypeDefinitionIndex = 35531;

	class TransparentSetting : public ::System::Object
	{
	public:
		::System::Boolean EnableOffscreenTransparent; // 0x10
		::System::Boolean NeedSceneTransparentRefraction; // 0x11
		::System::Boolean NeedSFXTransparentRefraction; // 0x12

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_TRANSPARENTSETTING__CTOR_OFFSET))(this);
		}
	};
}
