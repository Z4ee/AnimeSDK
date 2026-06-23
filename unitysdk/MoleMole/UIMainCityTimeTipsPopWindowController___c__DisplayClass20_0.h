#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_9F091E965E210217_28;
namespace MoleMole { class UIMainCityTimeTipsPopWindowController; }

#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x155DFC70)
#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS20_0__REFRESHBTN_G__ONGETTIMEINFORSP_0_OFFSET UNITYSDK_OFFSET(0x155DFC80)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityTimeTipsPopWindowController___c__DisplayClass20_0_TypeDefinitionIndex = 46500;

	class UIMainCityTimeTipsPopWindowController___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMainCityTimeTipsPopWindowController* __4__this; // 0x10
		::System::Boolean canPush; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshBtn_g__OnGetTimeInfoRsp_0(::Class_3_9F091E965E210217_28* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_9F091E965E210217_28*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS20_0__REFRESHBTN_G__ONGETTIMEINFORSP_0_OFFSET))(this, data);
		}
	};
}
