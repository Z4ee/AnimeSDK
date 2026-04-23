#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CONFIRMDIALOGUTIL___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA0CFAB0)
#define RPG_CLIENT_CONFIRMDIALOGUTIL___C__DISPLAYCLASS14_0__SHOWSERVERSTOPHINT_B__0_OFFSET UNITYSDK_OFFSET(0xA0D2160)

namespace RPG::Client
{
	inline static constexpr unsigned int ConfirmDialogUtil___c__DisplayClass14_0_TypeDefinitionIndex = 66988;

	class ConfirmDialogUtil___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::System::Boolean isRestart; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowServerStopHint_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL___C__DISPLAYCLASS14_0__SHOWSERVERSTOPHINT_B__0_OFFSET))(this);
		}
	};
}
