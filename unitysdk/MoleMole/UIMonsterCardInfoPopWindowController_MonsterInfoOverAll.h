#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_F8EB4D9464ADCCA1;
namespace MoleMole { class UIMonsterCardInfoPopWindowController_MonsterInfoExt; }

#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTERINFOOVERALL__CTOR_OFFSET UNITYSDK_OFFSET(0x15165190)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterCardInfoPopWindowController_MonsterInfoOverAll_TypeDefinitionIndex = 66172;

	class UIMonsterCardInfoPopWindowController_MonsterInfoOverAll : public ::System::Object
	{
	public:
		::MoleMole::UIMonsterCardInfoPopWindowController_MonsterInfoExt* m_extInfo; // 0x10
		::Class_2_F8EB4D9464ADCCA1* m_cfg; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTERINFOOVERALL__CTOR_OFFSET))(this);
		}
	};
}
