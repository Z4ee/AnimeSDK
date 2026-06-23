#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A6875CC70890641D.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/System/Nullable_1.h"

#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_CONTEXT_GET_DEFAULTSTATE_OFFSET UNITYSDK_OFFSET(0x176083F0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_CONTEXT_SET_DEFAULTSTATE_OFFSET UNITYSDK_OFFSET(0x17608400)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17608410)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseScenePageController_Context_TypeDefinitionIndex = 43777;

	class UIBaseScenePageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Nullable_1<::Enum_3_A6875CC70890641D> _DefaultState_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::System::Nullable_1<::Enum_3_A6875CC70890641D> get_DefaultState()
		{
			return ((::System::Nullable_1<::Enum_3_A6875CC70890641D>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_CONTEXT_GET_DEFAULTSTATE_OFFSET))(this);
		}

		::System::Void set_DefaultState(::System::Nullable_1<::Enum_3_A6875CC70890641D> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Enum_3_A6875CC70890641D>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_CONTEXT_SET_DEFAULTSTATE_OFFSET))(this, value);
		}
	};
}
