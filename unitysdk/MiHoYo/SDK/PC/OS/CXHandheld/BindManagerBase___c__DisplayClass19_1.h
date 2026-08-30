#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS::CXHandheld { class HandheldEmailBindingDialog; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE___C__DISPLAYCLASS19_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9D39B0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE___C__DISPLAYCLASS19_1__SHOWEMAILBINDINGDIALOG_B__7_OFFSET UNITYSDK_OFFSET(0x1B9D3A90)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int BindManagerBase___c__DisplayClass19_1_TypeDefinitionIndex = 8675;

	class BindManagerBase___c__DisplayClass19_1 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PC::OS::CXHandheld::HandheldEmailBindingDialog* dialog; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE___C__DISPLAYCLASS19_1__CTOR_OFFSET))(this);
		}

		::System::Void _ShowEmailBindingDialog_b__7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE___C__DISPLAYCLASS19_1__SHOWEMAILBINDINGDIALOG_B__7_OFFSET))(this);
		}
	};
}
