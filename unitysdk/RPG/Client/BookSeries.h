#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BookSeries_CollectStateEnum.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class Book; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BOOKSERIES_ADDBOOKBYID_OFFSET UNITYSDK_OFFSET(0x9E9DEC0)
#define RPG_CLIENT_BOOKSERIES_ADDBOOK_OFFSET UNITYSDK_OFFSET(0x9E9DF70)
#define RPG_CLIENT_BOOKSERIES_GETBOOKBYINDEX_OFFSET UNITYSDK_OFFSET(0x9E9E520)
#define RPG_CLIENT_BOOKSERIES_GETBOOKS_OFFSET UNITYSDK_OFFSET(0x9E9E1E0)
#define RPG_CLIENT_BOOKSERIES_GET_BOOKSERIESID_OFFSET UNITYSDK_OFFSET(0x9E9E620)
#define RPG_CLIENT_BOOKSERIES_GET_COLLECTSTATE_OFFSET UNITYSDK_OFFSET(0x9E9E9A0)
#define RPG_CLIENT_BOOKSERIES_GET_COMMENTS_OFFSET UNITYSDK_OFFSET(0x9E9E660)
#define RPG_CLIENT_BOOKSERIES_GET_CURRENTNUM_OFFSET UNITYSDK_OFFSET(0x9E9E6E0)
#define RPG_CLIENT_BOOKSERIES_GET_HASAUDIOCONTENT_OFFSET UNITYSDK_OFFSET(0x9E9E9C0)
#define RPG_CLIENT_BOOKSERIES_GET_ICONFIGUREPATH_OFFSET UNITYSDK_OFFSET(0x9E9E830)
#define RPG_CLIENT_BOOKSERIES_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x9E9E700)
#define RPG_CLIENT_BOOKSERIES_GET_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0x9E9E960)
#define RPG_CLIENT_BOOKSERIES_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0x9E9EAF0)
#define RPG_CLIENT_BOOKSERIES_GET_ISSHOWINBOOKSHELF_OFFSET UNITYSDK_OFFSET(0x9E9E980)
#define RPG_CLIENT_BOOKSERIES_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9E9E640)
#define RPG_CLIENT_BOOKSERIES_GET_TOTALNUM_OFFSET UNITYSDK_OFFSET(0x9E9E680)
#define RPG_CLIENT_BOOKSERIES_GET_WORLDNAME_OFFSET UNITYSDK_OFFSET(0x9E9E6C0)
#define RPG_CLIENT_BOOKSERIES_GET_WORLD_OFFSET UNITYSDK_OFFSET(0x9E9E6A0)
#define RPG_CLIENT_BOOKSERIES_ISBOOKAVAILABLE_OFFSET UNITYSDK_OFFSET(0x9E9E450)
#define RPG_CLIENT_BOOKSERIES_SET_BOOKSERIESID_OFFSET UNITYSDK_OFFSET(0x9E9E630)
#define RPG_CLIENT_BOOKSERIES_SET_COLLECTSTATE_OFFSET UNITYSDK_OFFSET(0x9E9E9B0)
#define RPG_CLIENT_BOOKSERIES_SET_COMMENTS_OFFSET UNITYSDK_OFFSET(0x9E9E670)
#define RPG_CLIENT_BOOKSERIES_SET_CURRENTNUM_OFFSET UNITYSDK_OFFSET(0x9E9E6F0)
#define RPG_CLIENT_BOOKSERIES_SET_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0x9E9E970)
#define RPG_CLIENT_BOOKSERIES_SET_ISSHOWINBOOKSHELF_OFFSET UNITYSDK_OFFSET(0x9E9E990)
#define RPG_CLIENT_BOOKSERIES_SET_NAME_OFFSET UNITYSDK_OFFSET(0x9E9E650)
#define RPG_CLIENT_BOOKSERIES_SET_TOTALNUM_OFFSET UNITYSDK_OFFSET(0x9E9E690)
#define RPG_CLIENT_BOOKSERIES_SET_WORLDNAME_OFFSET UNITYSDK_OFFSET(0x9E9E6D0)
#define RPG_CLIENT_BOOKSERIES_SET_WORLD_OFFSET UNITYSDK_OFFSET(0x9E9E6B0)
#define RPG_CLIENT_BOOKSERIES_UNLOCKBOOKBYID_OFFSET UNITYSDK_OFFSET(0x9E9E020)
#define RPG_CLIENT_BOOKSERIES__CTOR_OFFSET UNITYSDK_OFFSET(0x9E9DD90)

namespace RPG::Client
{
	inline static constexpr unsigned int BookSeries_TypeDefinitionIndex = 61143;

	class BookSeries : public ::System::Object
	{
	public:
		::System::String* _iconFigurePath; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::Book*>* _Books; // 0x18
		::System::String* _iconPath; // 0x20
		::RPG::Client::TextID _WorldName_k__BackingField; // 0x28
		::System::UInt32 _World_k__BackingField; // 0x38
		::System::UInt32 _CurrentNum_k__BackingField; // 0x3C
		::System::UInt32 _BookSeriesID_k__BackingField; // 0x40
		::System::Boolean _IsAvailable_k__BackingField; // 0x44
		::System::Boolean _IsShowInBookshelf_k__BackingField; // 0x45
		::RPG::Client::TextID _Comments_k__BackingField; // 0x48
		::RPG::Client::BookSeries_CollectStateEnum _CollectState_k__BackingField; // 0x58
		::System::UInt32 _TotalNum_k__BackingField; // 0x5C
		::RPG::Client::TextID _Name_k__BackingField; // 0x60

		::System::Void _ctor(::System::UInt32 bookSeriesID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES__CTOR_OFFSET))(this, bookSeriesID);
		}

		::System::Void AddBookByID(::System::UInt32 BookID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_ADDBOOKBYID_OFFSET))(this, BookID);
		}

		::System::Void AddBook(::RPG::Client::Book* book)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Book*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_ADDBOOK_OFFSET))(this, book);
		}

		::System::Void UnLockBookByID(::System::UInt32 BookID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_UNLOCKBOOKBYID_OFFSET))(this, BookID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::Book*>* GetBooks()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::Book*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_GETBOOKS_OFFSET))(this);
		}

		::System::Boolean IsBookAvailable(::System::UInt32 BookID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_ISBOOKAVAILABLE_OFFSET))(this, BookID);
		}

		::RPG::Client::Book* GetBookByIndex(::System::UInt32 index)
		{
			return ((::RPG::Client::Book*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_GETBOOKBYINDEX_OFFSET))(this, index);
		}

		::System::UInt32 get_BookSeriesID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_GET_BOOKSERIESID_OFFSET))(this);
		}

		::System::Void set_BookSeriesID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_SET_BOOKSERIESID_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_SET_NAME_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Comments()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_GET_COMMENTS_OFFSET))(this);
		}

		::System::Void set_Comments(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_SET_COMMENTS_OFFSET))(this, value);
		}

		::System::UInt32 get_TotalNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_GET_TOTALNUM_OFFSET))(this);
		}

		::System::Void set_TotalNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_SET_TOTALNUM_OFFSET))(this, value);
		}

		::System::UInt32 get_World()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_GET_WORLD_OFFSET))(this);
		}

		::System::Void set_World(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_SET_WORLD_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_WorldName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_GET_WORLDNAME_OFFSET))(this);
		}

		::System::Void set_WorldName(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_SET_WORLDNAME_OFFSET))(this, value);
		}

		::System::UInt32 get_CurrentNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_GET_CURRENTNUM_OFFSET))(this);
		}

		::System::Void set_CurrentNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_SET_CURRENTNUM_OFFSET))(this, value);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_IconFigurePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_GET_ICONFIGUREPATH_OFFSET))(this);
		}

		::System::Boolean get_IsAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_GET_ISAVAILABLE_OFFSET))(this);
		}

		::System::Void set_IsAvailable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_SET_ISAVAILABLE_OFFSET))(this, value);
		}

		::System::Boolean get_IsShowInBookshelf()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_GET_ISSHOWINBOOKSHELF_OFFSET))(this);
		}

		::System::Void set_IsShowInBookshelf(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_SET_ISSHOWINBOOKSHELF_OFFSET))(this, value);
		}

		::RPG::Client::BookSeries_CollectStateEnum get_CollectState()
		{
			return ((::RPG::Client::BookSeries_CollectStateEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_GET_COLLECTSTATE_OFFSET))(this);
		}

		::System::Void set_CollectState(::RPG::Client::BookSeries_CollectStateEnum value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BookSeries_CollectStateEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_SET_COLLECTSTATE_OFFSET))(this, value);
		}

		::System::Boolean get_HasAudioContent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_GET_HASAUDIOCONTENT_OFFSET))(this);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_GET_ISNEW_OFFSET))(this);
		}
	};
}
