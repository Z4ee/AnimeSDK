#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_53;
namespace MoleMole { class UITowerDefenseLevelPageController; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15A627D0)
#define MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER___C__DISPLAYCLASS24_0__REFRESHDETAIL_B__0_OFFSET UNITYSDK_OFFSET(0x15A627E0)
#define MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER___C__DISPLAYCLASS24_0__REFRESHDETAIL_B__2_OFFSET UNITYSDK_OFFSET(0x15A62920)

namespace MoleMole
{
	inline static constexpr unsigned int UITowerDefenseLevelPageController___c__DisplayClass24_0_TypeDefinitionIndex = 84614;

	class UITowerDefenseLevelPageController___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* monsterList; // 0x10
		::MoleMole::UITowerDefenseLevelPageController* __4__this; // 0x18
		::System::Action* __9__2; // 0x20
		::Class_2_208CC9941471731A_53* template_; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshDetail_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER___C__DISPLAYCLASS24_0__REFRESHDETAIL_B__0_OFFSET))(this);
		}

		::System::Void _RefreshDetail_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER___C__DISPLAYCLASS24_0__REFRESHDETAIL_B__2_OFFSET))(this);
		}
	};
}
