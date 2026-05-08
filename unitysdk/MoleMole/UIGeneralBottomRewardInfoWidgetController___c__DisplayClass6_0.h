#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1685EC66FBD28897;
namespace System { class Action; }

#define MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x157A4410)
#define MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER___C__DISPLAYCLASS6_0__SETQUESTFIRSTREWARD_B__0_OFFSET UNITYSDK_OFFSET(0x157A4420)
#define MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER___C__DISPLAYCLASS6_0__SETQUESTFIRSTREWARD_B__1_OFFSET UNITYSDK_OFFSET(0x157A4450)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralBottomRewardInfoWidgetController___c__DisplayClass6_0_TypeDefinitionIndex = 50453;

	class UIGeneralBottomRewardInfoWidgetController___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::Action* overrideClickkAction; // 0x10
		::System::Boolean isFinish; // 0x18
		::System::Int32 questID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetQuestFirstReward_b__0(::Class_1_1685EC66FBD28897* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1685EC66FBD28897*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER___C__DISPLAYCLASS6_0__SETQUESTFIRSTREWARD_B__0_OFFSET))(this, data);
		}

		::System::Void _SetQuestFirstReward_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER___C__DISPLAYCLASS6_0__SETQUESTFIRSTREWARD_B__1_OFFSET))(this);
		}
	};
}
