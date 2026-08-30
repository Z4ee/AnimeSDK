#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityEvolveBuildGearRow; }
namespace RPG::GameCore { class EvolveGearConfig; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEAREXCELTABLE_GETCONSTWEIGHT_OFFSET UNITYSDK_OFFSET(0x1C9FA080)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEAREXCELTABLE_GETDATA_1_OFFSET UNITYSDK_OFFSET(0x1C9FA5E0)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEAREXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1C9F95B0)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEAREXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C9F9440)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEAREXCELTABLE_GETMAXLEVELOFGEAR_OFFSET UNITYSDK_OFFSET(0x1C9FA030)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEAREXCELTABLE_GETSCCONSTWEIGHT_OFFSET UNITYSDK_OFFSET(0x1C9FA310)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEAREXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1C9F9130)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEAREXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1C9F93E0)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEAREXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1C9F9780)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEAREXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1C9F91B0)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEAREXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x1C9FA5A0)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEAREXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1C9F97C0)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEAREXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C9F9990)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEAREXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1C9F9C90)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEAREXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C9FA620)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEAREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1C9F98F0)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEAREXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1C9F9850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityEvolveBuildGearExcelTable_TypeDefinitionIndex = 11385;

	class ActivityEvolveBuildGearExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityEvolveBuildGearRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityEvolveBuildGearRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityEvolveBuildGearExcelTable_TypeDefinitionIndex)->GetStaticField(0x7870);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet__ConstWeight()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityEvolveBuildGearExcelTable_TypeDefinitionIndex)->GetStaticField(0x7878);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityEvolveBuildGearExcelTable_TypeDefinitionIndex)->GetStaticField(0x7880);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityEvolveBuildGearExcelTable_TypeDefinitionIndex)->GetStaticField(0x7888);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet__SCConstWeight()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityEvolveBuildGearExcelTable_TypeDefinitionIndex)->GetStaticField(0x7890);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ActivityEvolveBuildGearExcelTable_TypeDefinitionIndex)->GetStaticField(0x2090);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActivityEvolveBuildGearExcelTable_TypeDefinitionIndex)->GetStaticField(0x2091);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEAREXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityEvolveBuildGearRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityEvolveBuildGearRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEAREXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEAREXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityEvolveBuildGearRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityEvolveBuildGearRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEAREXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ActivityEvolveBuildGearRow* GetData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::ActivityEvolveBuildGearRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEAREXCELTABLE_GETDATA_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEAREXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEAREXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEAREXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEAREXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEAREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEAREXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActivityEvolveBuildGearRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityEvolveBuildGearRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEAREXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::UInt32 GetMaxLevelOfGear(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEAREXCELTABLE_GETMAXLEVELOFGEAR_OFFSET))(a1);
		}

		static ::System::Int32 GetConstWeight(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEAREXCELTABLE_GETCONSTWEIGHT_OFFSET))(a1);
		}

		static ::System::Int32 GetSCConstWeight(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEAREXCELTABLE_GETSCCONSTWEIGHT_OFFSET))(a1);
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEAREXCELTABLE_UNLOADALL_OFFSET))();
		}

		static ::RPG::GameCore::ActivityEvolveBuildGearRow* GetData_1(::RPG::GameCore::EvolveGearConfig* a1)
		{
			return ((::RPG::GameCore::ActivityEvolveBuildGearRow*(*)(::RPG::GameCore::EvolveGearConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEAREXCELTABLE_GETDATA_1_OFFSET))(a1);
		}
	};
}
