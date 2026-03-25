#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MONOUILAYOUTELEMENTAUTOSWITCH_LAYOUTELEMENTPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x9D4C6E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoUILayoutElementAutoSwitch_LayoutElementProperty_TypeDefinitionIndex = 59513;

	class MonoUILayoutElementAutoSwitch_LayoutElementProperty : public ::System::Object
	{
	public:
		::System::Boolean IgnoreLayout; // 0x10
		::System::Single MinWidth; // 0x14
		::System::Single MinHeight; // 0x18
		::System::Single PreferredWidth; // 0x1C
		::System::Single PreferredHeight; // 0x20
		::System::Single FlexibleWidth; // 0x24
		::System::Single FlexibleHeight; // 0x28
		::System::Int32 LayoutPriority; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUILAYOUTELEMENTAUTOSWITCH_LAYOUTELEMENTPROPERTY__CTOR_OFFSET))(this);
		}
	};
}
