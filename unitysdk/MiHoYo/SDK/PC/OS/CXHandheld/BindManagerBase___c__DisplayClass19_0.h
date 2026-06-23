#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS::CXHandheld { class HandheldEmailBindingDialog; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5254A0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE___C__DISPLAYCLASS19_0__SHOWEMAILBINDINGDIALOG_B__6_OFFSET UNITYSDK_OFFSET(0x1B5254B0)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int BindManagerBase___c__DisplayClass19_0_TypeDefinitionIndex = 20480;

	class BindManagerBase___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PC::OS::CXHandheld::HandheldEmailBindingDialog* dialog; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowEmailBindingDialog_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE___C__DISPLAYCLASS19_0__SHOWEMAILBINDINGDIALOG_B__6_OFFSET))(this);
		}
	};
}
