#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/REAL_NAME_DIALOG_TYPE.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK::Win { class RealNameManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18798690)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS20_0__SHOWSECONDREALNAMEPLUGINUI_B__0_OFFSET UNITYSDK_OFFSET(0x1879CBA0)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS20_0__SHOWSECONDREALNAMEPLUGINUI_B__1_OFFSET UNITYSDK_OFFSET(0x1879CBD0)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS20_0__SHOWSECONDREALNAMEPLUGINUI_B__2_OFFSET UNITYSDK_OFFSET(0x1879CCB0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int RealNameManager___c__DisplayClass20_0_TypeDefinitionIndex = 9294;

	class RealNameManager___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::AccountModel* account; // 0x10
		::MiHoYo::SDK::Win::RealNameManager* __4__this; // 0x18
		::MiHoYo::SDK::REAL_NAME_DIALOG_TYPE type; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowSecondRealNamePluginUI_b__0(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS20_0__SHOWSECONDREALNAMEPLUGINUI_B__0_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowSecondRealNamePluginUI_b__1(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS20_0__SHOWSECONDREALNAMEPLUGINUI_B__1_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowSecondRealNamePluginUI_b__2(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS20_0__SHOWSECONDREALNAMEPLUGINUI_B__2_OFFSET))(this, a1, a2);
		}
	};
}
