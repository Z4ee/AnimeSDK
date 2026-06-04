#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FinishWayRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_FINISHWAYEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19722B20)
#define RPG_GAMECORE_FINISHWAYEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x197229B0)
#define RPG_GAMECORE_FINISHWAYEXCELTABLE_GETMISSIONIDBYSTRPARAM_OFFSET UNITYSDK_OFFSET(0x19723230)
#define RPG_GAMECORE_FINISHWAYEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x197226A0)
#define RPG_GAMECORE_FINISHWAYEXCELTABLE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x19723410)
#define RPG_GAMECORE_FINISHWAYEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19722950)
#define RPG_GAMECORE_FINISHWAYEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19722C70)
#define RPG_GAMECORE_FINISHWAYEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19722720)
#define RPG_GAMECORE_FINISHWAYEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x197231F0)
#define RPG_GAMECORE_FINISHWAYEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19722CB0)
#define RPG_GAMECORE_FINISHWAYEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19722E80)
#define RPG_GAMECORE_FINISHWAYEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19722ED0)
#define RPG_GAMECORE_FINISHWAYEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19723890)
#define RPG_GAMECORE_FINISHWAYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19722DE0)
#define RPG_GAMECORE_FINISHWAYEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19722D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FinishWayExcelTable_TypeDefinitionIndex = 13846;

	class FinishWayExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FinishWayExcelTable_TypeDefinitionIndex)->GetStaticField(0x170D0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(FinishWayExcelTable_TypeDefinitionIndex)->GetStaticField(0x170D8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>** StaticGet__cahceDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(FinishWayExcelTable_TypeDefinitionIndex)->GetStaticField(0x170E0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FinishWayRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FinishWayRow*>**)Il2CppClass::FromTypeDefinitionIndex(FinishWayExcelTable_TypeDefinitionIndex)->GetStaticField(0x170E8);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(FinishWayExcelTable_TypeDefinitionIndex)->GetStaticField(0x8120);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FinishWayExcelTable_TypeDefinitionIndex)->GetStaticField(0x8121);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHWAYEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FinishWayRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FinishWayRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHWAYEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHWAYEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FinishWayRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FinishWayRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHWAYEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::FinishWayRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::FinishWayRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHWAYEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHWAYEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHWAYEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHWAYEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHWAYEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHWAYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHWAYEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::FinishWayRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::FinishWayRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHWAYEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHWAYEXCELTABLE_UNLOADALL_OFFSET))();
		}

		static ::System::UInt32 GetMissionIDByStrParam(::System::String* a1)
		{
			return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHWAYEXCELTABLE_GETMISSIONIDBYSTRPARAM_OFFSET))(a1);
		}

		static ::System::Void Initialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHWAYEXCELTABLE_INITIALIZE_OFFSET))();
		}
	};
}
