#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_9F091E965E210217_37;
namespace MoleMole { class UIMainCityTimeTipsPopWindowController; }

#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18A27AC0)
#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS20_0__REFRESHBTN_G__ONGETTIMEINFORSP_0_OFFSET UNITYSDK_OFFSET(0x18A27AD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityTimeTipsPopWindowController___c__DisplayClass20_0_TypeDefinitionIndex = 65800;

	class UIMainCityTimeTipsPopWindowController___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMainCityTimeTipsPopWindowController* __4__this; // 0x10
		::System::Boolean canPush; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshBtn_g__OnGetTimeInfoRsp_0(::Class_3_9F091E965E210217_37* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_9F091E965E210217_37*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS20_0__REFRESHBTN_G__ONGETTIMEINFORSP_0_OFFSET))(this, data);
		}
	};
}
