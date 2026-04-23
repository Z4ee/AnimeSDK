#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7FF19F6206AF6DD7_26;
namespace RPG::GameCore { class HeliobusCommentRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_HELIOBUSSNSCOMMENTDATA_CHECKISCANREPLY_OFFSET UNITYSDK_OFFSET(0xA615F40)
#define RPG_CLIENT_HELIOBUSSNSCOMMENTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA615BB0)
#define RPG_CLIENT_HELIOBUSSNSCOMMENTDATA_GET_COMMENTDAY_OFFSET UNITYSDK_OFFSET(0xA6162A0)
#define RPG_CLIENT_HELIOBUSSNSCOMMENTDATA_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xA6163C0)
#define RPG_CLIENT_HELIOBUSSNSCOMMENTDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xA616280)
#define RPG_CLIENT_HELIOBUSSNSCOMMENTDATA_GET_ISMYCOMMENT_OFFSET UNITYSDK_OFFSET(0xA6162C0)
#define RPG_CLIENT_HELIOBUSSNSCOMMENTDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xA616210)
#define RPG_CLIENT_HELIOBUSSNSCOMMENTDATA_GET_SUBCOMMENTDATADICT_OFFSET UNITYSDK_OFFSET(0xA616450)
#define RPG_CLIENT_HELIOBUSSNSCOMMENTDATA_GET_USERID_OFFSET UNITYSDK_OFFSET(0xA616340)
#define RPG_CLIENT_HELIOBUSSNSCOMMENTDATA_SET_COMMENTDAY_OFFSET UNITYSDK_OFFSET(0xA6162B0)
#define RPG_CLIENT_HELIOBUSSNSCOMMENTDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xA616290)
#define RPG_CLIENT_HELIOBUSSNSCOMMENTDATA_SET_SUBCOMMENTDATADICT_OFFSET UNITYSDK_OFFSET(0xA616460)
#define RPG_CLIENT_HELIOBUSSNSCOMMENTDATA_SYNCCOMMENT_OFFSET UNITYSDK_OFFSET(0xA615C80)
#define RPG_CLIENT_HELIOBUSSNSCOMMENTDATA__CHECKISCOMMENTAVAILABLE_OFFSET UNITYSDK_OFFSET(0xA615ED0)
#define RPG_CLIENT_HELIOBUSSNSCOMMENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA615C70)

namespace RPG::Client
{
	inline static constexpr unsigned int HeliobusSNSCommentData_TypeDefinitionIndex = 60468;

	class HeliobusSNSCommentData : public ::System::Object
	{
	public:
		::RPG::GameCore::HeliobusCommentRow* _Row; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::HeliobusSNSCommentData*>* _SubCommentDataDict_k__BackingField; // 0x18
		::System::UInt32 _ID_k__BackingField; // 0x20
		::System::UInt32 _CommentDay_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSCOMMENTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::HeliobusSNSCommentData* Create(::System::UInt32 baseID)
		{
			return ((::RPG::Client::HeliobusSNSCommentData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSCOMMENTDATA_CREATE_OFFSET))(baseID);
		}

		::System::Void SyncComment(::Class_1_7FF19F6206AF6DD7_26* commentProto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_26*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSCOMMENTDATA_SYNCCOMMENT_OFFSET))(this, commentProto);
		}

		::System::Boolean CheckIsCanReply()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSCOMMENTDATA_CHECKISCANREPLY_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSCOMMENTDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSCOMMENTDATA_SET_ID_OFFSET))(this, value);
		}

		::System::UInt32 get_CommentDay()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSCOMMENTDATA_GET_COMMENTDAY_OFFSET))(this);
		}

		::System::Void set_CommentDay(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSCOMMENTDATA_SET_COMMENTDAY_OFFSET))(this, value);
		}

		::System::Boolean get_IsMyComment()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSCOMMENTDATA_GET_ISMYCOMMENT_OFFSET))(this);
		}

		::RPG::GameCore::HeliobusCommentRow* get_Row()
		{
			return ((::RPG::GameCore::HeliobusCommentRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSCOMMENTDATA_GET_ROW_OFFSET))(this);
		}

		::System::UInt32 get_UserID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSCOMMENTDATA_GET_USERID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Content()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSCOMMENTDATA_GET_CONTENT_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::HeliobusSNSCommentData*>* get_SubCommentDataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::HeliobusSNSCommentData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSCOMMENTDATA_GET_SUBCOMMENTDATADICT_OFFSET))(this);
		}

		::System::Void set_SubCommentDataDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::HeliobusSNSCommentData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::HeliobusSNSCommentData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSCOMMENTDATA_SET_SUBCOMMENTDATADICT_OFFSET))(this, value);
		}

		::System::Boolean _CheckIsCommentAvailable(::System::UInt32 subCommentID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSCOMMENTDATA__CHECKISCOMMENTAVAILABLE_OFFSET))(this, subCommentID);
		}
	};
}
