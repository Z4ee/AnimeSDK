#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BookSeriesConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_BOOKSERIESCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1870E130)
#define RPG_GAMECORE_BOOKSERIESCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1870DFB0)
#define RPG_GAMECORE_BOOKSERIESCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1870DC80)
#define RPG_GAMECORE_BOOKSERIESCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1870DF50)
#define RPG_GAMECORE_BOOKSERIESCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1870E2B0)
#define RPG_GAMECORE_BOOKSERIESCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1870DD00)
#define RPG_GAMECORE_BOOKSERIESCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1870E2F0)
#define RPG_GAMECORE_BOOKSERIESCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1870E4D0)
#define RPG_GAMECORE_BOOKSERIESCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1870E800)
#define RPG_GAMECORE_BOOKSERIESCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1870EB10)
#define RPG_GAMECORE_BOOKSERIESCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1870E430)
#define RPG_GAMECORE_BOOKSERIESCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1870E390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BookSeriesConfigExcelTable_TypeDefinitionIndex = 12189;

	class BookSeriesConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BookSeriesConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2F040);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BookSeriesConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BookSeriesConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(BookSeriesConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2F048);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(BookSeriesConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2F050);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BookSeriesConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xBAD0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(BookSeriesConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xBAD1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKSERIESCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BookSeriesConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BookSeriesConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKSERIESCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKSERIESCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BookSeriesConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BookSeriesConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKSERIESCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::BookSeriesConfigRow* GetData(::System::UInt32 BookSeriesID)
		{
			return ((::RPG::GameCore::BookSeriesConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKSERIESCONFIGEXCELTABLE_GETDATA_OFFSET))(BookSeriesID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKSERIESCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKSERIESCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKSERIESCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKSERIESCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKSERIESCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKSERIESCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::BookSeriesConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::BookSeriesConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKSERIESCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
