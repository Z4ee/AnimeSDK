#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ProtocolManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19EB1100)
#define MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS36_0__SHOWPROTOCOLPLUGINUI_B__0_OFFSET UNITYSDK_OFFSET(0x19EB7060)
#define MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS36_0__SHOWPROTOCOLPLUGINUI_B__1_OFFSET UNITYSDK_OFFSET(0x19EB7080)
#define MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS36_0__SHOWPROTOCOLPLUGINUI_B__2_OFFSET UNITYSDK_OFFSET(0x19EB70A0)
#define MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS36_0__SHOWPROTOCOLPLUGINUI_B__3_OFFSET UNITYSDK_OFFSET(0x19EB70C0)
#define MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS36_0__SHOWPROTOCOLPLUGINUI_B__4_OFFSET UNITYSDK_OFFSET(0x19EB70E0)
#define MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS36_0__SHOWPROTOCOLPLUGINUI_B__5_OFFSET UNITYSDK_OFFSET(0x19EB72A0)
#define MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS36_0__SHOWPROTOCOLPLUGINUI_B__6_OFFSET UNITYSDK_OFFSET(0x19EB7260)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ProtocolManager___c__DisplayClass36_0_TypeDefinitionIndex = 8004;

	class ProtocolManager___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::ProtocolManager* __4__this; // 0x10
		::System::Action* onRefuse; // 0x18
		::System::Action* __9__6; // 0x20
		::System::Action* onAccept; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS36_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowProtocolPluginUI_b__0(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS36_0__SHOWPROTOCOLPLUGINUI_B__0_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowProtocolPluginUI_b__1(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS36_0__SHOWPROTOCOLPLUGINUI_B__1_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowProtocolPluginUI_b__2(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS36_0__SHOWPROTOCOLPLUGINUI_B__2_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowProtocolPluginUI_b__3(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS36_0__SHOWPROTOCOLPLUGINUI_B__3_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowProtocolPluginUI_b__4(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS36_0__SHOWPROTOCOLPLUGINUI_B__4_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowProtocolPluginUI_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS36_0__SHOWPROTOCOLPLUGINUI_B__6_OFFSET))(this);
		}

		::System::Void _ShowProtocolPluginUI_b__5(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS36_0__SHOWPROTOCOLPLUGINUI_B__5_OFFSET))(this, a1, a2);
		}
	};
}
