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

#define RPG_GAMECORE_ACHIEVEMENTSERIESEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x193C87D0)
#define RPG_GAMECORE_ACHIEVEMENTSERIESEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x193C8660)
#define RPG_GAMECORE_ACHIEVEMENTSERIESEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x193C8350)
#define RPG_GAMECORE_ACHIEVEMENTSERIESEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x193C8600)
#define RPG_GAMECORE_ACHIEVEMENTSERIESEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x193C8920)
#define RPG_GAMECORE_ACHIEVEMENTSERIESEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x193C83D0)
#define RPG_GAMECORE_ACHIEVEMENTSERIESEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x193C8960)
#define RPG_GAMECORE_ACHIEVEMENTSERIESEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x193C8B30)
#define RPG_GAMECORE_ACHIEVEMENTSERIESEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x193C8F00)
#define RPG_GAMECORE_ACHIEVEMENTSERIESEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x193C9220)
#define RPG_GAMECORE_ACHIEVEMENTSERIESEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x193C8A90)
#define RPG_GAMECORE_ACHIEVEMENTSERIESEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x193C89F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AchievementSeriesExcelTable_TypeDefinitionIndex = 10487;

	class AchievementSeriesExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AchievementSeriesExcelTable_TypeDefinitionIndex)->GetStaticField(0x59220);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AchievementSeriesRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AchievementSeriesRow*>**)Il2CppClass::FromTypeDefinitionIndex(AchievementSeriesExcelTable_TypeDefinitionIndex)->GetStaticField(0x59228);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AchievementSeriesExcelTable_TypeDefinitionIndex)->GetStaticField(0x59230);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AchievementSeriesExcelTable_TypeDefinitionIndex)->GetStaticField(0x11B50);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AchievementSeriesExcelTable_TypeDefinitionIndex)->GetStaticField(0x11B51);
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

		static ::RPG::GameCore::AchievementSeriesRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AchievementSeriesRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTSERIESEXCELTABLE_GETDATA_OFFSET))(a1);
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

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTSERIESEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTSERIESEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTSERIESEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AchievementSeriesRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AchievementSeriesRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTSERIESEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
