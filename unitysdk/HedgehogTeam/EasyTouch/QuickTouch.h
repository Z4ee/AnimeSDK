#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HedgehogTeam/EasyTouch/QuickBase.h"
#include "unitysdk/HedgehogTeam/EasyTouch/QuickTouch_ActionTriggering.h"

namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace HedgehogTeam::EasyTouch { class QuickTouch_OnTouch; }
namespace HedgehogTeam::EasyTouch { class QuickTouch_OnTouchNotOverMe; }

#define HEDGEHOGTEAM_EASYTOUCH_QUICKTOUCH_DOACTION_OFFSET UNITYSDK_OFFSET(0x146FD270)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKTOUCH_ISOVERME_OFFSET UNITYSDK_OFFSET(0x146FD0F0)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKTOUCH_UPDATE_OFFSET UNITYSDK_OFFSET(0x146FCCD0)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKTOUCH__CTOR_OFFSET UNITYSDK_OFFSET(0x146FCC40)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int QuickTouch_TypeDefinitionIndex = 37312;

	class QuickTouch : public ::HedgehogTeam::EasyTouch::QuickBase
	{
	public:
		::HedgehogTeam::EasyTouch::QuickTouch_OnTouch* onTouch; // 0x70
		::HedgehogTeam::EasyTouch::QuickTouch_OnTouchNotOverMe* onTouchNotOverMe; // 0x78
		::HedgehogTeam::EasyTouch::QuickTouch_ActionTriggering actionTriggering; // 0x80
		::HedgehogTeam::EasyTouch::Gesture* currentGesture; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKTOUCH__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKTOUCH_UPDATE_OFFSET))(this);
		}

		::System::Void DoAction(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKTOUCH_DOACTION_OFFSET))(this, a1);
		}

		::System::Boolean IsOverMe(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKTOUCH_ISOVERME_OFFSET))(this, a1);
		}
	};
}
