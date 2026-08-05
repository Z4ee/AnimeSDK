#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3659D99D9E0DCBB9.h"
#include "unitysdk/System/Object.h"

class Class_1_1685EC66FBD28897;
class Class_1_CF95A1A81C7C32A8;

#define MOLEMOLE_UIACTIVITYRETURNTASKROWV2WIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18E22250)
#define MOLEMOLE_UIACTIVITYRETURNTASKROWV2WIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHREWARDINFO_B__0_OFFSET UNITYSDK_OFFSET(0x18E22260)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityReturnTaskRowV2WidgetController___c__DisplayClass8_0_TypeDefinitionIndex = 45050;

	class UIActivityReturnTaskRowV2WidgetController___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::Class_1_CF95A1A81C7C32A8* task; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNTASKROWV2WIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::Class_1_1685EC66FBD28897* _RefreshRewardInfo_b__0(::Struct_2_3659D99D9E0DCBB9 x)
		{
			return ((::Class_1_1685EC66FBD28897*(*)(::PVOID, ::Struct_2_3659D99D9E0DCBB9))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNTASKROWV2WIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHREWARDINFO_B__0_OFFSET))(this, x);
		}
	};
}
