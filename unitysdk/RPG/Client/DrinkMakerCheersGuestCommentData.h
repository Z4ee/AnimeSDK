#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DrinkMakerCheersCommentRow; }
namespace System { class String; }

#define RPG_CLIENT_DRINKMAKERCHEERSGUESTCOMMENTDATA_GET_AVATARICONPATH_OFFSET UNITYSDK_OFFSET(0xA194180)
#define RPG_CLIENT_DRINKMAKERCHEERSGUESTCOMMENTDATA_GET_COMMENT_OFFSET UNITYSDK_OFFSET(0xA194240)
#define RPG_CLIENT_DRINKMAKERCHEERSGUESTCOMMENTDATA_GET_ISMAINSTORYCOMMENT_OFFSET UNITYSDK_OFFSET(0xA194270)
#define RPG_CLIENT_DRINKMAKERCHEERSGUESTCOMMENTDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA189650)
#define RPG_CLIENT_DRINKMAKERCHEERSGUESTCOMMENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA18F590)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerCheersGuestCommentData_TypeDefinitionIndex = 58615;

	class DrinkMakerCheersGuestCommentData : public ::System::Object
	{
	public:
		::RPG::GameCore::DrinkMakerCheersCommentRow* _DrinkMakerCheersCommentRow; // 0x10

		::System::Void _ctor(::System::UInt32 cheersCommentConfigID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSGUESTCOMMENTDATA__CTOR_OFFSET))(this, cheersCommentConfigID);
		}

		::System::String* get_AvatarIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSGUESTCOMMENTDATA_GET_AVATARICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Comment()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSGUESTCOMMENTDATA_GET_COMMENT_OFFSET))(this);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSGUESTCOMMENTDATA_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsMainStoryComment()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSGUESTCOMMENTDATA_GET_ISMAINSTORYCOMMENT_OFFSET))(this);
		}
	};
}
