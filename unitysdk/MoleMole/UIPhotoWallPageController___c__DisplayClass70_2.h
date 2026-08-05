#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5FBB235457C1293C;
namespace MoleMole { class UIPhotoWallPageController___c__DisplayClass70_1; }

#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS70_2__CTOR_OFFSET UNITYSDK_OFFSET(0x16A715A0)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS70_2__ONCLICKLEFTCALLBACK_B__2_OFFSET UNITYSDK_OFFSET(0x16A715B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPhotoWallPageController___c__DisplayClass70_2_TypeDefinitionIndex = 61302;

	class UIPhotoWallPageController___c__DisplayClass70_2 : public ::System::Object
	{
	public:
		::Class_1_5FBB235457C1293C* data; // 0x10
		::MoleMole::UIPhotoWallPageController___c__DisplayClass70_1* CS___8__locals2; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS70_2__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickLeftCallback_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS70_2__ONCLICKLEFTCALLBACK_B__2_OFFSET))(this);
		}
	};
}
