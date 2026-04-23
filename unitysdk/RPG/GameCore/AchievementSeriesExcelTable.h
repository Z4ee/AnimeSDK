#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AchievementSeriesRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACHIEVEMENTSERIESEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x185F7950)
#define RPG_GAMECORE_ACHIEVEMENTSERIESEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x185F77A0)
#define RPG_GAMECORE_ACHIEVEMENTSERIESEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x185F7470)
#define RPG_GAMECORE_ACHIEVEMENTSERIESEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x185F7740)
#define RPG_GAMECORE_ACHIEVEMENTSERIESEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x185F7AD0)
#define RPG_GAMECORE_ACHIEVEMENTSERIESEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x185F74F0)
#define RPG_GAMECORE_ACHIEVEMENTSERIESEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x185F7B10)
#define RPG_GAMECORE_ACHIEVEMENTSERIESEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x185F7CF0)
#define RPG_GAMECORE_ACHIEVEMENTSERIESEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x185F80C0)
#define RPG_GAMECORE_ACHIEVEMENTSERIESEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x185F83D0)
#define RPG_GAMECORE_ACHIEVEMENTSERIESEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x185F7C50)
#define RPG_GAMECORE_ACHIEVEMENTSERIESEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x185F7BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AchievementSeriesExcelTable_TypeDefinitionIndex = 10446;

	class AchievementSeriesExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AchievementSeriesRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AchievementSeriesRow*>**)Il2CppClass::FromTypeDefinitionIndex(AchievementSeriesExcelTable_TypeDefinitionIndex)->GetStaticField(0x5E30);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AchievementSeriesExcelTable_TypeDefinitionIndex)->GetStaticField(0x5E38);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AchievementSeriesExcelTable_TypeDefinitionIndex)->GetStaticField(0x5E40);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AchievementSeriesExcelTable_TypeDefinitionIndex)->GetStaticField(0x2D90);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AchievementSeriesExcelTable_TypeDefinitionIndex)->GetStaticField(0x2D91);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTSERIESEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AchievementSeriesRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AchievementSeriesRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTSERIESEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTSERIESEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AchievementSeriesRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AchievementSeriesRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTSERIESEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AchievementSeriesRow* GetData(::System::UInt32 SeriesID)
		{
			return ((::RPG::GameCore::AchievementSeriesRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTSERIESEXCELTABLE_GETDATA_OFFSET))(SeriesID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTSERIESEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTSERIESEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTSERIESEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTSERIESEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTSERIESEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTSERIESEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AchievementSeriesRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::AchievementSeriesRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTSERIESEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
