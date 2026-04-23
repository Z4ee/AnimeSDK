#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemConsumeTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ITEMCONSUMETYPEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18A2A5A0)
#define RPG_GAMECORE_ITEMCONSUMETYPEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18A2A3F0)
#define RPG_GAMECORE_ITEMCONSUMETYPEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18A2A0C0)
#define RPG_GAMECORE_ITEMCONSUMETYPEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18A2A390)
#define RPG_GAMECORE_ITEMCONSUMETYPEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18A2A770)
#define RPG_GAMECORE_ITEMCONSUMETYPEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18A2A140)
#define RPG_GAMECORE_ITEMCONSUMETYPEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18A2A7B0)
#define RPG_GAMECORE_ITEMCONSUMETYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A2A990)
#define RPG_GAMECORE_ITEMCONSUMETYPEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18A2ABB0)
#define RPG_GAMECORE_ITEMCONSUMETYPEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A2AF10)
#define RPG_GAMECORE_ITEMCONSUMETYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18A2A8F0)
#define RPG_GAMECORE_ITEMCONSUMETYPEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18A2A850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemConsumeTypeExcelTable_TypeDefinitionIndex = 13121;

	class ItemConsumeTypeExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ItemConsumeTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x3F220);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ItemConsumeTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x3F228);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemConsumeTypeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemConsumeTypeRow*>**)Il2CppClass::FromTypeDefinitionIndex(ItemConsumeTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x3F230);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ItemConsumeTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0xE230);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ItemConsumeTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0xE231);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCONSUMETYPEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemConsumeTypeRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemConsumeTypeRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCONSUMETYPEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCONSUMETYPEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemConsumeTypeRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemConsumeTypeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCONSUMETYPEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ItemConsumeTypeRow* GetData(::System::UInt32 TypeID)
		{
			return ((::RPG::GameCore::ItemConsumeTypeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCONSUMETYPEEXCELTABLE_GETDATA_OFFSET))(TypeID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCONSUMETYPEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCONSUMETYPEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCONSUMETYPEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCONSUMETYPEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCONSUMETYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCONSUMETYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ItemConsumeTypeRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ItemConsumeTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCONSUMETYPEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
