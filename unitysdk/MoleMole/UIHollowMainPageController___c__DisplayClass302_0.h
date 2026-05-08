#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E9529ED64113E4E9;
namespace System { class Action; }

#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS302_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14688720)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS302_0__LOADNXTLEVELFAKELOADINGVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x14688730)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainPageController___c__DisplayClass302_0_TypeDefinitionIndex = 44962;

	class UIHollowMainPageController___c__DisplayClass302_0 : public ::System::Object
	{
	public:
		::System::Action* onFakeVideoLoaded; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS302_0__CTOR_OFFSET))(this);
		}

		::System::Void _LoadNxtLevelFakeLoadingView_b__0(::Class_1_E9529ED64113E4E9* vp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E9529ED64113E4E9*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS302_0__LOADNXTLEVELFAKELOADINGVIEW_B__0_OFFSET))(this, vp);
		}
	};
}
