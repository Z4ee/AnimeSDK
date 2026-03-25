#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemComposeTagRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ITEMCOMPOSETAGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x172C6170)
#define RPG_GAMECORE_ITEMCOMPOSETAGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x172C5FC0)
#define RPG_GAMECORE_ITEMCOMPOSETAGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x172C5C90)
#define RPG_GAMECORE_ITEMCOMPOSETAGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x172C5F60)
#define RPG_GAMECORE_ITEMCOMPOSETAGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x172C6340)
#define RPG_GAMECORE_ITEMCOMPOSETAGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x172C5D10)
#define RPG_GAMECORE_ITEMCOMPOSETAGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x172C6380)
#define RPG_GAMECORE_ITEMCOMPOSETAGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x172C6560)
#define RPG_GAMECORE_ITEMCOMPOSETAGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x172C6720)
#define RPG_GAMECORE_ITEMCOMPOSETAGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x172C6A80)
#define RPG_GAMECORE_ITEMCOMPOSETAGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x172C64C0)
#define RPG_GAMECORE_ITEMCOMPOSETAGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x172C6420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemComposeTagExcelTable_TypeDefinitionIndex = 12649;

	class ItemComposeTagExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ItemComposeTagExcelTable_TypeDefinitionIndex)->GetStaticField(0x244B0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ItemComposeTagExcelTable_TypeDefinitionIndex)->GetStaticField(0x244B8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemComposeTagRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemComposeTagRow*>**)Il2CppClass::FromTypeDefinitionIndex(ItemComposeTagExcelTable_TypeDefinitionIndex)->GetStaticField(0x244C0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ItemComposeTagExcelTable_TypeDefinitionIndex)->GetStaticField(0x9AE0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ItemComposeTagExcelTable_TypeDefinitionIndex)->GetStaticField(0x9AE1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSETAGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemComposeTagRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemComposeTagRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSETAGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSETAGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemComposeTagRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemComposeTagRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSETAGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ItemComposeTagRow* GetData(::System::UInt32 ItemComposeTagID)
		{
			return ((::RPG::GameCore::ItemComposeTagRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSETAGEXCELTABLE_GETDATA_OFFSET))(ItemComposeTagID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSETAGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSETAGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSETAGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSETAGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSETAGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSETAGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ItemComposeTagRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ItemComposeTagRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSETAGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
