#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ProtocolManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS33_0__CTOR_OFFSET UNITYSDK_OFFSET(0x199AA5F0)
#define MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS33_0__SHOWPROTOCOLPLUGINUI_B__0_OFFSET UNITYSDK_OFFSET(0x199AA600)
#define MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS33_0__SHOWPROTOCOLPLUGINUI_B__1_OFFSET UNITYSDK_OFFSET(0x199AA620)
#define MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS33_0__SHOWPROTOCOLPLUGINUI_B__2_OFFSET UNITYSDK_OFFSET(0x199AA640)
#define MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS33_0__SHOWPROTOCOLPLUGINUI_B__3_OFFSET UNITYSDK_OFFSET(0x199AA660)
#define MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS33_0__SHOWPROTOCOLPLUGINUI_B__4_OFFSET UNITYSDK_OFFSET(0x199AA680)
#define MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS33_0__SHOWPROTOCOLPLUGINUI_B__5_OFFSET UNITYSDK_OFFSET(0x199AA820)
#define MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS33_0__SHOWPROTOCOLPLUGINUI_B__6_OFFSET UNITYSDK_OFFSET(0x199AA7E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ProtocolManager___c__DisplayClass33_0_TypeDefinitionIndex = 18913;

	class ProtocolManager___c__DisplayClass33_0 : public ::System::Object
	{
	public:
		::System::Action* onAccept; // 0x10
		::System::Action* onRefuse; // 0x18
		::System::Action* __9__6; // 0x20
		::MiHoYo::SDK::ProtocolManager* __4__this; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS33_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowProtocolPluginUI_b__0(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS33_0__SHOWPROTOCOLPLUGINUI_B__0_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowProtocolPluginUI_b__1(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS33_0__SHOWPROTOCOLPLUGINUI_B__1_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowProtocolPluginUI_b__2(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS33_0__SHOWPROTOCOLPLUGINUI_B__2_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowProtocolPluginUI_b__3(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS33_0__SHOWPROTOCOLPLUGINUI_B__3_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowProtocolPluginUI_b__4(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS33_0__SHOWPROTOCOLPLUGINUI_B__4_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowProtocolPluginUI_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS33_0__SHOWPROTOCOLPLUGINUI_B__6_OFFSET))(this);
		}

		::System::Void _ShowProtocolPluginUI_b__5(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS33_0__SHOWPROTOCOLPLUGINUI_B__5_OFFSET))(this, strArgs, callback);
		}
	};
}
