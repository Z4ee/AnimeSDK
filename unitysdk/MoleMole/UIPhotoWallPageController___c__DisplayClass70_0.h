#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_57F7F2BF8C55D6B6;
namespace MoleMole { class UIPhotoWallPageController; }

#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS70_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15602E10)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS70_0__ONCLICKLEFTCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x15602E20)

namespace MoleMole
{
	inline static constexpr unsigned int UIPhotoWallPageController___c__DisplayClass70_0_TypeDefinitionIndex = 52433;

	class UIPhotoWallPageController___c__DisplayClass70_0 : public ::System::Object
	{
	public:
		::MoleMole::UIPhotoWallPageController* __4__this; // 0x10
		::System::Int32 index; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS70_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickLeftCallback_b__0(::System::Boolean success, ::Class_1_57F7F2BF8C55D6B6* friend_)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_1_57F7F2BF8C55D6B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS70_0__ONCLICKLEFTCALLBACK_B__0_OFFSET))(this, success, friend_);
		}
	};
}
