#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CurrencyDisplayRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CURRENCYDISPLAYEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1713FCD0)
#define RPG_GAMECORE_CURRENCYDISPLAYEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1713FB20)
#define RPG_GAMECORE_CURRENCYDISPLAYEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1713F7F0)
#define RPG_GAMECORE_CURRENCYDISPLAYEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1713FAC0)
#define RPG_GAMECORE_CURRENCYDISPLAYEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1713FE50)
#define RPG_GAMECORE_CURRENCYDISPLAYEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1713F870)
#define RPG_GAMECORE_CURRENCYDISPLAYEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1713FE90)
#define RPG_GAMECORE_CURRENCYDISPLAYEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17140070)
#define RPG_GAMECORE_CURRENCYDISPLAYEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x17140200)
#define RPG_GAMECORE_CURRENCYDISPLAYEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17140510)
#define RPG_GAMECORE_CURRENCYDISPLAYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1713FFD0)
#define RPG_GAMECORE_CURRENCYDISPLAYEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1713FF30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CurrencyDisplayExcelTable_TypeDefinitionIndex = 13375;

	class CurrencyDisplayExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CurrencyDisplayExcelTable_TypeDefinitionIndex)->GetStaticField(0x29460);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(CurrencyDisplayExcelTable_TypeDefinitionIndex)->GetStaticField(0x29468);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CurrencyDisplayRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CurrencyDisplayRow*>**)Il2CppClass::FromTypeDefinitionIndex(CurrencyDisplayExcelTable_TypeDefinitionIndex)->GetStaticField(0x29470);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CurrencyDisplayExcelTable_TypeDefinitionIndex)->GetStaticField(0xD9A0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(CurrencyDisplayExcelTable_TypeDefinitionIndex)->GetStaticField(0xD9A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CURRENCYDISPLAYEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CurrencyDisplayRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CurrencyDisplayRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CURRENCYDISPLAYEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CURRENCYDISPLAYEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CurrencyDisplayRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CurrencyDisplayRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CURRENCYDISPLAYEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::CurrencyDisplayRow* GetData(::System::UInt32 CurrencyID)
		{
			return ((::RPG::GameCore::CurrencyDisplayRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CURRENCYDISPLAYEXCELTABLE_GETDATA_OFFSET))(CurrencyID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CURRENCYDISPLAYEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CURRENCYDISPLAYEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CURRENCYDISPLAYEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CURRENCYDISPLAYEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CURRENCYDISPLAYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CURRENCYDISPLAYEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::CurrencyDisplayRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::CurrencyDisplayRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CURRENCYDISPLAYEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
