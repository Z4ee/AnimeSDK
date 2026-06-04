#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define RPG_CLIENT_CLOUDUTILS_GETCLIPBOARDTEXTFROMSDK_OFFSET UNITYSDK_OFFSET(0xB6E91A0)
#define RPG_CLIENT_CLOUDUTILS_ISCLOUDGAMEURLCONFIGURATED_OFFSET UNITYSDK_OFFSET(0xB6E9790)
#define RPG_CLIENT_CLOUDUTILS_KEEPALIVEBYAUTOBATTLE_OFFSET UNITYSDK_OFFSET(0xB6E9520)
#define RPG_CLIENT_CLOUDUTILS_ONGETCLIPBOARDDATA_OFFSET UNITYSDK_OFFSET(0xB6E92D0)
#define RPG_CLIENT_CLOUDUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0xB6E9820)

namespace RPG::Client
{
	inline static constexpr unsigned int CloudUtils_TypeDefinitionIndex = 55963;

	class CloudUtils : public ::System::Object
	{
	public:
		static ::System::Action_2<::System::Boolean, ::System::String*>** StaticGet__clipboardCallback()
		{
			return (::System::Action_2<::System::Boolean, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CloudUtils_TypeDefinitionIndex)->GetStaticField(0x65C40);
		}
		// static const ::System::String* AUTO_BATTLE_KEEP_ALIVE; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOUDUTILS__CTOR_OFFSET))(this);
		}

		static ::System::Void GetClipboardTextFromSDK(::System::Action_2<::System::Boolean, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Action_2<::System::Boolean, ::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOUDUTILS_GETCLIPBOARDTEXTFROMSDK_OFFSET))(a1);
		}

		static ::System::Void OnGetClipBoardData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOUDUTILS_ONGETCLIPBOARDDATA_OFFSET))(a1);
		}

		static ::System::Void KeepAliveByAutoBattle(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOUDUTILS_KEEPALIVEBYAUTOBATTLE_OFFSET))(a1);
		}

		static ::System::Boolean IsCloudGameUrlConfigurated()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOUDUTILS_ISCLOUDGAMEURLCONFIGURATED_OFFSET))();
		}
	};
}
