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

#define RPG_GAMECORE_BOOKSERIESCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x194E0D00)
#define RPG_GAMECORE_BOOKSERIESCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x194E0BD0)
#define RPG_GAMECORE_BOOKSERIESCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x194E08C0)
#define RPG_GAMECORE_BOOKSERIESCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x194E0B70)
#define RPG_GAMECORE_BOOKSERIESCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x194E0E50)
#define RPG_GAMECORE_BOOKSERIESCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x194E0940)
#define RPG_GAMECORE_BOOKSERIESCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x194E0E90)
#define RPG_GAMECORE_BOOKSERIESCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x194E1060)
#define RPG_GAMECORE_BOOKSERIESCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x194E1390)
#define RPG_GAMECORE_BOOKSERIESCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x194E16B0)
#define RPG_GAMECORE_BOOKSERIESCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x194E0FC0)
#define RPG_GAMECORE_BOOKSERIESCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x194E0F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BookSeriesConfigExcelTable_TypeDefinitionIndex = 12275;

	class BookSeriesConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(BookSeriesConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x6720);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BookSeriesConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x6728);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BookSeriesConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BookSeriesConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(BookSeriesConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x6730);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BookSeriesConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x31F0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(BookSeriesConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x31F1);
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

		static ::RPG::GameCore::BookSeriesConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::BookSeriesConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKSERIESCONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
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

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKSERIESCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKSERIESCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKSERIESCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::BookSeriesConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::BookSeriesConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKSERIESCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
