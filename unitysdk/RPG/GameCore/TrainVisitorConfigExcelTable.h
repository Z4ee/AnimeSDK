#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TrainVisitorConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE_GETCONDITIONMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x178B2C20)
#define RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x178B1BD0)
#define RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x178B1A50)
#define RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE_GETLOCKVISITORIDS_OFFSET UNITYSDK_OFFSET(0x178B2BB0)
#define RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE_GETUNLOCKVISITORIDS_OFFSET UNITYSDK_OFFSET(0x178B2670)
#define RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x178B1720)
#define RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x178B19F0)
#define RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x178B1D50)
#define RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x178B17A0)
#define RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x178B2C60)
#define RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x178B1D90)
#define RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x178B1F70)
#define RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x178B2360)
#define RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x178B2ED0)
#define RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x178B1ED0)
#define RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x178B1E30)
#define RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE__SAFEADDTODICTIONARY_OFFSET UNITYSDK_OFFSET(0x178B2D70)
#define RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE__SAFEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x178B26E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainVisitorConfigExcelTable_TypeDefinitionIndex = 14101;

	class TrainVisitorConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainVisitorConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainVisitorConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(TrainVisitorConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x1DA70);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(TrainVisitorConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x1DA78);
		}
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet__MissionIDs()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(TrainVisitorConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x1DA80);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TrainVisitorConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x1DA88);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet__MissionLockVisitors()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(TrainVisitorConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x1DA90);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet__MissionUnlockVisitors()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(TrainVisitorConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x1DA98);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(TrainVisitorConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x7950);
		}
		static ::System::Boolean* StaticGet__IsInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TrainVisitorConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x7951);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TrainVisitorConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x7952);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainVisitorConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainVisitorConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainVisitorConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainVisitorConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::TrainVisitorConfigRow* GetData(::System::UInt32 VisitorID)
		{
			return ((::RPG::GameCore::TrainVisitorConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE_GETDATA_OFFSET))(VisitorID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::TrainVisitorConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::TrainVisitorConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetUnlockVisitorIDs(::System::UInt32 missionID)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE_GETUNLOCKVISITORIDS_OFFSET))(missionID);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetLockVisitorIDs(::System::UInt32 missionID)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE_GETLOCKVISITORIDS_OFFSET))(missionID);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetConditionMissionIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE_GETCONDITIONMISSIONIDS_OFFSET))();
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE_UNLOADALL_OFFSET))();
		}

		static ::System::Void _SafeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE__SAFEINITIALIZE_OFFSET))();
		}

		static ::System::Void _SafeAddToDictionary(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* dictionary, ::System::UInt32 key, ::System::UInt32 value)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINVISITORCONFIGEXCELTABLE__SAFEADDTODICTIONARY_OFFSET))(dictionary, key, value);
		}
	};
}
