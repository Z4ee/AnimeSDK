#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityNewbiePromoteRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16F02590)
#define RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16F02410)
#define RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x16F020E0)
#define RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16F023B0)
#define RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16F02760)
#define RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16F02160)
#define RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16F027A0)
#define RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F02980)
#define RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16F02BF0)
#define RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F02F00)
#define RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16F028E0)
#define RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16F02840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityNewbiePromoteExcelTable_TypeDefinitionIndex = 10505;

	class ActivityNewbiePromoteExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityNewbiePromoteExcelTable_TypeDefinitionIndex)->GetStaticField(0x1AB60);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityNewbiePromoteRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityNewbiePromoteRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityNewbiePromoteExcelTable_TypeDefinitionIndex)->GetStaticField(0x1AB68);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityNewbiePromoteExcelTable_TypeDefinitionIndex)->GetStaticField(0x1AB70);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActivityNewbiePromoteExcelTable_TypeDefinitionIndex)->GetStaticField(0x7820);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ActivityNewbiePromoteExcelTable_TypeDefinitionIndex)->GetStaticField(0x7821);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityNewbiePromoteRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityNewbiePromoteRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityNewbiePromoteRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityNewbiePromoteRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ActivityNewbiePromoteRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::ActivityNewbiePromoteRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActivityNewbiePromoteRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityNewbiePromoteRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
