#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
class Class_2_F8D0B9C0BCFFDC55_2;
namespace MoleMole { class UIBaseController; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_UIARCANFLAGITEM_GETITEMDATA_OFFSET UNITYSDK_OFFSET(0x1899A940)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_UIARCANFLAGITEM_INITITEM_OFFSET UNITYSDK_OFFSET(0x1899A370)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_UIARCANFLAGITEM_PLAY_OFFSET UNITYSDK_OFFSET(0x1899ABE0)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_UIARCANFLAGITEM_SETARCANAITEMDATA_OFFSET UNITYSDK_OFFSET(0x1899A980)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_UIARCANFLAGITEM_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x1899AD60)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_UIARCANFLAGITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1899A360)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainPageController_UIArcanFlagItem_TypeDefinitionIndex = 73657;

	class UIHollowMainPageController_UIArcanFlagItem : public ::System::Object
	{
	public:
		::UnityEngine::Transform* _emptyGo; // 0x10
		::UnityEngine::UI::Image* _icon; // 0x18
		::UnityEngine::UI::Button* _clickBtn; // 0x20
		::MoleMole::UIBaseController* _baseCtrl; // 0x28
		::UnityEngine::Transform* _root; // 0x30
		::UnityEngine::Animation* _anim; // 0x38
		::Class_1_0D6706375CDAAE8C* _curItemData; // 0x40
		::UnityEngine::GameObject* _selectedGo; // 0x48

		::System::Void _ctor(::UnityEngine::Transform* root, ::MoleMole::UIBaseController* baseController)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_UIARCANFLAGITEM__CTOR_OFFSET))(this, root, baseController);
		}

		::System::Void InitItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_UIARCANFLAGITEM_INITITEM_OFFSET))(this);
		}

		::Class_1_0D6706375CDAAE8C* GetItemData()
		{
			return ((::Class_1_0D6706375CDAAE8C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_UIARCANFLAGITEM_GETITEMDATA_OFFSET))(this);
		}

		::System::Void SetArcanaItemData(::Class_2_F8D0B9C0BCFFDC55_2* itemData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_F8D0B9C0BCFFDC55_2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_UIARCANFLAGITEM_SETARCANAITEMDATA_OFFSET))(this, itemData);
		}

		::System::Boolean Play()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_UIARCANFLAGITEM_PLAY_OFFSET))(this);
		}

		::System::Void SetEmpty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_UIARCANFLAGITEM_SETEMPTY_OFFSET))(this);
		}
	};
}
