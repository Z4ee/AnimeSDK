#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoUIPivotContainmentDetect; }
namespace System { class Action; }

#define RPG_CLIENT_MONOUIPIVOTCONTAINMENTDETECT___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2978F0)
#define RPG_CLIENT_MONOUIPIVOTCONTAINMENTDETECT___C__DISPLAYCLASS17_0__SUBSCRIBEISCONTAINEDCHANGED_B__0_OFFSET UNITYSDK_OFFSET(0x1C297B30)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoUIPivotContainmentDetect___c__DisplayClass17_0_TypeDefinitionIndex = 72542;

	class MonoUIPivotContainmentDetect___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::System::Action* listener; // 0x10
		::RPG::Client::MonoUIPivotContainmentDetect* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIPIVOTCONTAINMENTDETECT___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Void _SubscribeIsContainedChanged_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIPIVOTCONTAINMENTDETECT___C__DISPLAYCLASS17_0__SUBSCRIBEISCONTAINEDCHANGED_B__0_OFFSET))(this);
		}
	};
}
