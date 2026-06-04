#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityRaidCollectionInfoRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONINFOEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x193FDEE0)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONINFOEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x193FDDB0)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONINFOEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x193FDAA0)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONINFOEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x193FDD50)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONINFOEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x193FE030)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONINFOEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x193FDB20)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONINFOEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x193FE070)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONINFOEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x193FE240)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONINFOEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x193FE480)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONINFOEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x193FE7A0)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONINFOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x193FE1A0)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONINFOEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x193FE100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityRaidCollectionInfoExcelTable_TypeDefinitionIndex = 11749;

	class ActivityRaidCollectionInfoExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityRaidCollectionInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x2D230);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidCollectionInfoRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidCollectionInfoRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityRaidCollectionInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x2D238);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityRaidCollectionInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x2D240);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActivityRaidCollectionInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x9D20);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ActivityRaidCollectionInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x9D21);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONINFOEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidCollectionInfoRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidCollectionInfoRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONINFOEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONINFOEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidCollectionInfoRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidCollectionInfoRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONINFOEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ActivityRaidCollectionInfoRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityRaidCollectionInfoRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONINFOEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONINFOEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONINFOEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONINFOEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONINFOEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONINFOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONINFOEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActivityRaidCollectionInfoRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityRaidCollectionInfoRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONINFOEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
