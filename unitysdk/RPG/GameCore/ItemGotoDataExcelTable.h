#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemGotoDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ITEMGOTODATAEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x172CC220)
#define RPG_GAMECORE_ITEMGOTODATAEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x172CC070)
#define RPG_GAMECORE_ITEMGOTODATAEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x172CBD40)
#define RPG_GAMECORE_ITEMGOTODATAEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x172CC010)
#define RPG_GAMECORE_ITEMGOTODATAEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x172CC3F0)
#define RPG_GAMECORE_ITEMGOTODATAEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x172CBDC0)
#define RPG_GAMECORE_ITEMGOTODATAEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x172CC430)
#define RPG_GAMECORE_ITEMGOTODATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x172CC610)
#define RPG_GAMECORE_ITEMGOTODATAEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x172CC780)
#define RPG_GAMECORE_ITEMGOTODATAEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x172CCAE0)
#define RPG_GAMECORE_ITEMGOTODATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x172CC570)
#define RPG_GAMECORE_ITEMGOTODATAEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x172CC4D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemGotoDataExcelTable_TypeDefinitionIndex = 12677;

	class ItemGotoDataExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ItemGotoDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x247A0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ItemGotoDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x247A8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemGotoDataRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemGotoDataRow*>**)Il2CppClass::FromTypeDefinitionIndex(ItemGotoDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x247B0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ItemGotoDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x9BD0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ItemGotoDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x9BD1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMGOTODATAEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemGotoDataRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemGotoDataRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMGOTODATAEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMGOTODATAEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemGotoDataRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemGotoDataRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMGOTODATAEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ItemGotoDataRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::ItemGotoDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMGOTODATAEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMGOTODATAEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMGOTODATAEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMGOTODATAEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMGOTODATAEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMGOTODATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMGOTODATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ItemGotoDataRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ItemGotoDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMGOTODATAEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
