#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityFindTrotterConstValueRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIVITYFINDTROTTERCONSTVALUEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1861C370)
#define RPG_GAMECORE_ACTIVITYFINDTROTTERCONSTVALUEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1861C1C0)
#define RPG_GAMECORE_ACTIVITYFINDTROTTERCONSTVALUEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1861BE90)
#define RPG_GAMECORE_ACTIVITYFINDTROTTERCONSTVALUEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1861C160)
#define RPG_GAMECORE_ACTIVITYFINDTROTTERCONSTVALUEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1861C520)
#define RPG_GAMECORE_ACTIVITYFINDTROTTERCONSTVALUEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1861BF10)
#define RPG_GAMECORE_ACTIVITYFINDTROTTERCONSTVALUEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1861C560)
#define RPG_GAMECORE_ACTIVITYFINDTROTTERCONSTVALUEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1861C740)
#define RPG_GAMECORE_ACTIVITYFINDTROTTERCONSTVALUEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1861C8A0)
#define RPG_GAMECORE_ACTIVITYFINDTROTTERCONSTVALUEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1861CBB0)
#define RPG_GAMECORE_ACTIVITYFINDTROTTERCONSTVALUEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1861C6A0)
#define RPG_GAMECORE_ACTIVITYFINDTROTTERCONSTVALUEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1861C600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityFindTrotterConstValueExcelTable_TypeDefinitionIndex = 11054;

	class ActivityFindTrotterConstValueExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityFindTrotterConstValueExcelTable_TypeDefinitionIndex)->GetStaticField(0x7EA0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFindTrotterConstValueRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFindTrotterConstValueRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityFindTrotterConstValueExcelTable_TypeDefinitionIndex)->GetStaticField(0x7EA8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityFindTrotterConstValueExcelTable_TypeDefinitionIndex)->GetStaticField(0x7EB0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActivityFindTrotterConstValueExcelTable_TypeDefinitionIndex)->GetStaticField(0x3680);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ActivityFindTrotterConstValueExcelTable_TypeDefinitionIndex)->GetStaticField(0x3681);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFINDTROTTERCONSTVALUEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFindTrotterConstValueRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFindTrotterConstValueRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFINDTROTTERCONSTVALUEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFINDTROTTERCONSTVALUEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFindTrotterConstValueRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFindTrotterConstValueRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFINDTROTTERCONSTVALUEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ActivityFindTrotterConstValueRow* GetData(::System::String* ConstValueName)
		{
			return ((::RPG::GameCore::ActivityFindTrotterConstValueRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFINDTROTTERCONSTVALUEEXCELTABLE_GETDATA_OFFSET))(ConstValueName);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFINDTROTTERCONSTVALUEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFINDTROTTERCONSTVALUEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFINDTROTTERCONSTVALUEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFINDTROTTERCONSTVALUEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFINDTROTTERCONSTVALUEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFINDTROTTERCONSTVALUEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActivityFindTrotterConstValueRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityFindTrotterConstValueRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFINDTROTTERCONSTVALUEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
