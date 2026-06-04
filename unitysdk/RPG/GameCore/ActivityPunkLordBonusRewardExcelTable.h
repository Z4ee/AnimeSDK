#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityPunkLordBonusRewardRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIVITYPUNKLORDBONUSREWARDEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x193F66B0)
#define RPG_GAMECORE_ACTIVITYPUNKLORDBONUSREWARDEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x193F6540)
#define RPG_GAMECORE_ACTIVITYPUNKLORDBONUSREWARDEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x193F6230)
#define RPG_GAMECORE_ACTIVITYPUNKLORDBONUSREWARDEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x193F64E0)
#define RPG_GAMECORE_ACTIVITYPUNKLORDBONUSREWARDEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x193F6840)
#define RPG_GAMECORE_ACTIVITYPUNKLORDBONUSREWARDEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x193F62B0)
#define RPG_GAMECORE_ACTIVITYPUNKLORDBONUSREWARDEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x193F6880)
#define RPG_GAMECORE_ACTIVITYPUNKLORDBONUSREWARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x193F6A50)
#define RPG_GAMECORE_ACTIVITYPUNKLORDBONUSREWARDEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x193F6C60)
#define RPG_GAMECORE_ACTIVITYPUNKLORDBONUSREWARDEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x193F6FD0)
#define RPG_GAMECORE_ACTIVITYPUNKLORDBONUSREWARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x193F69B0)
#define RPG_GAMECORE_ACTIVITYPUNKLORDBONUSREWARDEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x193F6910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityPunkLordBonusRewardExcelTable_TypeDefinitionIndex = 11724;

	class ActivityPunkLordBonusRewardExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityPunkLordBonusRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x2CC00);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPunkLordBonusRewardRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPunkLordBonusRewardRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityPunkLordBonusRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x2CC08);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityPunkLordBonusRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x2CC10);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ActivityPunkLordBonusRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x9C30);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActivityPunkLordBonusRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x9C31);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPUNKLORDBONUSREWARDEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPunkLordBonusRewardRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPunkLordBonusRewardRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPUNKLORDBONUSREWARDEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPUNKLORDBONUSREWARDEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPunkLordBonusRewardRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPunkLordBonusRewardRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPUNKLORDBONUSREWARDEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ActivityPunkLordBonusRewardRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityPunkLordBonusRewardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPUNKLORDBONUSREWARDEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPUNKLORDBONUSREWARDEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPUNKLORDBONUSREWARDEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPUNKLORDBONUSREWARDEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPUNKLORDBONUSREWARDEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPUNKLORDBONUSREWARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPUNKLORDBONUSREWARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActivityPunkLordBonusRewardRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityPunkLordBonusRewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPUNKLORDBONUSREWARDEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
