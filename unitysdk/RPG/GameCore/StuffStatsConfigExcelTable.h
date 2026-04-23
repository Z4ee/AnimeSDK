#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/StuffStats.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class StuffStatsConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_STUFFSTATSCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18EAC120)
#define RPG_GAMECORE_STUFFSTATSCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18EABF70)
#define RPG_GAMECORE_STUFFSTATSCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18EABC40)
#define RPG_GAMECORE_STUFFSTATSCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18EABF10)
#define RPG_GAMECORE_STUFFSTATSCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18EAC2F0)
#define RPG_GAMECORE_STUFFSTATSCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18EABCC0)
#define RPG_GAMECORE_STUFFSTATSCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18EAC330)
#define RPG_GAMECORE_STUFFSTATSCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18EAC510)
#define RPG_GAMECORE_STUFFSTATSCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18EAC740)
#define RPG_GAMECORE_STUFFSTATSCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18EACAA0)
#define RPG_GAMECORE_STUFFSTATSCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18EAC470)
#define RPG_GAMECORE_STUFFSTATSCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18EAC3D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StuffStatsConfigExcelTable_TypeDefinitionIndex = 13491;

	class StuffStatsConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(StuffStatsConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x54F70);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(StuffStatsConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x54F78);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StuffStatsConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StuffStatsConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(StuffStatsConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x54F80);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(StuffStatsConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x10030);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(StuffStatsConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x10031);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STUFFSTATSCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StuffStatsConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StuffStatsConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STUFFSTATSCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STUFFSTATSCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StuffStatsConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StuffStatsConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STUFFSTATSCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::StuffStatsConfigRow* GetData(::RPG::GameCore::StuffStats StatsID)
		{
			return ((::RPG::GameCore::StuffStatsConfigRow*(*)(::RPG::GameCore::StuffStats))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STUFFSTATSCONFIGEXCELTABLE_GETDATA_OFFSET))(StatsID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STUFFSTATSCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STUFFSTATSCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STUFFSTATSCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STUFFSTATSCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STUFFSTATSCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STUFFSTATSCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::StuffStatsConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::StuffStatsConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STUFFSTATSCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
