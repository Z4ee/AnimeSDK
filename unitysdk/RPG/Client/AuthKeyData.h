#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AuthKeyData_WebAuthKey; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_AUTHKEYDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x181168F0)
#define RPG_CLIENT_AUTHKEYDATA_GETWEBAUTHKEYSTRING_OFFSET UNITYSDK_OFFSET(0x181163D0)
#define RPG_CLIENT_AUTHKEYDATA_GET_AUTHKEYDIC_OFFSET UNITYSDK_OFFSET(0x181160C0)
#define RPG_CLIENT_AUTHKEYDATA_ISWEBAUTHKEYEXPIRE_OFFSET UNITYSDK_OFFSET(0x181161A0)
#define RPG_CLIENT_AUTHKEYDATA_UPDATEWEBAUTHKEY_OFFSET UNITYSDK_OFFSET(0x18116560)
#define RPG_CLIENT_AUTHKEYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x181160B0)

namespace RPG::Client
{
	inline static constexpr unsigned int AuthKeyData_TypeDefinitionIndex = 63460;

	class AuthKeyData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::AuthKeyData_WebAuthKey*>* _AuthKeyDic; // 0x10
		::System::UInt64 _WebAuthkeyCacheTimespan; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUTHKEYDATA__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::AuthKeyData_WebAuthKey*>* get_AuthKeyDic()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::AuthKeyData_WebAuthKey*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUTHKEYDATA_GET_AUTHKEYDIC_OFFSET))(this);
		}

		::System::Boolean IsWebAuthkeyExpire(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUTHKEYDATA_ISWEBAUTHKEYEXPIRE_OFFSET))(this, a1);
		}

		::System::String* GetWebAuthKeyString(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUTHKEYDATA_GETWEBAUTHKEYSTRING_OFFSET))(this, a1);
		}

		::System::Void UpdateWebAuthKey(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUTHKEYDATA_UPDATEWEBAUTHKEY_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUTHKEYDATA_CLEAR_OFFSET))(this);
		}
	};
}
