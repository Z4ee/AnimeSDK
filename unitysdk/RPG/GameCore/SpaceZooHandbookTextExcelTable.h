#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SpaceZooHandbookTextRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SPACEZOOHANDBOOKTEXTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18E784E0)
#define RPG_GAMECORE_SPACEZOOHANDBOOKTEXTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18E78330)
#define RPG_GAMECORE_SPACEZOOHANDBOOKTEXTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18E78000)
#define RPG_GAMECORE_SPACEZOOHANDBOOKTEXTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18E782D0)
#define RPG_GAMECORE_SPACEZOOHANDBOOKTEXTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18E786B0)
#define RPG_GAMECORE_SPACEZOOHANDBOOKTEXTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18E78080)
#define RPG_GAMECORE_SPACEZOOHANDBOOKTEXTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18E786F0)
#define RPG_GAMECORE_SPACEZOOHANDBOOKTEXTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18E788D0)
#define RPG_GAMECORE_SPACEZOOHANDBOOKTEXTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18E78AF0)
#define RPG_GAMECORE_SPACEZOOHANDBOOKTEXTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18E78E50)
#define RPG_GAMECORE_SPACEZOOHANDBOOKTEXTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18E78830)
#define RPG_GAMECORE_SPACEZOOHANDBOOKTEXTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18E78790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpaceZooHandbookTextExcelTable_TypeDefinitionIndex = 11713;

	class SpaceZooHandbookTextExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooHandbookTextRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooHandbookTextRow*>**)Il2CppClass::FromTypeDefinitionIndex(SpaceZooHandbookTextExcelTable_TypeDefinitionIndex)->GetStaticField(0x524B0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(SpaceZooHandbookTextExcelTable_TypeDefinitionIndex)->GetStaticField(0x524B8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SpaceZooHandbookTextExcelTable_TypeDefinitionIndex)->GetStaticField(0x524C0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(SpaceZooHandbookTextExcelTable_TypeDefinitionIndex)->GetStaticField(0xFE10);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SpaceZooHandbookTextExcelTable_TypeDefinitionIndex)->GetStaticField(0xFE11);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOHANDBOOKTEXTEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooHandbookTextRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooHandbookTextRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOHANDBOOKTEXTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOHANDBOOKTEXTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooHandbookTextRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooHandbookTextRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOHANDBOOKTEXTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::SpaceZooHandbookTextRow* GetData(::System::UInt32 SpecialCatID)
		{
			return ((::RPG::GameCore::SpaceZooHandbookTextRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOHANDBOOKTEXTEXCELTABLE_GETDATA_OFFSET))(SpecialCatID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOHANDBOOKTEXTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOHANDBOOKTEXTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOHANDBOOKTEXTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOHANDBOOKTEXTEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOHANDBOOKTEXTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOHANDBOOKTEXTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::SpaceZooHandbookTextRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::SpaceZooHandbookTextRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOHANDBOOKTEXTEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
