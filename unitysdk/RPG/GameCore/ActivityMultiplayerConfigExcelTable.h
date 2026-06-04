#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityMultiplayerConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIVITYMULTIPLAYERCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x193F2550)
#define RPG_GAMECORE_ACTIVITYMULTIPLAYERCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x193F2420)
#define RPG_GAMECORE_ACTIVITYMULTIPLAYERCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x193F2110)
#define RPG_GAMECORE_ACTIVITYMULTIPLAYERCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x193F23C0)
#define RPG_GAMECORE_ACTIVITYMULTIPLAYERCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x193F26E0)
#define RPG_GAMECORE_ACTIVITYMULTIPLAYERCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x193F2190)
#define RPG_GAMECORE_ACTIVITYMULTIPLAYERCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x193F2720)
#define RPG_GAMECORE_ACTIVITYMULTIPLAYERCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x193F28F0)
#define RPG_GAMECORE_ACTIVITYMULTIPLAYERCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x193F2C30)
#define RPG_GAMECORE_ACTIVITYMULTIPLAYERCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x193F2F50)
#define RPG_GAMECORE_ACTIVITYMULTIPLAYERCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x193F2850)
#define RPG_GAMECORE_ACTIVITYMULTIPLAYERCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x193F27B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityMultiplayerConfigExcelTable_TypeDefinitionIndex = 10781;

	class ActivityMultiplayerConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityMultiplayerConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x5B530);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityMultiplayerConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityMultiplayerConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityMultiplayerConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x5B538);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityMultiplayerConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x5B540);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ActivityMultiplayerConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x11DB0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActivityMultiplayerConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x11DB1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYMULTIPLAYERCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityMultiplayerConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityMultiplayerConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYMULTIPLAYERCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYMULTIPLAYERCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityMultiplayerConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityMultiplayerConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYMULTIPLAYERCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ActivityMultiplayerConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityMultiplayerConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYMULTIPLAYERCONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYMULTIPLAYERCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYMULTIPLAYERCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYMULTIPLAYERCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYMULTIPLAYERCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYMULTIPLAYERCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYMULTIPLAYERCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActivityMultiplayerConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityMultiplayerConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYMULTIPLAYERCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
