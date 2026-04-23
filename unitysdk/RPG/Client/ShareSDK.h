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

#define RPG_CLIENT_SHARESDK_GETSHARECHANNELLIST_OFFSET UNITYSDK_OFFSET(0xB166B00)
#define RPG_CLIENT_SHARESDK_GET_SHAREFUNCTIONENABLE_OFFSET UNITYSDK_OFFSET(0xB167140)
#define RPG_CLIENT_SHARESDK_SHAREBYCHANNELID_OFFSET UNITYSDK_OFFSET(0xB167650)
#define RPG_CLIENT_SHARESDK_SHAREPHOTO_OFFSET UNITYSDK_OFFSET(0xB167520)
#define RPG_CLIENT_SHARESDK_SHARE_OFFSET UNITYSDK_OFFSET(0xB167920)
#define RPG_CLIENT_SHARESDK__CTOR_OFFSET UNITYSDK_OFFSET(0xB167070)
#define RPG_CLIENT_SHARESDK__GETVALIDSHARECHANNELLIST_OFFSET UNITYSDK_OFFSET(0xB167360)
#define RPG_CLIENT_SHARESDK__HANDLEHOYOLABPARAMS_OFFSET UNITYSDK_OFFSET(0xB167E50)
#define RPG_CLIENT_SHARESDK__ISCURLANGUAGEVALID_OFFSET UNITYSDK_OFFSET(0xB1685E0)
#define RPG_CLIENT_SHARESDK__ONSHARENOTIFICATION_OFFSET UNITYSDK_OFFSET(0xB168480)
#define RPG_CLIENT_SHARESDK__SHAREPHOTO_OFFSET UNITYSDK_OFFSET(0xB168350)

namespace RPG::Client
{
	inline static constexpr unsigned int ShareSDK_TypeDefinitionIndex = 56343;

	class ShareSDK : public ::System::Object
	{
	public:
		// static const ::System::String* _BASE64_PREFIX; // 0x0
		::Class_1_6297A5DED5713EE5* _ShareParams; // 0x10
		::System::Nullable_1<::System::Boolean> _ShareFunctionEnable; // 0x18
		::RPG::Client::ShareSource _ShareSource; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHARESDK__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ShareChannelConfigRow*>* GetShareChannelList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ShareChannelConfigRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHARESDK_GETSHARECHANNELLIST_OFFSET))(this);
		}

		::System::Void SharePhoto(::System::UInt32 shareChannelID, ::RPG::Client::PhotoGraphFilterImage* image, ::RPG::Client::ShareSource shareSource)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::PhotoGraphFilterImage*, ::RPG::Client::ShareSource))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHARESDK_SHAREPHOTO_OFFSET))(this, shareChannelID, image, shareSource);
		}

		::System::Void ShareByChannelID(::System::UInt32 shareChannelID, ::System::Collections::Generic::List_1<::System::String*>* imageLinks, ::RPG::Client::ShareSource shareSource)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::String*>*, ::RPG::Client::ShareSource))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHARESDK_SHAREBYCHANNELID_OFFSET))(this, shareChannelID, imageLinks, shareSource);
		}

		::System::Void Share(::Class_1_6297A5DED5713EE5* shareParams, ::RPG::Client::ShareSource shareSource)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6297A5DED5713EE5*, ::RPG::Client::ShareSource))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHARESDK_SHARE_OFFSET))(this, shareParams, shareSource);
		}

		::System::Void _SharePhoto(::System::UInt32 shareChannelID, ::Il2CppArray<::System::Byte>* bytes, ::RPG::Client::ShareSource shareSource)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::Byte>*, ::RPG::Client::ShareSource))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHARESDK__SHAREPHOTO_OFFSET))(this, shareChannelID, bytes, shareSource);
		}

		::System::Void _OnShareNotification(::System::String* responseString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHARESDK__ONSHARENOTIFICATION_OFFSET))(this, responseString);
		}

		::System::Void _HandleHoYoLabParams(::MiHoYo::SDK::JSONObject* shareData, ::Class_1_0EF1FE815B5E0EF7* shareParams)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONObject*, ::Class_1_0EF1FE815B5E0EF7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHARESDK__HANDLEHOYOLABPARAMS_OFFSET))(this, shareData, shareParams);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ShareChannelConfigRow*>* _GetValidShareChannelList(::Il2CppArray<::System::UInt32>* shareChannelList)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ShareChannelConfigRow*>*(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHARESDK__GETVALIDSHARECHANNELLIST_OFFSET))(this, shareChannelList);
		}

		::System::Boolean _IsCurLanguageValid(::RPG::GameCore::ShareChannelConfigRow* shareChannelConfig)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ShareChannelConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHARESDK__ISCURLANGUAGEVALID_OFFSET))(this, shareChannelConfig);
		}

		::System::Boolean get_ShareFunctionEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHARESDK_GET_SHAREFUNCTIONENABLE_OFFSET))(this);
		}
	};
}
