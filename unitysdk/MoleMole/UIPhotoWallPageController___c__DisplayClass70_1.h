#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF.h"
#include "unitysdk/System/Object.h"

class Class_1_57F7F2BF8C55D6B6;
namespace MoleMole { class UIPhotoWallPageController___c__DisplayClass70_0; }

#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS70_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13DF7F80)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS70_1__ONCLICKLEFTCALLBACK_B__1_OFFSET UNITYSDK_OFFSET(0x13DF7F90)

namespace MoleMole
{
	inline static constexpr unsigned int UIPhotoWallPageController___c__DisplayClass70_1_TypeDefinitionIndex = 66555;

	class UIPhotoWallPageController___c__DisplayClass70_1 : public ::System::Object
	{
	public:
		::MoleMole::UIPhotoWallPageController___c__DisplayClass70_0* CS___8__locals1; // 0x10
		::Class_1_57F7F2BF8C55D6B6* friend_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS70_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickLeftCallback_b__1(::Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF r)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS70_1__ONCLICKLEFTCALLBACK_B__1_OFFSET))(this, r);
		}
	};
}
