#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AuthKeyData_WebAuthKey; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_AUTHKEYDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x91031C0)
#define RPG_CLIENT_AUTHKEYDATA_GETWEBAUTHKEYSTRING_OFFSET UNITYSDK_OFFSET(0x9102D70)
#define RPG_CLIENT_AUTHKEYDATA_GET_AUTHKEYDIC_OFFSET UNITYSDK_OFFSET(0x9102AC0)
#define RPG_CLIENT_AUTHKEYDATA_ISWEBAUTHKEYEXPIRE_OFFSET UNITYSDK_OFFSET(0x9102BA0)
#define RPG_CLIENT_AUTHKEYDATA_UPDATEWEBAUTHKEY_OFFSET UNITYSDK_OFFSET(0x9102E90)
#define RPG_CLIENT_AUTHKEYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9102AB0)

namespace RPG::Client
{
	inline static constexpr unsigned int AuthKeyData_TypeDefinitionIndex = 54008;

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

		::System::Boolean IsWebAuthkeyExpire(::System::String* sourceURL)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUTHKEYDATA_ISWEBAUTHKEYEXPIRE_OFFSET))(this, sourceURL);
		}

		::System::String* GetWebAuthKeyString(::System::String* sourceURL)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUTHKEYDATA_GETWEBAUTHKEYSTRING_OFFSET))(this, sourceURL);
		}

		::System::Void UpdateWebAuthKey(::System::String* sourceURL, ::System::String* authKeyString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUTHKEYDATA_UPDATEWEBAUTHKEY_OFFSET))(this, sourceURL, authKeyString);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUTHKEYDATA_CLEAR_OFFSET))(this);
		}
	};
}
