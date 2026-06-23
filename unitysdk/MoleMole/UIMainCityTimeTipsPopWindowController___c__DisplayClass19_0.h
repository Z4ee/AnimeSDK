#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_296;
class Class_2_BA0E092CFC4D361C;
namespace MoleMole { class UIMainCityTimeTipsPopWindowController; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16E93A70)
#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__REFRESHDESC_B__1_OFFSET UNITYSDK_OFFSET(0x16E93A80)
#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__REFRESHDESC_G__ADDTEXTROW_0_OFFSET UNITYSDK_OFFSET(0x16E93BC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityTimeTipsPopWindowController___c__DisplayClass19_0_TypeDefinitionIndex = 46499;

	class UIMainCityTimeTipsPopWindowController___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::Class_2_BA0E092CFC4D361C* cfgMgr; // 0x10
		::UnityEngine::RectTransform* content; // 0x18
		::MoleMole::UIMainCityTimeTipsPopWindowController* __4__this; // 0x20
		::System::Int32 cnt; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshDesc_b__1(::Class_2_208CC9941471731A_296* a, ::Class_2_208CC9941471731A_296* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_296*, ::Class_2_208CC9941471731A_296*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__REFRESHDESC_B__1_OFFSET))(this, a, b);
		}

		::System::Void _RefreshDesc_g__AddTextRow_0(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__REFRESHDESC_G__ADDTEXTROW_0_OFFSET))(this, key);
		}
	};
}
