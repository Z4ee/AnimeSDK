#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_4A628DAD59F70BCB_2;
namespace MoleMole { class UINyakichiPageController; }
namespace System { class Action; }

#define MOLEMOLE_UINYAKICHIPAGECONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16A6ADA0)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER___C__DISPLAYCLASS10_0__ONTAKEREWARD_B__0_OFFSET UNITYSDK_OFFSET(0x16A6ADB0)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER___C__DISPLAYCLASS10_0__ONTAKEREWARD_B__1_OFFSET UNITYSDK_OFFSET(0x16A6B260)

namespace MoleMole
{
	inline static constexpr unsigned int UINyakichiPageController___c__DisplayClass10_0_TypeDefinitionIndex = 87113;

	class UINyakichiPageController___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::MoleMole::UINyakichiPageController* __4__this; // 0x10
		::System::Action* __9__1; // 0x18
		::Class_3_4A628DAD59F70BCB_2* value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnTakeReward_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER___C__DISPLAYCLASS10_0__ONTAKEREWARD_B__0_OFFSET))(this);
		}

		::System::Void _OnTakeReward_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER___C__DISPLAYCLASS10_0__ONTAKEREWARD_B__1_OFFSET))(this);
		}
	};
}
