#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3056A65E74601914;
namespace MoleMole { class UIPhotoWallPageController___c__DisplayClass71_1; }

#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS71_2__CTOR_OFFSET UNITYSDK_OFFSET(0x13DF9100)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS71_2__ONCLICKRIGHTCALLBACK_B__2_OFFSET UNITYSDK_OFFSET(0x13DF9110)

namespace MoleMole
{
	inline static constexpr unsigned int UIPhotoWallPageController___c__DisplayClass71_2_TypeDefinitionIndex = 66548;

	class UIPhotoWallPageController___c__DisplayClass71_2 : public ::System::Object
	{
	public:
		::MoleMole::UIPhotoWallPageController___c__DisplayClass71_1* CS___8__locals2; // 0x10
		::Class_1_3056A65E74601914* data; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS71_2__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickRightCallback_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS71_2__ONCLICKRIGHTCALLBACK_B__2_OFFSET))(this);
		}
	};
}
