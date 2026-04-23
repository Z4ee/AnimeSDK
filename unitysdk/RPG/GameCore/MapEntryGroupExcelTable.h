#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MapEntryGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18A899A0)
#define RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18A897F0)
#define RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18A894C0)
#define RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18A89790)
#define RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18A89B70)
#define RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18A89540)
#define RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18A89BB0)
#define RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A89D90)
#define RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18A89FE0)
#define RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A8A340)
#define RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18A89CF0)
#define RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18A89C50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapEntryGroupExcelTable_TypeDefinitionIndex = 13314;

	class MapEntryGroupExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapEntryGroupRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapEntryGroupRow*>**)Il2CppClass::FromTypeDefinitionIndex(MapEntryGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x333E0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MapEntryGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x333E8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MapEntryGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x333F0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MapEntryGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0xC760);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MapEntryGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0xC761);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapEntryGroupRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapEntryGroupRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapEntryGroupRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapEntryGroupRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MapEntryGroupRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::MapEntryGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MapEntryGroupRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MapEntryGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
