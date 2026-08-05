#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Win { class BindManager___c__DisplayClass22_0; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS22_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE26590)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS22_1__SHOWBINDMAILPLUGINUI_B__4_OFFSET UNITYSDK_OFFSET(0x1CE26A00)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BindManager___c__DisplayClass22_1_TypeDefinitionIndex = 21480;

	class BindManager___c__DisplayClass22_1 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10
		::MiHoYo::SDK::Win::BindManager___c__DisplayClass22_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS22_1__CTOR_OFFSET))(this);
		}

		::System::Void _ShowBindMailPluginUI_b__4(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS22_1__SHOWBINDMAILPLUGINUI_B__4_OFFSET))(this, response);
		}
	};
}
