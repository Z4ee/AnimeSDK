#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PhotoExhibitionCommentRow; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONCOMMENTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x8F91B00)
#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONCOMMENTDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x8F91B90)
#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONCOMMENTDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x8F91BB0)
#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONCOMMENTDATA_GET_NPCHANDICON_OFFSET UNITYSDK_OFFSET(0x8F91BE0)
#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONCOMMENTDATA_GET_REPLY_OFFSET UNITYSDK_OFFSET(0x8F91C00)
#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONCOMMENTDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x8F91BA0)
#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONCOMMENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8F91B80)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityPhotoExhibitionCommentData_TypeDefinitionIndex = 50082;

	class ActivityPhotoExhibitionCommentData : public ::System::Object
	{
	public:
		::RPG::GameCore::PhotoExhibitionCommentRow* _Row; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONCOMMENTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityPhotoExhibitionCommentData* Create(::System::UInt32 id)
		{
			return ((::RPG::Client::ActivityPhotoExhibitionCommentData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONCOMMENTDATA_CREATE_OFFSET))(id);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONCOMMENTDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONCOMMENTDATA_SET_ID_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONCOMMENTDATA_GET_NAME_OFFSET))(this);
		}

		::System::String* get_NpcHandIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONCOMMENTDATA_GET_NPCHANDICON_OFFSET))(this);
		}

		::RPG::Client::TextID get_Reply()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONCOMMENTDATA_GET_REPLY_OFFSET))(this);
		}
	};
}
