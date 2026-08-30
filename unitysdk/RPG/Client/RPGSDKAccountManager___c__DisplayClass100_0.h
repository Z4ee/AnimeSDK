#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class String; }

#define RPG_CLIENT_RPGSDKACCOUNTMANAGER___C__DISPLAYCLASS100_0__CHECKISPUSHNOTIFYOPEN_B__0_OFFSET UNITYSDK_OFFSET(0x18059940)
#define RPG_CLIENT_RPGSDKACCOUNTMANAGER___C__DISPLAYCLASS100_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1804E6E0)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGSDKAccountManager___c__DisplayClass100_0_TypeDefinitionIndex = 61184;

	class RPGSDKAccountManager___c__DisplayClass100_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise_1<::System::Boolean>* promise; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGSDKACCOUNTMANAGER___C__DISPLAYCLASS100_0__CTOR_OFFSET))(this);
		}

		::System::Void _CheckIsPushNotifyOpen_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGSDKACCOUNTMANAGER___C__DISPLAYCLASS100_0__CHECKISPUSHNOTIFYOPEN_B__0_OFFSET))(this, a1);
		}
	};
}
