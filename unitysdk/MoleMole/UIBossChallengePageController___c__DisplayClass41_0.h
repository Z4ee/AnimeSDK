#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_025FF4981524A424_61;
namespace MoleMole { class UIBossChallengePageController; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___C__DISPLAYCLASS41_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1564CDD0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___C__DISPLAYCLASS41_0__ONRESETBTNCLICK_B__0_OFFSET UNITYSDK_OFFSET(0x1564CDE0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___C__DISPLAYCLASS41_0__ONRESETBTNCLICK_B__1_OFFSET UNITYSDK_OFFSET(0x1564D040)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___C__DISPLAYCLASS41_0__ONRESETBTNCLICK_B__2_OFFSET UNITYSDK_OFFSET(0x1564D070)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengePageController___c__DisplayClass41_0_TypeDefinitionIndex = 56297;

	class UIBossChallengePageController___c__DisplayClass41_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBossChallengePageController* __4__this; // 0x10
		::System::Action_2<::System::Boolean, ::Class_3_025FF4981524A424_61*>* __9__2; // 0x18
		::System::Action_2<::System::Boolean, ::Class_3_025FF4981524A424_61*>* __9__1; // 0x20
		::System::Boolean isResetAll; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___C__DISPLAYCLASS41_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnResetBtnClick_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___C__DISPLAYCLASS41_0__ONRESETBTNCLICK_B__0_OFFSET))(this);
		}

		::System::Void _OnResetBtnClick_b__1(::System::Boolean b, ::Class_3_025FF4981524A424_61* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_025FF4981524A424_61*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___C__DISPLAYCLASS41_0__ONRESETBTNCLICK_B__1_OFFSET))(this, b, rsp);
		}

		::System::Void _OnResetBtnClick_b__2(::System::Boolean b, ::Class_3_025FF4981524A424_61* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_025FF4981524A424_61*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___C__DISPLAYCLASS41_0__ONRESETBTNCLICK_B__2_OFFSET))(this, b, rsp);
		}
	};
}
