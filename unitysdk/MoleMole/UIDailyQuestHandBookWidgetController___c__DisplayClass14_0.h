#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1A3197598F874EB7_Class_1_EAA4242F06F6F828;
namespace MoleMole { class UIDailyQuestHandBookWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15662AC0)
#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS14_0__TRYPLAYCANTAKEREWARDEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x15663C60)
#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS14_0__TRYPLAYCANTAKEREWARDEFFECT_G__DOPLAYPROGRESSANIM_2_OFFSET UNITYSDK_OFFSET(0x15663CF0)
#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS14_0__TRYPLAYCANTAKEREWARDEFFECT_G__PLAYANIMATIONTOWARDSCURLEVEL_1_OFFSET UNITYSDK_OFFSET(0x15662C10)

namespace MoleMole
{
	inline static constexpr unsigned int UIDailyQuestHandBookWidgetController___c__DisplayClass14_0_TypeDefinitionIndex = 69669;

	class UIDailyQuestHandBookWidgetController___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::Class_2_1A3197598F874EB7_Class_1_EAA4242F06F6F828* questGroup; // 0x10
		::MoleMole::UIDailyQuestHandBookWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryPlayCanTakeRewardEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS14_0__TRYPLAYCANTAKEREWARDEFFECT_B__0_OFFSET))(this);
		}

		::System::Void _TryPlayCanTakeRewardEffect_g__PlayAnimationTowardsCurLevel_1(::System::Int32 fromLevel, ::System::Single duration, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS14_0__TRYPLAYCANTAKEREWARDEFFECT_G__PLAYANIMATIONTOWARDSCURLEVEL_1_OFFSET))(this, fromLevel, duration, onFinish);
		}

		::System::Void _TryPlayCanTakeRewardEffect_g__DoPlayProgressAnim_2(::System::Single lastValue, ::System::Single curValue, ::System::Single duration, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS14_0__TRYPLAYCANTAKEREWARDEFFECT_G__DOPLAYPROGRESSANIM_2_OFFSET))(this, lastValue, curValue, duration, onFinish);
		}
	};
}
