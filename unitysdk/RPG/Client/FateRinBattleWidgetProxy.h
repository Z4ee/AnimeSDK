#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B1F1559084C796C7;

#define RPG_CLIENT_FATERINBATTLEWIDGETPROXY_CLOSEBATTLEWIDGET_OFFSET UNITYSDK_OFFSET(0x197188D0)
#define RPG_CLIENT_FATERINBATTLEWIDGETPROXY_ONHUDACTIVECHANGE_OFFSET UNITYSDK_OFFSET(0x19718930)
#define RPG_CLIENT_FATERINBATTLEWIDGETPROXY_OPENBATTLEWIDGET_OFFSET UNITYSDK_OFFSET(0x19718810)
#define RPG_CLIENT_FATERINBATTLEWIDGETPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x19718800)

namespace RPG::Client
{
	inline static constexpr unsigned int FateRinBattleWidgetProxy_TypeDefinitionIndex = 68938;

	class FateRinBattleWidgetProxy : public ::System::Object
	{
	public:
		::Class_2_B1F1559084C796C7* _BattleWidgetPage; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERINBATTLEWIDGETPROXY__CTOR_OFFSET))(this);
		}

		::System::Void OpenBattleWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERINBATTLEWIDGETPROXY_OPENBATTLEWIDGET_OFFSET))(this);
		}

		::System::Void CloseBattleWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERINBATTLEWIDGETPROXY_CLOSEBATTLEWIDGET_OFFSET))(this);
		}

		::System::Void OnHudActiveChange(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERINBATTLEWIDGETPROXY_ONHUDACTIVECHANGE_OFFSET))(this, a1);
		}
	};
}
