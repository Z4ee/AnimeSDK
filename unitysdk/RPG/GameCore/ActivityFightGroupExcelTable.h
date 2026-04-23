#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityFightGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIVITYFIGHTGROUPEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1861ACA0)
#define RPG_GAMECORE_ACTIVITYFIGHTGROUPEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1861AB20)
#define RPG_GAMECORE_ACTIVITYFIGHTGROUPEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1861A7F0)
#define RPG_GAMECORE_ACTIVITYFIGHTGROUPEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1861AAC0)
#define RPG_GAMECORE_ACTIVITYFIGHTGROUPEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1861AE70)
#define RPG_GAMECORE_ACTIVITYFIGHTGROUPEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1861A870)
#define RPG_GAMECORE_ACTIVITYFIGHTGROUPEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1861AEB0)
#define RPG_GAMECORE_ACTIVITYFIGHTGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1861B090)
#define RPG_GAMECORE_ACTIVITYFIGHTGROUPEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1861B4E0)
#define RPG_GAMECORE_ACTIVITYFIGHTGROUPEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1861B7F0)
#define RPG_GAMECORE_ACTIVITYFIGHTGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1861AFF0)
#define RPG_GAMECORE_ACTIVITYFIGHTGROUPEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1861AF50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityFightGroupExcelTable_TypeDefinitionIndex = 11048;

	class ActivityFightGroupExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFightGroupRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFightGroupRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityFightGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x7DE0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityFightGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x7DE8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityFightGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x7DF0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ActivityFightGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x3630);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActivityFightGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x3631);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFIGHTGROUPEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFightGroupRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFightGroupRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFIGHTGROUPEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFIGHTGROUPEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFightGroupRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFightGroupRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFIGHTGROUPEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ActivityFightGroupRow* GetData(::System::UInt32 ActivityFightGroupID)
		{
			return ((::RPG::GameCore::ActivityFightGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFIGHTGROUPEXCELTABLE_GETDATA_OFFSET))(ActivityFightGroupID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFIGHTGROUPEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFIGHTGROUPEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFIGHTGROUPEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFIGHTGROUPEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFIGHTGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFIGHTGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActivityFightGroupRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityFightGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFIGHTGROUPEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
