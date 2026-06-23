#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1A39E1B51756BF41;
class Class_2_B4378B46E0020E85;
class Class_2_FDFE69FE7B72463B;
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER_VIEWCONTENT_VIEWDETAILS__CTOR_OFFSET UNITYSDK_OFFSET(0x17168A60)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyRoleItemWidgetController_ViewContent_ViewDetails_TypeDefinitionIndex = 57112;

	class UIMonsterFantasyRoleItemWidgetController_ViewContent_ViewDetails : public ::System::Object
	{
	public:
		::Class_2_1A39E1B51756BF41* Img; // 0x10
		::UnityEngine::GameObject* Go; // 0x18
		::Class_2_1A39E1B51756BF41* TagLeftImg; // 0x20
		::Class_2_B4378B46E0020E85* Btn; // 0x28
		::Class_2_1A39E1B51756BF41* LongPressFillImg; // 0x30
		::UnityEngine::GameObject* LongPressGo; // 0x38
		::UnityEngine::GameObject* EnemyTagGo; // 0x40
		::UnityEngine::GameObject* ExtraGo; // 0x48
		::Class_2_FDFE69FE7B72463B* HpAddLight; // 0x50
		::Class_2_1A39E1B51756BF41* HpImg; // 0x58
		::Class_2_1A39E1B51756BF41* TagRightImg; // 0x60
		::UnityEngine::GameObject* DisableGo; // 0x68
		::UnityEngine::GameObject* PlayerTagGo; // 0x70
		::UnityEngine::GameObject* TagGo; // 0x78
		::Class_2_1A39E1B51756BF41* TagImg; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER_VIEWCONTENT_VIEWDETAILS__CTOR_OFFSET))(this);
		}
	};
}
