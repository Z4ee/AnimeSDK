#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTarget.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTarget_CustomEvent_CustomEventMode.h"

namespace System { class String; }

#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_CUSTOMEVENT_METHOD_6_1DEF7ECEE7F7C088_OFFSET UNITYSDK_OFFSET(0xCC3FE70)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_CUSTOMEVENT_METHOD_6_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0xCC3FE60)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_CUSTOMEVENT_METHOD_6_C5D98F30ADA6FD61_OFFSET UNITYSDK_OFFSET(0xCC3FA50)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_CUSTOMEVENT_METHOD_6_D9EF75A2D048B8A1_OFFSET UNITYSDK_OFFSET(0xCC3F8C0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_CUSTOMEVENT_SHOWSCORE_OFFSET UNITYSDK_OFFSET(0xCC3F620)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_CUSTOMEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xCC3FD40)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_CUSTOMEVENT___IFIXBASEPROXY_SHOWSCORE_OFFSET UNITYSDK_OFFSET(0xCC3FE50)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayTarget_CustomEvent_TypeDefinitionIndex = 64282;

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

		::System::Void __iFixBaseProxy_ShowScore(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_CUSTOMEVENT___IFIXBASEPROXY_SHOWSCORE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_775B6D644F07B554()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_CUSTOMEVENT_METHOD_6_775B6D644F07B554_OFFSET))(this);
		}

		::System::Void Method_6_1DEF7ECEE7F7C088(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_CUSTOMEVENT_METHOD_6_1DEF7ECEE7F7C088_OFFSET))(this, a1);
		}
	};
}
