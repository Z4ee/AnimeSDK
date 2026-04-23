#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityStartHintConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIVITYSTARTHINTCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x186366B0)
#define RPG_GAMECORE_ACTIVITYSTARTHINTCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18636530)
#define RPG_GAMECORE_ACTIVITYSTARTHINTCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18636200)
#define RPG_GAMECORE_ACTIVITYSTARTHINTCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x186364D0)
#define RPG_GAMECORE_ACTIVITYSTARTHINTCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18636880)
#define RPG_GAMECORE_ACTIVITYSTARTHINTCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18636280)
#define RPG_GAMECORE_ACTIVITYSTARTHINTCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x186368C0)
#define RPG_GAMECORE_ACTIVITYSTARTHINTCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18636AA0)
#define RPG_GAMECORE_ACTIVITYSTARTHINTCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18636CD0)
#define RPG_GAMECORE_ACTIVITYSTARTHINTCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18636FE0)
#define RPG_GAMECORE_ACTIVITYSTARTHINTCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18636A00)
#define RPG_GAMECORE_ACTIVITYSTARTHINTCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18636960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityStartHintConfigExcelTable_TypeDefinitionIndex = 10713;

	class ActivityStartHintConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityStartHintConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x6210);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityStartHintConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityStartHintConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityStartHintConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x6218);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityStartHintConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x6220);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActivityStartHintConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2EF0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ActivityStartHintConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2EF1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYSTARTHINTCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityStartHintConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityStartHintConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYSTARTHINTCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYSTARTHINTCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityStartHintConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityStartHintConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYSTARTHINTCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ActivityStartHintConfigRow* GetData(::System::UInt32 ActivityStartHintID)
		{
			return ((::RPG::GameCore::ActivityStartHintConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYSTARTHINTCONFIGEXCELTABLE_GETDATA_OFFSET))(ActivityStartHintID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYSTARTHINTCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYSTARTHINTCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYSTARTHINTCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYSTARTHINTCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYSTARTHINTCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYSTARTHINTCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActivityStartHintConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityStartHintConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYSTARTHINTCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
