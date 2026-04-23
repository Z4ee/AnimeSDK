#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityConstValueSilverWolfRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18605670)
#define RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x186054C0)
#define RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18605190)
#define RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18605460)
#define RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18605820)
#define RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18605210)
#define RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18605860)
#define RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18605A40)
#define RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18605BA0)
#define RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18605EB0)
#define RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x186059A0)
#define RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18605900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityConstValueSilverWolfExcelTable_TypeDefinitionIndex = 11682;

	class ActivityConstValueSilverWolfExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityConstValueSilverWolfExcelTable_TypeDefinitionIndex)->GetStaticField(0x6B70);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityConstValueSilverWolfRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityConstValueSilverWolfRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityConstValueSilverWolfExcelTable_TypeDefinitionIndex)->GetStaticField(0x6B78);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityConstValueSilverWolfExcelTable_TypeDefinitionIndex)->GetStaticField(0x6B80);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ActivityConstValueSilverWolfExcelTable_TypeDefinitionIndex)->GetStaticField(0x3270);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActivityConstValueSilverWolfExcelTable_TypeDefinitionIndex)->GetStaticField(0x3271);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityConstValueSilverWolfRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityConstValueSilverWolfRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityConstValueSilverWolfRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityConstValueSilverWolfRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ActivityConstValueSilverWolfRow* GetData(::System::String* ConstValueName)
		{
			return ((::RPG::GameCore::ActivityConstValueSilverWolfRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE_GETDATA_OFFSET))(ConstValueName);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActivityConstValueSilverWolfRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityConstValueSilverWolfRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
