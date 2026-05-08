#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D9968D936B3A50DA.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/System/Nullable_1.h"

#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_CONTEXT_GET_DEFAULTSTATE_OFFSET UNITYSDK_OFFSET(0x1680D580)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_CONTEXT_SET_DEFAULTSTATE_OFFSET UNITYSDK_OFFSET(0x1680D590)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1680D5A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseScenePageController_Context_TypeDefinitionIndex = 42920;

	class UIBaseScenePageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Nullable_1<::Enum_3_D9968D936B3A50DA> _DefaultState_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::System::Nullable_1<::Enum_3_D9968D936B3A50DA> get_DefaultState()
		{
			return ((::System::Nullable_1<::Enum_3_D9968D936B3A50DA>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_CONTEXT_GET_DEFAULTSTATE_OFFSET))(this);
		}

		::System::Void set_DefaultState(::System::Nullable_1<::Enum_3_D9968D936B3A50DA> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Enum_3_D9968D936B3A50DA>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_CONTEXT_SET_DEFAULTSTATE_OFFSET))(this, value);
		}
	};
}
