#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1824EF69C8E376A3;
class Class_3_1699D6295DC3F818_1;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x173C3980)
#define MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER___C__DISPLAYCLASS23_0__REFRESHAVATARREWARD_B__0_OFFSET UNITYSDK_OFFSET(0x173C3990)
#define MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER___C__DISPLAYCLASS23_0__REFRESHAVATARREWARD_G__ONINFOBTNCLICK_1_OFFSET UNITYSDK_OFFSET(0x173C3AA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityFishMainPageController___c__DisplayClass23_0_TypeDefinitionIndex = 82079;

	class UIActivityFishMainPageController___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::Class_3_1699D6295DC3F818_1* reward; // 0x10
		::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>* avatarItemList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshAvatarReward_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER___C__DISPLAYCLASS23_0__REFRESHAVATARREWARD_B__0_OFFSET))(this);
		}

		::System::Void _RefreshAvatarReward_g__OnInfoBtnClick_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER___C__DISPLAYCLASS23_0__REFRESHAVATARREWARD_G__ONINFOBTNCLICK_1_OFFSET))(this);
		}
	};
}
