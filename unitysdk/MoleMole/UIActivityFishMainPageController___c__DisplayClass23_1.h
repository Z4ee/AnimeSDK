#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7D59F735ACB38970_Enum_3_6E0E8267CDDC65CF.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIActivityFishMainPageController___c__DisplayClass23_0; }
namespace System { class Action; }

#define MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER___C__DISPLAYCLASS23_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15E43FF0)
#define MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER___C__DISPLAYCLASS23_1__REFRESHAVATARREWARD_B__2_OFFSET UNITYSDK_OFFSET(0x15E44000)
#define MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER___C__DISPLAYCLASS23_1__REFRESHAVATARREWARD_B__3_OFFSET UNITYSDK_OFFSET(0x15E441C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityFishMainPageController___c__DisplayClass23_1_TypeDefinitionIndex = 82078;

	class UIActivityFishMainPageController___c__DisplayClass23_1 : public ::System::Object
	{
	public:
		::System::Action* __9__3; // 0x10
		::MoleMole::UIActivityFishMainPageController___c__DisplayClass23_0* CS___8__locals1; // 0x18
		::System::Single fadeDuration; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER___C__DISPLAYCLASS23_1__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshAvatarReward_b__2(::Class_1_7D59F735ACB38970_Enum_3_6E0E8267CDDC65CF _)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7D59F735ACB38970_Enum_3_6E0E8267CDDC65CF))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER___C__DISPLAYCLASS23_1__REFRESHAVATARREWARD_B__2_OFFSET))(this, _);
		}

		::System::Void _RefreshAvatarReward_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER___C__DISPLAYCLASS23_1__REFRESHAVATARREWARD_B__3_OFFSET))(this);
		}
	};
}
