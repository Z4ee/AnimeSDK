#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityFeverTimeUnderlineRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16EF7940)
#define RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16EF7790)
#define RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x16EF7460)
#define RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16EF7730)
#define RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16EF7B10)
#define RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16EF74E0)
#define RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16EF7B50)
#define RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16EF7D30)
#define RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16EF7EA0)
#define RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16EF8200)
#define RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16EF7C90)
#define RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16EF7BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityFeverTimeUnderlineExcelTable_TypeDefinitionIndex = 10792;

	class ActivityFeverTimeUnderlineExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityFeverTimeUnderlineExcelTable_TypeDefinitionIndex)->GetStaticField(0x1A800);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFeverTimeUnderlineRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFeverTimeUnderlineRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityFeverTimeUnderlineExcelTable_TypeDefinitionIndex)->GetStaticField(0x1A808);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityFeverTimeUnderlineExcelTable_TypeDefinitionIndex)->GetStaticField(0x1A810);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActivityFeverTimeUnderlineExcelTable_TypeDefinitionIndex)->GetStaticField(0x76B0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ActivityFeverTimeUnderlineExcelTable_TypeDefinitionIndex)->GetStaticField(0x76B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFeverTimeUnderlineRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFeverTimeUnderlineRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFeverTimeUnderlineRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFeverTimeUnderlineRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ActivityFeverTimeUnderlineRow* GetData(::System::UInt32 AvailableBuffID)
		{
			return ((::RPG::GameCore::ActivityFeverTimeUnderlineRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE_GETDATA_OFFSET))(AvailableBuffID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActivityFeverTimeUnderlineRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityFeverTimeUnderlineRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
