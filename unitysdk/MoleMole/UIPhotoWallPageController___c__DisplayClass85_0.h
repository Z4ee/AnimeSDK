#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class UIPhotoWallPageController; }

#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS85_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15C8D520)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS85_0__MOVECAMERATO_B__0_OFFSET UNITYSDK_OFFSET(0x15C8D530)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS85_0__MOVECAMERATO_B__1_OFFSET UNITYSDK_OFFSET(0x15C8D540)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS85_0__MOVECAMERATO_B__2_OFFSET UNITYSDK_OFFSET(0x15C8D790)

namespace MoleMole
{
	inline static constexpr unsigned int UIPhotoWallPageController___c__DisplayClass85_0_TypeDefinitionIndex = 66554;

	class UIPhotoWallPageController___c__DisplayClass85_0 : public ::System::Object
	{
	public:
		::MoleMole::UIPhotoWallPageController* __4__this; // 0x10
		::UnityEngine::Vector2 deltaPos; // 0x18
		::UnityEngine::Vector2 currentPos; // 0x20
		::System::Single fov; // 0x28
		::System::Single currentFov; // 0x2C
		::System::Single time; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS85_0__CTOR_OFFSET))(this);
		}

		::System::Single _MoveCameraTo_b__0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS85_0__MOVECAMERATO_B__0_OFFSET))(this);
		}

		::System::Void _MoveCameraTo_b__1(::System::Single v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS85_0__MOVECAMERATO_B__1_OFFSET))(this, v);
		}

		::System::Void _MoveCameraTo_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS85_0__MOVECAMERATO_B__2_OFFSET))(this);
		}
	};
}
