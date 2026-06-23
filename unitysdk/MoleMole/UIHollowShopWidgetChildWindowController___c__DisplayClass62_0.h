#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_131;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS62_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16F8D4E0)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS62_0__REFRESHGOODS_B__0_OFFSET UNITYSDK_OFFSET(0x16F8D4F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowShopWidgetChildWindowController___c__DisplayClass62_0_TypeDefinitionIndex = 66353;

	class UIHollowShopWidgetChildWindowController___c__DisplayClass62_0 : public ::System::Object
	{
	public:
		::UnityEngine::Transform* itemEffect; // 0x10
		::UnityEngine::Transform* cardEffect; // 0x18
		::UnityEngine::GameObject* specialGo; // 0x20
		::Class_2_208CC9941471731A_131* template_; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS62_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshGoods_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS62_0__REFRESHGOODS_B__0_OFFSET))(this);
		}
	};
}
