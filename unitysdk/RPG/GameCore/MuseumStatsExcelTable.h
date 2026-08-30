#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MuseumStatsRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MUSEUMSTATSEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D2E68C0)
#define RPG_GAMECORE_MUSEUMSTATSEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D2E6750)
#define RPG_GAMECORE_MUSEUMSTATSEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D2E6440)
#define RPG_GAMECORE_MUSEUMSTATSEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D2E66F0)
#define RPG_GAMECORE_MUSEUMSTATSEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D2E6A90)
#define RPG_GAMECORE_MUSEUMSTATSEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D2E64C0)
#define RPG_GAMECORE_MUSEUMSTATSEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D2E6AD0)
#define RPG_GAMECORE_MUSEUMSTATSEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D2E6CA0)
#define RPG_GAMECORE_MUSEUMSTATSEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D2E6EF0)
#define RPG_GAMECORE_MUSEUMSTATSEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2E7270)
#define RPG_GAMECORE_MUSEUMSTATSEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D2E6C00)
#define RPG_GAMECORE_MUSEUMSTATSEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D2E6B60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuseumStatsExcelTable_TypeDefinitionIndex = 14116;

	class MuseumStatsExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MuseumStatsExcelTable_TypeDefinitionIndex)->GetStaticField(0x490D0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumStatsRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumStatsRow*>**)Il2CppClass::FromTypeDefinitionIndex(MuseumStatsExcelTable_TypeDefinitionIndex)->GetStaticField(0x490D8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MuseumStatsExcelTable_TypeDefinitionIndex)->GetStaticField(0x490E0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MuseumStatsExcelTable_TypeDefinitionIndex)->GetStaticField(0x10C70);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MuseumStatsExcelTable_TypeDefinitionIndex)->GetStaticField(0x10C71);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMSTATSEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumStatsRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumStatsRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMSTATSEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMSTATSEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumStatsRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumStatsRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMSTATSEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MuseumStatsRow* GetData(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::GameCore::MuseumStatsRow*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMSTATSEXCELTABLE_GETDATA_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMSTATSEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMSTATSEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMSTATSEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMSTATSEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMSTATSEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMSTATSEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MuseumStatsRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MuseumStatsRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMSTATSEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
