#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_EC682544DE1271C8;
namespace MoleMole { class UIPhotoWallEditModeWidgetController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIPHOTOWALLEDITMODEWIDGETCONTROLLER___C__DISPLAYCLASS63_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17983DD0)
#define MOLEMOLE_UIPHOTOWALLEDITMODEWIDGETCONTROLLER___C__DISPLAYCLASS63_0__STARTDRAGNEWOBJECT_B__0_OFFSET UNITYSDK_OFFSET(0x17986C40)
#define MOLEMOLE_UIPHOTOWALLEDITMODEWIDGETCONTROLLER___C__DISPLAYCLASS63_0__STARTDRAGNEWOBJECT_B__1_OFFSET UNITYSDK_OFFSET(0x17986CD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPhotoWallEditModeWidgetController___c__DisplayClass63_0_TypeDefinitionIndex = 64080;

	class UIPhotoWallEditModeWidgetController___c__DisplayClass63_0 : public ::System::Object
	{
	public:
		::MoleMole::UIPhotoWallEditModeWidgetController* __4__this; // 0x10
		::System::Action_1<::Class_1_EC682544DE1271C8*>* __9__1; // 0x18
		::UnityEngine::Vector2 screenPos; // 0x20
		::System::Int32 itemConfigId; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLEDITMODEWIDGETCONTROLLER___C__DISPLAYCLASS63_0__CTOR_OFFSET))(this);
		}

		::System::Void _StartDragNewObject_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLEDITMODEWIDGETCONTROLLER___C__DISPLAYCLASS63_0__STARTDRAGNEWOBJECT_B__0_OFFSET))(this);
		}

		::System::Void _StartDragNewObject_b__1(::Class_1_EC682544DE1271C8* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EC682544DE1271C8*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLEDITMODEWIDGETCONTROLLER___C__DISPLAYCLASS63_0__STARTDRAGNEWOBJECT_B__1_OFFSET))(this, data);
		}
	};
}
