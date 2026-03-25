#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BookAudioData; }
namespace RPG::Client { class BookDisplayConfig; }
namespace RPG::GameCore { class BookDisplayTypeConfigRow; }
namespace RPG::GameCore { class LocalbookConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_BOOK_GET_BOOKAUDIODATA_OFFSET UNITYSDK_OFFSET(0x91F4820)
#define RPG_CLIENT_BOOK_GET_BOOKCONTENT_OFFSET UNITYSDK_OFFSET(0x91F4790)
#define RPG_CLIENT_BOOK_GET_BOOKDISPLAYCONFIG_OFFSET UNITYSDK_OFFSET(0x91F4800)
#define RPG_CLIENT_BOOK_GET_BOOKID_OFFSET UNITYSDK_OFFSET(0x91F46E0)
#define RPG_CLIENT_BOOK_GET_BOOKSERIESID_OFFSET UNITYSDK_OFFSET(0x91F4750)
#define RPG_CLIENT_BOOK_GET_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0x91F4840)
#define RPG_CLIENT_BOOK_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0x91F4860)
#define RPG_CLIENT_BOOK_GET_LOCALBOOKIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x91F47E0)
#define RPG_CLIENT_BOOK_GET_LOCALBOOKPATH_OFFSET UNITYSDK_OFFSET(0x91F47C0)
#define RPG_CLIENT_BOOK_GET_NAME_OFFSET UNITYSDK_OFFSET(0x91F4720)
#define RPG_CLIENT_BOOK_GET_ROW_OFFSET UNITYSDK_OFFSET(0x91F4700)
#define RPG_CLIENT_BOOK_GET_SERIESINDEX_OFFSET UNITYSDK_OFFSET(0x91F4770)
#define RPG_CLIENT_BOOK_PROCESSDISPLAYCONFIG_OFFSET UNITYSDK_OFFSET(0x91F45F0)
#define RPG_CLIENT_BOOK_SET_BOOKAUDIODATA_OFFSET UNITYSDK_OFFSET(0x91F4830)
#define RPG_CLIENT_BOOK_SET_BOOKDISPLAYCONFIG_OFFSET UNITYSDK_OFFSET(0x91F4810)
#define RPG_CLIENT_BOOK_SET_BOOKID_OFFSET UNITYSDK_OFFSET(0x91F46F0)
#define RPG_CLIENT_BOOK_SET_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0x91F4850)
#define RPG_CLIENT_BOOK_SET_ISNEW_OFFSET UNITYSDK_OFFSET(0x91F4940)
#define RPG_CLIENT_BOOK_SET_LOCALBOOKPATH_OFFSET UNITYSDK_OFFSET(0x91F47D0)
#define RPG_CLIENT_BOOK_SET_ROW_OFFSET UNITYSDK_OFFSET(0x91F4710)
#define RPG_CLIENT_BOOK__CTOR_OFFSET UNITYSDK_OFFSET(0x91F4500)

namespace RPG::Client
{
	inline static constexpr unsigned int Book_TypeDefinitionIndex = 53992;

	class Book : public ::System::Object
	{
	public:
		::RPG::Client::BookAudioData* _BookAudioData_k__BackingField; // 0x10
		::RPG::GameCore::LocalbookConfigRow* _Row_k__BackingField; // 0x18
		::RPG::Client::BookDisplayConfig* _BookDisplayConfig_k__BackingField; // 0x20
		::System::String* _LocalBookPath_k__BackingField; // 0x28
		::System::UInt32 _BookID_k__BackingField; // 0x30
		::System::Boolean _IsAvailable_k__BackingField; // 0x34

		::System::Void _ctor(::System::UInt32 bookID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOK__CTOR_OFFSET))(this, bookID);
		}

		::System::Void ProcessDisplayConfig(::RPG::GameCore::BookDisplayTypeConfigRow* bookDisplayTypeConfig)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BookDisplayTypeConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOK_PROCESSDISPLAYCONFIG_OFFSET))(this, bookDisplayTypeConfig);
		}

		::System::UInt32 get_BookID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOK_GET_BOOKID_OFFSET))(this);
		}

		::System::Void set_BookID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOK_SET_BOOKID_OFFSET))(this, value);
		}

		::RPG::GameCore::LocalbookConfigRow* get_Row()
		{
			return ((::RPG::GameCore::LocalbookConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOK_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::LocalbookConfigRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LocalbookConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOK_SET_ROW_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOK_GET_NAME_OFFSET))(this);
		}

		::System::UInt32 get_BookSeriesID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOK_GET_BOOKSERIESID_OFFSET))(this);
		}

		::System::UInt32 get_SeriesIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOK_GET_SERIESINDEX_OFFSET))(this);
		}

		::RPG::Client::TextID get_BookContent()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOK_GET_BOOKCONTENT_OFFSET))(this);
		}

		::System::String* get_LocalBookPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOK_GET_LOCALBOOKPATH_OFFSET))(this);
		}

		::System::Void set_LocalBookPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOK_SET_LOCALBOOKPATH_OFFSET))(this, value);
		}

		::Il2CppArray<::System::String*>* get_LocalBookImagePath()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOK_GET_LOCALBOOKIMAGEPATH_OFFSET))(this);
		}

		::RPG::Client::BookDisplayConfig* get_BookDisplayConfig()
		{
			return ((::RPG::Client::BookDisplayConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOK_GET_BOOKDISPLAYCONFIG_OFFSET))(this);
		}

		::System::Void set_BookDisplayConfig(::RPG::Client::BookDisplayConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BookDisplayConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOK_SET_BOOKDISPLAYCONFIG_OFFSET))(this, value);
		}

		::RPG::Client::BookAudioData* get_BookAudioData()
		{
			return ((::RPG::Client::BookAudioData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOK_GET_BOOKAUDIODATA_OFFSET))(this);
		}

		::System::Void set_BookAudioData(::RPG::Client::BookAudioData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BookAudioData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOK_SET_BOOKAUDIODATA_OFFSET))(this, value);
		}

		::System::Boolean get_IsAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOK_GET_ISAVAILABLE_OFFSET))(this);
		}

		::System::Void set_IsAvailable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOK_SET_ISAVAILABLE_OFFSET))(this, value);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOK_GET_ISNEW_OFFSET))(this);
		}

		::System::Void set_IsNew(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOK_SET_ISNEW_OFFSET))(this, value);
		}
	};
}
