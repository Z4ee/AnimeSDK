#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_931;
class Class_2_D4543FD41E1C7939;
namespace MoleMole { class UIMainCityTimeTipsPopWindowController; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17DF1430)
#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__REFRESHDESC_B__1_OFFSET UNITYSDK_OFFSET(0x17DF1440)
#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__REFRESHDESC_G__ADDTEXTROW_0_OFFSET UNITYSDK_OFFSET(0x17DF1580)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityTimeTipsPopWindowController___c__DisplayClass19_0_TypeDefinitionIndex = 65802;

	class UIMainCityTimeTipsPopWindowController___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::Class_2_D4543FD41E1C7939* cfgMgr; // 0x10
		::UnityEngine::RectTransform* content; // 0x18
		::MoleMole::UIMainCityTimeTipsPopWindowController* __4__this; // 0x20
		::System::Int32 cnt; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshDesc_b__1(::Class_2_208CC9941471731A_931* a, ::Class_2_208CC9941471731A_931* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_931*, ::Class_2_208CC9941471731A_931*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__REFRESHDESC_B__1_OFFSET))(this, a, b);
		}

		::System::Void _RefreshDesc_g__AddTextRow_0(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__REFRESHDESC_G__ADDTEXTROW_0_OFFSET))(this, key);
		}
	};
}
