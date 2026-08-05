#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_472679C84451629A_19;
class Class_3_AE02BC8285203464_43;
class Class_4_CD7A8199BC0D6833;
namespace MoleMole { class UILevelResultV2_SmashBroPageController; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UILEVELRESULTV2_SMASHBROPAGECONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x174400B0)
#define MOLEMOLE_UILEVELRESULTV2_SMASHBROPAGECONTROLLER___C__DISPLAYCLASS8_0__REFRESHVIEWNORMALLEVEL_B__0_OFFSET UNITYSDK_OFFSET(0x174400C0)
#define MOLEMOLE_UILEVELRESULTV2_SMASHBROPAGECONTROLLER___C__DISPLAYCLASS8_0__REFRESHVIEWNORMALLEVEL_B__1_OFFSET UNITYSDK_OFFSET(0x174402A0)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelResultV2_SmashBroPageController___c__DisplayClass8_0_TypeDefinitionIndex = 47947;

	class UILevelResultV2_SmashBroPageController___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::Func_2<::Class_3_AE02BC8285203464_43*, ::System::Boolean>* __9__1; // 0x10
		::MoleMole::UILevelResultV2_SmashBroPageController* __4__this; // 0x18
		::Class_4_CD7A8199BC0D6833* smashContext; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_SMASHBROPAGECONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshViewNormalLevel_b__0(::Class_3_472679C84451629A_19* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_472679C84451629A_19*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_SMASHBROPAGECONTROLLER___C__DISPLAYCLASS8_0__REFRESHVIEWNORMALLEVEL_B__0_OFFSET))(this, rsp);
		}

		::System::Boolean _RefreshViewNormalLevel_b__1(::Class_3_AE02BC8285203464_43* match)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_AE02BC8285203464_43*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_SMASHBROPAGECONTROLLER___C__DISPLAYCLASS8_0__REFRESHVIEWNORMALLEVEL_B__1_OFFSET))(this, match);
		}
	};
}
