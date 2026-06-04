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

#define RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x198BCF40)
#define RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x198BCDD0)
#define RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x198BCAC0)
#define RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x198BCD70)
#define RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x198BD0D0)
#define RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x198BCB40)
#define RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x198BD110)
#define RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x198BD2E0)
#define RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x198BD530)
#define RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x198BD8A0)
#define RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x198BD240)
#define RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x198BD1A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapEntryGroupExcelTable_TypeDefinitionIndex = 13389;

	class MapEntryGroupExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MapEntryGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x1B190);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapEntryGroupRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapEntryGroupRow*>**)Il2CppClass::FromTypeDefinitionIndex(MapEntryGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x1B198);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MapEntryGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x1B1A0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MapEntryGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x8A90);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MapEntryGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x8A91);
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

		static ::RPG::GameCore::MapEntryGroupRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MapEntryGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE_GETDATA_OFFSET))(a1);
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

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MapEntryGroupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MapEntryGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
