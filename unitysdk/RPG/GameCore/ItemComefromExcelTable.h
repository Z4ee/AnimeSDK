#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemComefromRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ITEMCOMEFROMEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x172C2550)
#define RPG_GAMECORE_ITEMCOMEFROMEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x172C23A0)
#define RPG_GAMECORE_ITEMCOMEFROMEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x172C2070)
#define RPG_GAMECORE_ITEMCOMEFROMEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x172C2340)
#define RPG_GAMECORE_ITEMCOMEFROMEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x172C2760)
#define RPG_GAMECORE_ITEMCOMEFROMEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x172C20F0)
#define RPG_GAMECORE_ITEMCOMEFROMEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x172C27A0)
#define RPG_GAMECORE_ITEMCOMEFROMEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x172C2980)
#define RPG_GAMECORE_ITEMCOMEFROMEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x172C2D10)
#define RPG_GAMECORE_ITEMCOMEFROMEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x172C30C0)
#define RPG_GAMECORE_ITEMCOMEFROMEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x172C28E0)
#define RPG_GAMECORE_ITEMCOMEFROMEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x172C2840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemComefromExcelTable_TypeDefinitionIndex = 12672;

	class ItemComefromExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ItemComefromExcelTable_TypeDefinitionIndex)->GetStaticField(0x24380);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemComefromRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemComefromRow*>**)Il2CppClass::FromTypeDefinitionIndex(ItemComefromExcelTable_TypeDefinitionIndex)->GetStaticField(0x24388);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ItemComefromExcelTable_TypeDefinitionIndex)->GetStaticField(0x24390);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ItemComefromExcelTable_TypeDefinitionIndex)->GetStaticField(0x9A50);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ItemComefromExcelTable_TypeDefinitionIndex)->GetStaticField(0x9A51);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMEFROMEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemComefromRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemComefromRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMEFROMEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMEFROMEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemComefromRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemComefromRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMEFROMEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ItemComefromRow* GetData(::System::UInt32 ID, ::System::UInt32 ComefromID)
		{
			return ((::RPG::GameCore::ItemComefromRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMEFROMEXCELTABLE_GETDATA_OFFSET))(ID, ComefromID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMEFROMEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMEFROMEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMEFROMEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMEFROMEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMEFROMEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMEFROMEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ItemComefromRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ItemComefromRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMEFROMEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
