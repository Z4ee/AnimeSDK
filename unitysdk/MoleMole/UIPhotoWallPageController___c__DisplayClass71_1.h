#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5A17F85799580BCA_Enum_3_6E0E8267CDDC65CF.h"
#include "unitysdk/System/Object.h"

class Class_1_57F7F2BF8C55D6B6;
namespace MoleMole { class UIPhotoWallPageController___c__DisplayClass71_0; }

#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS71_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16A719E0)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS71_1__ONCLICKRIGHTCALLBACK_B__1_OFFSET UNITYSDK_OFFSET(0x16A719F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPhotoWallPageController___c__DisplayClass71_1_TypeDefinitionIndex = 61303;

	class UIPhotoWallPageController___c__DisplayClass71_1 : public ::System::Object
	{
	public:
		::Class_1_57F7F2BF8C55D6B6* friend_; // 0x10
		::MoleMole::UIPhotoWallPageController___c__DisplayClass71_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS71_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickRightCallback_b__1(::Class_1_5A17F85799580BCA_Enum_3_6E0E8267CDDC65CF r)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5A17F85799580BCA_Enum_3_6E0E8267CDDC65CF))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS71_1__ONCLICKRIGHTCALLBACK_B__1_OFFSET))(this, r);
		}
	};
}
