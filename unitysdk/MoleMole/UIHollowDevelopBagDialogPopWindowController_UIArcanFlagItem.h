#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
class Class_2_F8D0B9C0BCFFDC55_5;
namespace MoleMole { class UIBaseController; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_UIARCANFLAGITEM_INITITEM_OFFSET UNITYSDK_OFFSET(0x18491820)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_UIARCANFLAGITEM_PLAY_OFFSET UNITYSDK_OFFSET(0x18492590)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_UIARCANFLAGITEM_SETARCANAITEMDATA_OFFSET UNITYSDK_OFFSET(0x18492330)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_UIARCANFLAGITEM_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x18492710)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_UIARCANFLAGITEM_SHOWTIPS_OFFSET UNITYSDK_OFFSET(0x18491F90)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_UIARCANFLAGITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x18491810)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowDevelopBagDialogPopWindowController_UIArcanFlagItem_TypeDefinitionIndex = 82819;

	class UIHollowDevelopBagDialogPopWindowController_UIArcanFlagItem : public ::System::Object
	{
	public:
		::UnityEngine::UI::Button* _clickBtn; // 0x10
		::MoleMole::UIBaseController* _baseCtrl; // 0x18
		::UnityEngine::GameObject* _selectedGo; // 0x20
		::UnityEngine::Transform* _root; // 0x28
		::UnityEngine::UI::Image* _icon; // 0x30
		::Class_1_0D6706375CDAAE8C* _curItemData; // 0x38
		::UnityEngine::Animation* _anim; // 0x40
		::UnityEngine::Transform* _emptyGo; // 0x48

		::System::Void _ctor(::UnityEngine::Transform* root, ::MoleMole::UIBaseController* baseController)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_UIARCANFLAGITEM__CTOR_OFFSET))(this, root, baseController);
		}

		::System::Void InitItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_UIARCANFLAGITEM_INITITEM_OFFSET))(this);
		}

		::System::Void ShowTips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_UIARCANFLAGITEM_SHOWTIPS_OFFSET))(this);
		}

		::System::Void SetArcanaItemData(::Class_2_F8D0B9C0BCFFDC55_5* itemData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_F8D0B9C0BCFFDC55_5*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_UIARCANFLAGITEM_SETARCANAITEMDATA_OFFSET))(this, itemData);
		}

		::System::Boolean Play()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_UIARCANFLAGITEM_PLAY_OFFSET))(this);
		}

		::System::Void SetEmpty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER_UIARCANFLAGITEM_SETEMPTY_OFFSET))(this);
		}
	};
}
