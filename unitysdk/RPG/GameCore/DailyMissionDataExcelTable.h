#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DailyMissionDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_DAILYMISSIONDATAEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1884D010)
#define RPG_GAMECORE_DAILYMISSIONDATAEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1884CE60)
#define RPG_GAMECORE_DAILYMISSIONDATAEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1884CB30)
#define RPG_GAMECORE_DAILYMISSIONDATAEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1884CE00)
#define RPG_GAMECORE_DAILYMISSIONDATAEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1884D1E0)
#define RPG_GAMECORE_DAILYMISSIONDATAEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1884CBB0)
#define RPG_GAMECORE_DAILYMISSIONDATAEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1884D220)
#define RPG_GAMECORE_DAILYMISSIONDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1884D400)
#define RPG_GAMECORE_DAILYMISSIONDATAEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1884D680)
#define RPG_GAMECORE_DAILYMISSIONDATAEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1884D9E0)
#define RPG_GAMECORE_DAILYMISSIONDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1884D360)
#define RPG_GAMECORE_DAILYMISSIONDATAEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1884D2C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DailyMissionDataExcelTable_TypeDefinitionIndex = 12402;

	class DailyMissionDataExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(DailyMissionDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x16F40);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DailyMissionDataRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DailyMissionDataRow*>**)Il2CppClass::FromTypeDefinitionIndex(DailyMissionDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x16F48);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DailyMissionDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x16F50);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(DailyMissionDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x64D0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DailyMissionDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x64D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAILYMISSIONDATAEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DailyMissionDataRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DailyMissionDataRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAILYMISSIONDATAEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAILYMISSIONDATAEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DailyMissionDataRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DailyMissionDataRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAILYMISSIONDATAEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::DailyMissionDataRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::DailyMissionDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAILYMISSIONDATAEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAILYMISSIONDATAEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAILYMISSIONDATAEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAILYMISSIONDATAEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAILYMISSIONDATAEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAILYMISSIONDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAILYMISSIONDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::DailyMissionDataRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::DailyMissionDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAILYMISSIONDATAEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
