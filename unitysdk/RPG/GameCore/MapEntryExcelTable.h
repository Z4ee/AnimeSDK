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

#define RPG_GAMECORE_MAPENTRYEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1BCDEF20)
#define RPG_GAMECORE_MAPENTRYEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1BCDEDF0)
#define RPG_GAMECORE_MAPENTRYEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1BCDEAE0)
#define RPG_GAMECORE_MAPENTRYEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1BCDED90)
#define RPG_GAMECORE_MAPENTRYEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1BCDF070)
#define RPG_GAMECORE_MAPENTRYEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1BCDEB60)
#define RPG_GAMECORE_MAPENTRYEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1BCDF0B0)
#define RPG_GAMECORE_MAPENTRYEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BCDF280)
#define RPG_GAMECORE_MAPENTRYEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1BCDF5E0)
#define RPG_GAMECORE_MAPENTRYEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BCDF900)
#define RPG_GAMECORE_MAPENTRYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1BCDF1E0)
#define RPG_GAMECORE_MAPENTRYEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1BCDF140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapEntryExcelTable_TypeDefinitionIndex = 13535;

	class MapEntryExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MapEntryExcelTable_TypeDefinitionIndex)->GetStaticField(0x3DBD0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MapEntryExcelTable_TypeDefinitionIndex)->GetStaticField(0x3DBD8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapEntryRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapEntryRow*>**)Il2CppClass::FromTypeDefinitionIndex(MapEntryExcelTable_TypeDefinitionIndex)->GetStaticField(0x3DBE0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MapEntryExcelTable_TypeDefinitionIndex)->GetStaticField(0xA430);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MapEntryExcelTable_TypeDefinitionIndex)->GetStaticField(0xA431);
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

		static ::RPG::GameCore::MapEntryRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MapEntryRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYEXCELTABLE_GETDATA_OFFSET))(a1);
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

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MapEntryRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MapEntryRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
