#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_0A55B5A82A61DAFA_2;
namespace System { class Action; }

#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x169CE5E0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___C__DISPLAYCLASS23_0___TRYRALLYNEXT_B__0_OFFSET UNITYSDK_OFFSET(0x169CE5F0)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___C__DISPLAYCLASS23_0___TRYRALLYNEXT_B__1_OFFSET UNITYSDK_OFFSET(0x169CE8D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowResultPageController___c__DisplayClass23_0_TypeDefinitionIndex = 80785;

	class UIHollowResultPageController___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::System::Action* RealBattleRequest; // 0x10
		::Class_2_0A55B5A82A61DAFA_2* hollowQuestTemplate; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Void __TryRallyNext_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___C__DISPLAYCLASS23_0___TRYRALLYNEXT_B__0_OFFSET))(this);
		}

		::System::Void __TryRallyNext_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___C__DISPLAYCLASS23_0___TRYRALLYNEXT_B__1_OFFSET))(this);
		}
	};
}
