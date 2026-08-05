#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C856E655551E512E.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/System/Nullable_1.h"

#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_CONTEXT_GET_DEFAULTSTATE_OFFSET UNITYSDK_OFFSET(0x18E485E0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_CONTEXT_SET_DEFAULTSTATE_OFFSET UNITYSDK_OFFSET(0x18E485F0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18E48600)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseScenePageController_Context_TypeDefinitionIndex = 57121;

	class UIBaseScenePageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Nullable_1<::Enum_3_C856E655551E512E> _DefaultState_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::System::Nullable_1<::Enum_3_C856E655551E512E> get_DefaultState()
		{
			return ((::System::Nullable_1<::Enum_3_C856E655551E512E>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_CONTEXT_GET_DEFAULTSTATE_OFFSET))(this);
		}

		::System::Void set_DefaultState(::System::Nullable_1<::Enum_3_C856E655551E512E> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Enum_3_C856E655551E512E>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_CONTEXT_SET_DEFAULTSTATE_OFFSET))(this, value);
		}
	};
}
