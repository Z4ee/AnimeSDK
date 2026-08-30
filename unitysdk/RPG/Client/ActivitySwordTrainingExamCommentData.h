#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class SwordTrainingExamCommentRow; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMCOMMENTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC694EC0)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMCOMMENTDATA_GET_COMMENT_OFFSET UNITYSDK_OFFSET(0xC695050)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMCOMMENTDATA_GET_IMGPATH_OFFSET UNITYSDK_OFFSET(0xC694F50)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMCOMMENTDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xC694FF0)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMCOMMENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC694F40)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivitySwordTrainingExamCommentData_TypeDefinitionIndex = 62027;

	class ActivitySwordTrainingExamCommentData : public ::System::Object
	{
	public:
		::System::UInt32 CommentID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMCOMMENTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivitySwordTrainingExamCommentData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivitySwordTrainingExamCommentData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMCOMMENTDATA_CREATE_OFFSET))(a1);
		}

		::System::String* get_ImgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMCOMMENTDATA_GET_IMGPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Comment()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMCOMMENTDATA_GET_COMMENT_OFFSET))(this);
		}

		::RPG::GameCore::SwordTrainingExamCommentRow* get__Row()
		{
			return ((::RPG::GameCore::SwordTrainingExamCommentRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGEXAMCOMMENTDATA_GET__ROW_OFFSET))(this);
		}
	};
}
