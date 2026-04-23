#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MapEntryRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MAPENTRYEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18A88900)
#define RPG_GAMECORE_MAPENTRYEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18A88780)
#define RPG_GAMECORE_MAPENTRYEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18A88450)
#define RPG_GAMECORE_MAPENTRYEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18A88720)
#define RPG_GAMECORE_MAPENTRYEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18A88A80)
#define RPG_GAMECORE_MAPENTRYEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18A884D0)
#define RPG_GAMECORE_MAPENTRYEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18A88AC0)
#define RPG_GAMECORE_MAPENTRYEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A88CA0)
#define RPG_GAMECORE_MAPENTRYEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18A89010)
#define RPG_GAMECORE_MAPENTRYEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A89320)
#define RPG_GAMECORE_MAPENTRYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18A88C00)
#define RPG_GAMECORE_MAPENTRYEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18A88B60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapEntryExcelTable_TypeDefinitionIndex = 13312;

	class MapEntryExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapEntryRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapEntryRow*>**)Il2CppClass::FromTypeDefinitionIndex(MapEntryExcelTable_TypeDefinitionIndex)->GetStaticField(0x33390);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MapEntryExcelTable_TypeDefinitionIndex)->GetStaticField(0x33398);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MapEntryExcelTable_TypeDefinitionIndex)->GetStaticField(0x333A0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MapEntryExcelTable_TypeDefinitionIndex)->GetStaticField(0xC750);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MapEntryExcelTable_TypeDefinitionIndex)->GetStaticField(0xC751);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapEntryRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapEntryRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapEntryRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapEntryRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MapEntryRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::MapEntryRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MapEntryRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MapEntryRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
