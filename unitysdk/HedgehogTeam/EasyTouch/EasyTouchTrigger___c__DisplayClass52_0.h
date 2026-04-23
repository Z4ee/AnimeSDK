#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HedgehogTeam::EasyTouch { class EasyTouchTrigger_EasyTouchReceiver; }
namespace System { class String; }

#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER___C__DISPLAYCLASS52_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12C48DF0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER___C__DISPLAYCLASS52_0__GETTRIGGER_B__0_OFFSET UNITYSDK_OFFSET(0x12C48E70)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int EasyTouchTrigger___c__DisplayClass52_0_TypeDefinitionIndex = 36985;

	class EasyTouchTrigger___c__DisplayClass52_0 : public ::System::Object
	{
	public:
		::System::String* triggerName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER___C__DISPLAYCLASS52_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetTrigger_b__0(::HedgehogTeam::EasyTouch::EasyTouchTrigger_EasyTouchReceiver* n)
		{
			return ((::System::Boolean(*)(::PVOID, ::HedgehogTeam::EasyTouch::EasyTouchTrigger_EasyTouchReceiver*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER___C__DISPLAYCLASS52_0__GETTRIGGER_B__0_OFFSET))(this, n);
		}
	};
}
