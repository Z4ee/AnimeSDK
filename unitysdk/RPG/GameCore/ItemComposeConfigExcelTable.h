#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemComposeConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ITEMCOMPOSECONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x172C4D70)
#define RPG_GAMECORE_ITEMCOMPOSECONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x172C4BF0)
#define RPG_GAMECORE_ITEMCOMPOSECONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x172C48C0)
#define RPG_GAMECORE_ITEMCOMPOSECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x172C4B90)
#define RPG_GAMECORE_ITEMCOMPOSECONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x172C4EF0)
#define RPG_GAMECORE_ITEMCOMPOSECONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x172C4940)
#define RPG_GAMECORE_ITEMCOMPOSECONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x172C4F30)
#define RPG_GAMECORE_ITEMCOMPOSECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x172C5110)
#define RPG_GAMECORE_ITEMCOMPOSECONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x172C57F0)
#define RPG_GAMECORE_ITEMCOMPOSECONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x172C5B00)
#define RPG_GAMECORE_ITEMCOMPOSECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x172C5070)
#define RPG_GAMECORE_ITEMCOMPOSECONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x172C4FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemComposeConfigExcelTable_TypeDefinitionIndex = 12645;

	class ItemComposeConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ItemComposeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x24440);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemComposeConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemComposeConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(ItemComposeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x24448);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ItemComposeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x24450);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ItemComposeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x9AD0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ItemComposeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x9AD1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSECONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemComposeConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemComposeConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSECONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemComposeConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemComposeConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSECONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ItemComposeConfigRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::ItemComposeConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSECONFIGEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSECONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSECONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSECONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSECONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ItemComposeConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ItemComposeConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSECONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
