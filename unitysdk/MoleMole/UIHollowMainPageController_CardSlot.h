#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class UIHollowCardItemBtnWidgetController; }
namespace MoleMole { class UIHollowMainPageController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_CARDSLOT_REFRESHMUTE_OFFSET UNITYSDK_OFFSET(0x15FAA480)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_CARDSLOT_SETCARD_OFFSET UNITYSDK_OFFSET(0x15FAA360)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_CARDSLOT_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x15FAA2E0)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_CARDSLOT_SETSCALE_OFFSET UNITYSDK_OFFSET(0x15FAA3F0)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_CARDSLOT__CTOR_OFFSET UNITYSDK_OFFSET(0x15FAA130)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainPageController_CardSlot_TypeDefinitionIndex = 44948;

	class UIHollowMainPageController_CardSlot : public ::System::Object
	{
	public:
		::UnityEngine::UI::Image* cardImg; // 0x10
		::UnityEngine::RectTransform* transform; // 0x18
		::MoleMole::UIHollowMainPageController* page; // 0x20
		::MoleMole::UIHollowCardItemBtnWidgetController* ctrl; // 0x28
		::System::Int32 itemid; // 0x30

		::System::Void _ctor(::System::Int32 itemid, ::UnityEngine::RectTransform* transform, ::MoleMole::UIHollowMainPageController* page)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::RectTransform*, ::MoleMole::UIHollowMainPageController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_CARDSLOT__CTOR_OFFSET))(this, itemid, transform, page);
		}

		::System::Void SetScale(::UnityEngine::Vector3 scale)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_CARDSLOT_SETSCALE_OFFSET))(this, scale);
		}

		::System::Void SetEmpty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_CARDSLOT_SETEMPTY_OFFSET))(this);
		}

		::System::Void SetCard(::System::Int32 itemid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_CARDSLOT_SETCARD_OFFSET))(this, itemid);
		}

		::System::Void RefreshMute(::System::Boolean anim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_CARDSLOT_REFRESHMUTE_OFFSET))(this, anim);
		}
	};
}
