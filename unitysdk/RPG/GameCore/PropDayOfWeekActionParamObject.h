#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PropDayOfWeekAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PROPDAYOFWEEKACTIONPARAMOBJECT_METHOD_2_5F955E3522F9B32A_OFFSET UNITYSDK_OFFSET(0x1BA1E6D0)
#define RPG_GAMECORE_PROPDAYOFWEEKACTIONPARAMOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA1E900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropDayOfWeekActionParamObject_TypeDefinitionIndex = 21267;

	class PropDayOfWeekActionParamObject : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PropDayOfWeekAction Action; // 0x10
		::System::String* AnimStateName; // 0x18
		::System::Single NormalizedTimeStart; // 0x20
		::System::Single TransitionDuration; // 0x24
		::System::Boolean FixedTransitionDuration; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDAYOFWEEKACTIONPARAMOBJECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5F955E3522F9B32A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropDayOfWeekActionParamObject*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropDayOfWeekActionParamObject*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDAYOFWEEKACTIONPARAMOBJECT_METHOD_2_5F955E3522F9B32A_OFFSET))(a1, a2);
		}
	};
}
