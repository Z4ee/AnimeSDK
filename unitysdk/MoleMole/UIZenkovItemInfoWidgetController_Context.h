#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_1B6292AB1E2E7AA6.h"
#include "unitysdk/Enum_3_8252736F97D4CFA3_1.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_266;
class Class_3_C3F0E3B5AB5977AE_29;
namespace System { class Action; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIZENKOVITEMINFOWIDGETCONTROLLER_CONTEXT_GETEFFECTIVEITEMID_OFFSET UNITYSDK_OFFSET(0x15B0DF20)
#define MOLEMOLE_UIZENKOVITEMINFOWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15B0E050)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovItemInfoWidgetController_Context_TypeDefinitionIndex = 64004;

	class UIZenkovItemInfoWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_3_C3F0E3B5AB5977AE_29* KovBagIndex; // 0x28
		::UnityEngine::Transform* OverrideTransform; // 0x30
		::System::Action* OnClose; // 0x38
		::Enum_3_1B6292AB1E2E7AA6 Scenario; // 0x40
		::System::Boolean OverrideShowGetMethodButton; // 0x44
		::System::Boolean IsInSearchMode; // 0x45
		::System::Boolean PenetrateClose; // 0x46
		::System::Int32 AvatarId; // 0x48
		::Enum_3_8252736F97D4CFA3_1 FadeInFrom; // 0x4C
		::System::Int32 SearchContainerBagId; // 0x50
		::System::Int32 EquipTargetBagType; // 0x54
		::System::Int32 ItemId; // 0x58
		::UnityEngine::Vector2 WidgetPivot; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVITEMINFOWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::System::Int32 GetEffectiveItemId(::Class_0_16E4307DCC419505_266* kovData)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_266*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVITEMINFOWIDGETCONTROLLER_CONTEXT_GETEFFECTIVEITEMID_OFFSET))(this, kovData);
		}
	};
}
