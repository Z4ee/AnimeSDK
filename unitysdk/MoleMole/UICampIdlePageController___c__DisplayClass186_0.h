#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00.h"
#include "unitysdk/System/Object.h"

class Class_1_1685EC66FBD28897;

#define MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS186_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19326480)
#define MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS186_0__REFRESHBATTLEREWARD_B__0_OFFSET UNITYSDK_OFFSET(0x19326490)

namespace MoleMole
{
	inline static constexpr unsigned int UICampIdlePageController___c__DisplayClass186_0_TypeDefinitionIndex = 75910;

	class UICampIdlePageController___c__DisplayClass186_0 : public ::System::Object
	{
	public:
		::System::Boolean isDoneEver; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS186_0__CTOR_OFFSET))(this);
		}

		::Class_1_1685EC66FBD28897* _RefreshBattleReward_b__0(::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00 x)
		{
			return ((::Class_1_1685EC66FBD28897*(*)(::PVOID, ::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS186_0__REFRESHBATTLEREWARD_B__0_OFFSET))(this, x);
		}
	};
}
