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

#define RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1AAF1690)
#define RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1AAF1520)
#define RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1AAF1210)
#define RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1AAF14C0)
#define RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1AAF1820)
#define RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1AAF1290)
#define RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1AAF1860)
#define RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AAF1A30)
#define RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1AAF1BA0)
#define RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AAF1F10)
#define RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1AAF1990)
#define RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1AAF18F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityFeverTimeUnderlineExcelTable_TypeDefinitionIndex = 11189;

	class ActivityFeverTimeUnderlineExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityFeverTimeUnderlineExcelTable_TypeDefinitionIndex)->GetStaticField(0x1A690);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityFeverTimeUnderlineExcelTable_TypeDefinitionIndex)->GetStaticField(0x1A698);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFeverTimeUnderlineRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFeverTimeUnderlineRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityFeverTimeUnderlineExcelTable_TypeDefinitionIndex)->GetStaticField(0x1A6A0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActivityFeverTimeUnderlineExcelTable_TypeDefinitionIndex)->GetStaticField(0x61C0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ActivityFeverTimeUnderlineExcelTable_TypeDefinitionIndex)->GetStaticField(0x61C1);
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

		static ::RPG::GameCore::ActivityFeverTimeUnderlineRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityFeverTimeUnderlineRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE_GETDATA_OFFSET))(a1);
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

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActivityFeverTimeUnderlineRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityFeverTimeUnderlineRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
