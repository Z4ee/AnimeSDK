#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ProtocolManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS33_0__CTOR_OFFSET UNITYSDK_OFFSET(0x171018D0)
#define MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS33_0__SHOWPROTOCOLPLUGINUI_B__0_OFFSET UNITYSDK_OFFSET(0x17108110)
#define MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS33_0__SHOWPROTOCOLPLUGINUI_B__1_OFFSET UNITYSDK_OFFSET(0x17108130)
#define MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS33_0__SHOWPROTOCOLPLUGINUI_B__2_OFFSET UNITYSDK_OFFSET(0x17108150)
#define MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS33_0__SHOWPROTOCOLPLUGINUI_B__3_OFFSET UNITYSDK_OFFSET(0x17108170)
#define MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS33_0__SHOWPROTOCOLPLUGINUI_B__4_OFFSET UNITYSDK_OFFSET(0x17108190)
#define MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS33_0__SHOWPROTOCOLPLUGINUI_B__5_OFFSET UNITYSDK_OFFSET(0x17108350)
#define MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS33_0__SHOWPROTOCOLPLUGINUI_B__6_OFFSET UNITYSDK_OFFSET(0x17108310)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ProtocolManager___c__DisplayClass33_0_TypeDefinitionIndex = 8000;

	class ProtocolManager___c__DisplayClass33_0 : public ::System::Object
	{
	public:
		::System::Action* onAccept; // 0x10
		::MiHoYo::SDK::ProtocolManager* __4__this; // 0x18
		::System::Action* onRefuse; // 0x20
		::System::Action* __9__6; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS33_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowProtocolPluginUI_b__0(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS33_0__SHOWPROTOCOLPLUGINUI_B__0_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowProtocolPluginUI_b__1(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS33_0__SHOWPROTOCOLPLUGINUI_B__1_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowProtocolPluginUI_b__2(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS33_0__SHOWPROTOCOLPLUGINUI_B__2_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowProtocolPluginUI_b__3(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS33_0__SHOWPROTOCOLPLUGINUI_B__3_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowProtocolPluginUI_b__4(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS33_0__SHOWPROTOCOLPLUGINUI_B__4_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowProtocolPluginUI_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS33_0__SHOWPROTOCOLPLUGINUI_B__6_OFFSET))(this);
		}

		::System::Void _ShowProtocolPluginUI_b__5(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS33_0__SHOWPROTOCOLPLUGINUI_B__5_OFFSET))(this, a1, a2);
		}
	};
}
