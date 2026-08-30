#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/ItemRarity.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemRarityConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ITEMRARITYCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D2306F0)
#define RPG_GAMECORE_ITEMRARITYCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D230580)
#define RPG_GAMECORE_ITEMRARITYCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D230270)
#define RPG_GAMECORE_ITEMRARITYCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D230520)
#define RPG_GAMECORE_ITEMRARITYCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D230840)
#define RPG_GAMECORE_ITEMRARITYCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D2302F0)
#define RPG_GAMECORE_ITEMRARITYCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D230880)
#define RPG_GAMECORE_ITEMRARITYCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D230A50)
#define RPG_GAMECORE_ITEMRARITYCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D230DA0)
#define RPG_GAMECORE_ITEMRARITYCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2310C0)
#define RPG_GAMECORE_ITEMRARITYCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D2309B0)
#define RPG_GAMECORE_ITEMRARITYCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D230910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemRarityConfigExcelTable_TypeDefinitionIndex = 13751;

	class ItemRarityConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ItemRarityConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x301C0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemRarityConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemRarityConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(ItemRarityConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x301C8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ItemRarityConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x301D0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ItemRarityConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xCD50);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ItemRarityConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xCD51);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMRARITYCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemRarityConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemRarityConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMRARITYCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMRARITYCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemRarityConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemRarityConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMRARITYCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ItemRarityConfigRow* GetData(::RPG::GameCore::ItemRarity a1)
		{
			return ((::RPG::GameCore::ItemRarityConfigRow*(*)(::RPG::GameCore::ItemRarity))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMRARITYCONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMRARITYCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMRARITYCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMRARITYCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMRARITYCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMRARITYCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMRARITYCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ItemRarityConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ItemRarityConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMRARITYCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
