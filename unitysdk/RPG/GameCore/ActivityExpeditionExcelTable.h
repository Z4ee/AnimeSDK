#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActivityExpeditionRank.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityExpeditionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1C9FD0E0)
#define RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C9FCF70)
#define RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE_GETEXPEDITIONIDSBYRANK_OFFSET UNITYSDK_OFFSET(0x1C9FDD90)
#define RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1C9FCC60)
#define RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1C9FCF10)
#define RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1C9FD270)
#define RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1C9FCCE0)
#define RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x1C9FE400)
#define RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1C9FD2B0)
#define RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C9FD480)
#define RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1C9FDA20)
#define RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C9FE490)
#define RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1C9FD3E0)
#define RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1C9FD340)
#define RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE__SAFEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C9FDE30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityExpeditionExcelTable_TypeDefinitionIndex = 11444;

	class ActivityExpeditionExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityExpeditionExcelTable_TypeDefinitionIndex)->GetStaticField(0x41730);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityExpeditionExcelTable_TypeDefinitionIndex)->GetStaticField(0x41738);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ActivityExpeditionRank, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet__RankExpeditionIDs()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ActivityExpeditionRank, ::System::Collections::Generic::List_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityExpeditionExcelTable_TypeDefinitionIndex)->GetStaticField(0x41740);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityExpeditionRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityExpeditionRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityExpeditionExcelTable_TypeDefinitionIndex)->GetStaticField(0x41748);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ActivityExpeditionExcelTable_TypeDefinitionIndex)->GetStaticField(0xFEF0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActivityExpeditionExcelTable_TypeDefinitionIndex)->GetStaticField(0xFEF1);
		}
		static ::System::Boolean* StaticGet__IsInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActivityExpeditionExcelTable_TypeDefinitionIndex)->GetStaticField(0xFEF2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityExpeditionRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityExpeditionRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityExpeditionRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityExpeditionRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ActivityExpeditionRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityExpeditionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActivityExpeditionRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityExpeditionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetExpeditionIDsByRank(::RPG::GameCore::ActivityExpeditionRank a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::RPG::GameCore::ActivityExpeditionRank))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE_GETEXPEDITIONIDSBYRANK_OFFSET))(a1);
		}

		static ::System::Void _SafeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE__SAFEINITIALIZE_OFFSET))();
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE_UNLOADALL_OFFSET))();
		}
	};
}
