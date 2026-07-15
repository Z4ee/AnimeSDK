#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_CONFIRMDIALOGUTIL___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18025E40)
#define RPG_CLIENT_CONFIRMDIALOGUTIL___C__DISPLAYCLASS10_0__SHOWFORCEUPDATEHINT_B__0_OFFSET UNITYSDK_OFFSET(0x18028F40)

namespace RPG::Client
{
	inline static constexpr unsigned int ConfirmDialogUtil___c__DisplayClass10_0_TypeDefinitionIndex = 69415;

	class ConfirmDialogUtil___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::String* forceUpdateUrl; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowForceUpdateHint_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL___C__DISPLAYCLASS10_0__SHOWFORCEUPDATEHINT_B__0_OFFSET))(this, a1);
		}
	};
}
