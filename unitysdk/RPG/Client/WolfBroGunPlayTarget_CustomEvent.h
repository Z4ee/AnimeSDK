#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTarget.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTarget_CustomEvent_CustomEventMode.h"

namespace System { class String; }

#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_CUSTOMEVENT_METHOD_6_69225B22C8D30B3E_OFFSET UNITYSDK_OFFSET(0xA796C30)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_CUSTOMEVENT_METHOD_6_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0xA796C20)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_CUSTOMEVENT_METHOD_6_C5D98F30ADA6FD61_OFFSET UNITYSDK_OFFSET(0xA796800)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_CUSTOMEVENT_METHOD_6_D9EF75A2D048B8A1_OFFSET UNITYSDK_OFFSET(0xA796670)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_CUSTOMEVENT_SHOWSCORE_OFFSET UNITYSDK_OFFSET(0xA7963D0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_CUSTOMEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xA796B00)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_CUSTOMEVENT___IFIXBASEPROXY_SHOWSCORE_OFFSET UNITYSDK_OFFSET(0xA796C10)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayTarget_CustomEvent_TypeDefinitionIndex = 56122;

	class WolfBroGunPlayTarget_CustomEvent : public ::RPG::Client::WolfBroGunPlayTarget
	{
	public:
		::System::String* customString; // 0xD8
		::RPG::Client::WolfBroGunPlayTarget_CustomEvent_CustomEventMode eventMode; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_CUSTOMEVENT__CTOR_OFFSET))(this);
		}

		::System::Void ShowScore(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_CUSTOMEVENT_SHOWSCORE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_D9EF75A2D048B8A1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_CUSTOMEVENT_METHOD_6_D9EF75A2D048B8A1_OFFSET))(this);
		}

		::System::Void Method_6_C5D98F30ADA6FD61(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_CUSTOMEVENT_METHOD_6_C5D98F30ADA6FD61_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_ShowScore(::System::Single P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_CUSTOMEVENT___IFIXBASEPROXY_SHOWSCORE_OFFSET))(this, P0, P1);
		}

		::System::Void Method_6_775B6D644F07B554()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_CUSTOMEVENT_METHOD_6_775B6D644F07B554_OFFSET))(this);
		}

		::System::Void Method_6_69225B22C8D30B3E(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_CUSTOMEVENT_METHOD_6_69225B22C8D30B3E_OFFSET))(this, P0);
		}
	};
}
