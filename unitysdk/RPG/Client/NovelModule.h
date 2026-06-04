#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::Client { class Book; }
namespace RPG::Client { class BookContentData; }
namespace RPG::Client { class BookSeries; }
namespace RPG::GameCore { class BookSeriesWorldConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_NOVELMODULE_CREATEBOOKBYID_OFFSET UNITYSDK_OFFSET(0xC2EAC30)
#define RPG_CLIENT_NOVELMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC2EA0B0)
#define RPG_CLIENT_NOVELMODULE_GETALLBOOKSERIES_OFFSET UNITYSDK_OFFSET(0xC2EA9B0)
#define RPG_CLIENT_NOVELMODULE_GETBOOKSERIESBYWORLD_OFFSET UNITYSDK_OFFSET(0xC2EA7C0)
#define RPG_CLIENT_NOVELMODULE_GETUNLOCKWORLDCONFIGS_OFFSET UNITYSDK_OFFSET(0xC2EA370)
#define RPG_CLIENT_NOVELMODULE_GETWORLDTABS_OFFSET UNITYSDK_OFFSET(0xC2EA160)
#define RPG_CLIENT_NOVELMODULE_INITBOOKSERIESANDBOOKCONFIG_OFFSET UNITYSDK_OFFSET(0xC2E9B80)
#define RPG_CLIENT_NOVELMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xC2EA020)
#define RPG_CLIENT_NOVELMODULE_ISBOOKAVAILABLE_OFFSET UNITYSDK_OFFSET(0xC2EAB80)
#define RPG_CLIENT_NOVELMODULE_LOADBOOKCONTENT_OFFSET UNITYSDK_OFFSET(0xC2EAC90)
#define RPG_CLIENT_NOVELMODULE_UNLOCKBOOK_OFFSET UNITYSDK_OFFSET(0xC2EB470)
#define RPG_CLIENT_NOVELMODULE__ADDBOOKSERIES_OFFSET UNITYSDK_OFFSET(0xC2E9E50)
#define RPG_CLIENT_NOVELMODULE__ADDBOOK_OFFSET UNITYSDK_OFFSET(0xC2E9F10)
#define RPG_CLIENT_NOVELMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xC2EB720)
#define RPG_CLIENT_NOVELMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC2EB760)
#define RPG_CLIENT_NOVELMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xC2E9AD0)
#define RPG_CLIENT_NOVELMODULE__GETWORLDCONFIGS_OFFSET UNITYSDK_OFFSET(0xC2EA580)
#define RPG_CLIENT_NOVELMODULE__UNLOCKBOOK_OFFSET UNITYSDK_OFFSET(0xC2EB4C0)
#define RPG_CLIENT_NOVELMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC2EB820)
#define RPG_CLIENT_NOVELMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xC2EB7A0)
#define RPG_CLIENT_NOVELMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xC2EB830)
#define RPG_CLIENT_NOVELMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC2EB890)

namespace RPG::Client
{
	inline static constexpr unsigned int NovelModule_TypeDefinitionIndex = 62071;

	class NovelModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::BookSeries*>* _bookSeries; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UnlockWorldID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVELMODULE__CTOR_OFFSET))(this);
		}

		::System::Void InitBookSeriesAndBookConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVELMODULE_INITBOOKSERIESANDBOOKCONFIG_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVELMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVELMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TextID>* GetWorldTabs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TextID>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVELMODULE_GETWORLDTABS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::BookSeriesWorldConfigRow*>* GetUnlockWorldConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::BookSeriesWorldConfigRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVELMODULE_GETUNLOCKWORLDCONFIGS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BookSeries*>* GetBookSeriesByWorld(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BookSeries*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVELMODULE_GETBOOKSERIESBYWORLD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BookSeries*>* GetAllBookSeries()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BookSeries*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVELMODULE_GETALLBOOKSERIES_OFFSET))(this);
		}

		::System::Boolean IsBookAvailable(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVELMODULE_ISBOOKAVAILABLE_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::Book* CreateBookByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::Book*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVELMODULE_CREATEBOOKBYID_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::BookContentData*>* LoadBookContent(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BookContentData*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVELMODULE_LOADBOOKCONTENT_OFFSET))(a1);
		}

		::System::Void UnLockBook(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVELMODULE_UNLOCKBOOK_OFFSET))(this, a1);
		}

		::System::Void _AddBookSeries(::RPG::Client::BookSeries* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BookSeries*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVELMODULE__ADDBOOKSERIES_OFFSET))(this, a1);
		}

		::System::Void _AddBook(::RPG::Client::Book* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Book*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVELMODULE__ADDBOOK_OFFSET))(this, a1);
		}

		::System::Void _UnLockBook(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVELMODULE__UNLOCKBOOK_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::BookSeriesWorldConfigRow*>* _GetWorldConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::BookSeriesWorldConfigRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVELMODULE__GETWORLDCONFIGS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVELMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVELMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVELMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVELMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVELMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVELMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
