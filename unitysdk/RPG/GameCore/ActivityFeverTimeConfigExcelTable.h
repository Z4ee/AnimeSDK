#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityFeverTimeConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIVITYFEVERTIMECONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x186155A0)
#define RPG_GAMECORE_ACTIVITYFEVERTIMECONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x186153F0)
#define RPG_GAMECORE_ACTIVITYFEVERTIMECONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x186150C0)
#define RPG_GAMECORE_ACTIVITYFEVERTIMECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18615390)
#define RPG_GAMECORE_ACTIVITYFEVERTIMECONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18615770)
#define RPG_GAMECORE_ACTIVITYFEVERTIMECONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18615140)
#define RPG_GAMECORE_ACTIVITYFEVERTIMECONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x186157B0)
#define RPG_GAMECORE_ACTIVITYFEVERTIMECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18615990)
#define RPG_GAMECORE_ACTIVITYFEVERTIMECONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x186162C0)
#define RPG_GAMECORE_ACTIVITYFEVERTIMECONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18616620)
#define RPG_GAMECORE_ACTIVITYFEVERTIMECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x186158F0)
#define RPG_GAMECORE_ACTIVITYFEVERTIMECONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18615850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityFeverTimeConfigExcelTable_TypeDefinitionIndex = 11035;

	class ActivityFeverTimeConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFeverTimeConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFeverTimeConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityFeverTimeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x7930);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityFeverTimeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x7938);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityFeverTimeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x7940);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActivityFeverTimeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x35A0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ActivityFeverTimeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x35A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMECONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFeverTimeConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFeverTimeConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMECONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFeverTimeConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFeverTimeConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMECONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ActivityFeverTimeConfigRow* GetData(::System::UInt32 FeverTimeID)
		{
			return ((::RPG::GameCore::ActivityFeverTimeConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMECONFIGEXCELTABLE_GETDATA_OFFSET))(FeverTimeID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMECONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMECONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMECONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMECONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActivityFeverTimeConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityFeverTimeConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMECONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
