#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_CONFIRMDIALOGUTIL___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA0CF340)
#define RPG_CLIENT_CONFIRMDIALOGUTIL___C__DISPLAYCLASS10_0__SHOWFORCEUPDATEHINT_B__0_OFFSET UNITYSDK_OFFSET(0xA0D1E90)

namespace RPG::Client
{
	inline static constexpr unsigned int ConfirmDialogUtil___c__DisplayClass10_0_TypeDefinitionIndex = 66987;

	class ConfirmDialogUtil___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::String* forceUpdateUrl; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowForceUpdateHint_b__0(::System::Boolean isOk)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL___C__DISPLAYCLASS10_0__SHOWFORCEUPDATEHINT_B__0_OFFSET))(this, isOk);
		}
	};
}
