#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemComposeTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ITEMCOMPOSETYPEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x172C7080)
#define RPG_GAMECORE_ITEMCOMPOSETYPEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x172C6F00)
#define RPG_GAMECORE_ITEMCOMPOSETYPEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x172C6BD0)
#define RPG_GAMECORE_ITEMCOMPOSETYPEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x172C6EA0)
#define RPG_GAMECORE_ITEMCOMPOSETYPEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x172C7200)
#define RPG_GAMECORE_ITEMCOMPOSETYPEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x172C6C50)
#define RPG_GAMECORE_ITEMCOMPOSETYPEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x172C7240)
#define RPG_GAMECORE_ITEMCOMPOSETYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x172C7420)
#define RPG_GAMECORE_ITEMCOMPOSETYPEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x172C7730)
#define RPG_GAMECORE_ITEMCOMPOSETYPEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x172C7A40)
#define RPG_GAMECORE_ITEMCOMPOSETYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x172C7380)
#define RPG_GAMECORE_ITEMCOMPOSETYPEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x172C72E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemComposeTypeExcelTable_TypeDefinitionIndex = 12647;

	class ItemComposeTypeExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemComposeTypeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemComposeTypeRow*>**)Il2CppClass::FromTypeDefinitionIndex(ItemComposeTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x24520);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ItemComposeTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x24528);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ItemComposeTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x24530);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ItemComposeTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x9B00);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ItemComposeTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x9B01);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSETYPEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemComposeTypeRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemComposeTypeRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSETYPEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSETYPEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemComposeTypeRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemComposeTypeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSETYPEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ItemComposeTypeRow* GetData(::System::UInt32 TypeID)
		{
			return ((::RPG::GameCore::ItemComposeTypeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSETYPEEXCELTABLE_GETDATA_OFFSET))(TypeID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSETYPEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSETYPEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSETYPEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSETYPEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSETYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSETYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ItemComposeTypeRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ItemComposeTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSETYPEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
