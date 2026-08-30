#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PhotoExhibitionCommentRow; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONCOMMENTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1B85A010)
#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONCOMMENTDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B85A0A0)
#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONCOMMENTDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1B85A0C0)
#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONCOMMENTDATA_GET_NPCHANDICON_OFFSET UNITYSDK_OFFSET(0x1B85A130)
#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONCOMMENTDATA_GET_REPLY_OFFSET UNITYSDK_OFFSET(0x1B85A180)
#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONCOMMENTDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1B85A0B0)
#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONCOMMENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B85A090)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityPhotoExhibitionCommentData_TypeDefinitionIndex = 61814;

	class ActivityPhotoExhibitionCommentData : public ::System::Object
	{
	public:
		::RPG::GameCore::PhotoExhibitionCommentRow* _Row; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONCOMMENTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityPhotoExhibitionCommentData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityPhotoExhibitionCommentData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONCOMMENTDATA_CREATE_OFFSET))(a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONCOMMENTDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONCOMMENTDATA_SET_ID_OFFSET))(this, a1);
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
