#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ShareSource.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_0EF1FE815B5E0EF7;
class Class_1_6297A5DED5713EE5;
namespace MiHoYo::SDK { class JSONObject; }
namespace RPG::Client { class PhotoGraphFilterImage; }
namespace RPG::GameCore { class ShareChannelConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SHARESDK_GETSHARECHANNELLIST_OFFSET UNITYSDK_OFFSET(0x19F45F20)
#define RPG_CLIENT_SHARESDK_GET_SHAREFUNCTIONENABLE_OFFSET UNITYSDK_OFFSET(0x19F46470)
#define RPG_CLIENT_SHARESDK_SHAREBYCHANNELID_OFFSET UNITYSDK_OFFSET(0x19F46A00)
#define RPG_CLIENT_SHARESDK_SHAREPHOTO_OFFSET UNITYSDK_OFFSET(0x19F468C0)
#define RPG_CLIENT_SHARESDK_SHARE_OFFSET UNITYSDK_OFFSET(0x19F46D30)
#define RPG_CLIENT_SHARESDK__CTOR_OFFSET UNITYSDK_OFFSET(0x19F463A0)
#define RPG_CLIENT_SHARESDK__GETVALIDSHARECHANNELLIST_OFFSET UNITYSDK_OFFSET(0x19F466C0)
#define RPG_CLIENT_SHARESDK__HANDLEHOYOLABPARAMS_OFFSET UNITYSDK_OFFSET(0x19F47370)
#define RPG_CLIENT_SHARESDK__ISCURLANGUAGEVALID_OFFSET UNITYSDK_OFFSET(0x19F47D40)
#define RPG_CLIENT_SHARESDK__ONSHARENOTIFICATION_OFFSET UNITYSDK_OFFSET(0x19F47B00)
#define RPG_CLIENT_SHARESDK__SHAREPHOTO_OFFSET UNITYSDK_OFFSET(0x19F47970)

namespace RPG::Client
{
	inline static constexpr unsigned int ShareSDK_TypeDefinitionIndex = 58363;

	class ShareSDK : public ::System::Object
	{
	public:
		// static const ::System::String* _BASE64_PREFIX; // 0x0
		::Class_1_6297A5DED5713EE5* _ShareParams; // 0x10
		::RPG::Client::ShareSource _ShareSource; // 0x18
		::System::Nullable_1<::System::Boolean> _ShareFunctionEnable; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHARESDK__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ShareChannelConfigRow*>* GetShareChannelList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ShareChannelConfigRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHARESDK_GETSHARECHANNELLIST_OFFSET))(this);
		}

		::System::Void SharePhoto(::System::UInt32 a1, ::RPG::Client::PhotoGraphFilterImage* a2, ::RPG::Client::ShareSource a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::PhotoGraphFilterImage*, ::RPG::Client::ShareSource))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHARESDK_SHAREPHOTO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ShareByChannelID(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::RPG::Client::ShareSource a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::String*>*, ::RPG::Client::ShareSource))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHARESDK_SHAREBYCHANNELID_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Share(::Class_1_6297A5DED5713EE5* a1, ::RPG::Client::ShareSource a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6297A5DED5713EE5*, ::RPG::Client::ShareSource))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHARESDK_SHARE_OFFSET))(this, a1, a2);
		}

		::System::Void _SharePhoto(::System::UInt32 a1, ::Il2CppArray<::System::Byte>* a2, ::RPG::Client::ShareSource a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::Byte>*, ::RPG::Client::ShareSource))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHARESDK__SHAREPHOTO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OnShareNotification(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHARESDK__ONSHARENOTIFICATION_OFFSET))(this, a1);
		}

		::System::Void _HandleHoYoLabParams(::MiHoYo::SDK::JSONObject* a1, ::Class_1_0EF1FE815B5E0EF7* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONObject*, ::Class_1_0EF1FE815B5E0EF7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHARESDK__HANDLEHOYOLABPARAMS_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ShareChannelConfigRow*>* _GetValidShareChannelList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ShareChannelConfigRow*>*(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHARESDK__GETVALIDSHARECHANNELLIST_OFFSET))(this, a1);
		}

		::System::Boolean _IsCurLanguageValid(::RPG::GameCore::ShareChannelConfigRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ShareChannelConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHARESDK__ISCURLANGUAGEVALID_OFFSET))(this, a1);
		}

		::System::Boolean get_ShareFunctionEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHARESDK_GET_SHAREFUNCTIONENABLE_OFFSET))(this);
		}
	};
}
