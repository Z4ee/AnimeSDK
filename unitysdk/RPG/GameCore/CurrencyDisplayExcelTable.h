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

#define RPG_GAMECORE_CURRENCYDISPLAYEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1BC3E1E0)
#define RPG_GAMECORE_CURRENCYDISPLAYEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1BC3E070)
#define RPG_GAMECORE_CURRENCYDISPLAYEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1BC3DD60)
#define RPG_GAMECORE_CURRENCYDISPLAYEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1BC3E010)
#define RPG_GAMECORE_CURRENCYDISPLAYEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1BC3E330)
#define RPG_GAMECORE_CURRENCYDISPLAYEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1BC3DDE0)
#define RPG_GAMECORE_CURRENCYDISPLAYEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1BC3E370)
#define RPG_GAMECORE_CURRENCYDISPLAYEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BC3E540)
#define RPG_GAMECORE_CURRENCYDISPLAYEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1BC3E6D0)
#define RPG_GAMECORE_CURRENCYDISPLAYEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC3E9F0)
#define RPG_GAMECORE_CURRENCYDISPLAYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1BC3E4A0)
#define RPG_GAMECORE_CURRENCYDISPLAYEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1BC3E400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CurrencyDisplayExcelTable_TypeDefinitionIndex = 14068;

	class CurrencyDisplayExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CurrencyDisplayRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CurrencyDisplayRow*>**)Il2CppClass::FromTypeDefinitionIndex(CurrencyDisplayExcelTable_TypeDefinitionIndex)->GetStaticField(0x2DB70);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(CurrencyDisplayExcelTable_TypeDefinitionIndex)->GetStaticField(0x2DB78);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CurrencyDisplayExcelTable_TypeDefinitionIndex)->GetStaticField(0x2DB80);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CurrencyDisplayExcelTable_TypeDefinitionIndex)->GetStaticField(0x8040);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(CurrencyDisplayExcelTable_TypeDefinitionIndex)->GetStaticField(0x8041);
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

		static ::RPG::GameCore::CurrencyDisplayRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::CurrencyDisplayRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CURRENCYDISPLAYEXCELTABLE_GETDATA_OFFSET))(a1);
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

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CURRENCYDISPLAYEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CURRENCYDISPLAYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CURRENCYDISPLAYEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::CurrencyDisplayRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::CurrencyDisplayRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CURRENCYDISPLAYEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
