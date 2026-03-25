#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_GAMECORE_CUSTOMFUNCBTNNOTIFYPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xA8DC190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CustomFuncBtnNotifyParam_TypeDefinitionIndex = 43140;

	class CustomFuncBtnNotifyParam : public ::System::Object
	{
	public:
		::System::String* CustomFuncBtnName; // 0x10
		::System::Boolean IsShow; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUSTOMFUNCBTNNOTIFYPARAM__CTOR_OFFSET))(this);
		}
	};
}
