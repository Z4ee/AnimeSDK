#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3659D99D9E0DCBB9_4.h"
#include "unitysdk/System/Object.h"

class Class_1_1685EC66FBD28897;
class Class_1_82DFA6C681F8DC14;

#define MOLEMOLE_UIACTIVITYRETURNTASKROWWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15893470)
#define MOLEMOLE_UIACTIVITYRETURNTASKROWWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHREWARDINFO_B__0_OFFSET UNITYSDK_OFFSET(0x15893480)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityReturnTaskRowWidgetController___c__DisplayClass8_0_TypeDefinitionIndex = 49492;

	class UIActivityReturnTaskRowWidgetController___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::Class_1_82DFA6C681F8DC14* task; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNTASKROWWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::Class_1_1685EC66FBD28897* _RefreshRewardInfo_b__0(::Struct_2_3659D99D9E0DCBB9_4 x)
		{
			return ((::Class_1_1685EC66FBD28897*(*)(::PVOID, ::Struct_2_3659D99D9E0DCBB9_4))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNTASKROWWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHREWARDINFO_B__0_OFFSET))(this, x);
		}
	};
}
