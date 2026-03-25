#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_CONFIRMDIALOGUTIL___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9423B80)
#define RPG_CLIENT_CONFIRMDIALOGUTIL___C__DISPLAYCLASS25_0__SHOWPLAYGOCONFIRMDIALOG_B__0_OFFSET UNITYSDK_OFFSET(0x94244F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ConfirmDialogUtil___c__DisplayClass25_0_TypeDefinitionIndex = 59593;

	class ConfirmDialogUtil___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Boolean>* dispatchOkCancel; // 0x10
		::System::Boolean isFinished; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowPlayGoConfirmDialog_b__0(::System::Boolean isOK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL___C__DISPLAYCLASS25_0__SHOWPLAYGOCONFIRMDIALOG_B__0_OFFSET))(this, isOK);
		}
	};
}
