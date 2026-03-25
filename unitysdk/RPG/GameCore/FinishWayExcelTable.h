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

#define RPG_GAMECORE_FINISHWAYEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x171D8B80)
#define RPG_GAMECORE_FINISHWAYEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x171D89D0)
#define RPG_GAMECORE_FINISHWAYEXCELTABLE_GETMISSIONIDBYSTRPARAM_OFFSET UNITYSDK_OFFSET(0x171D9750)
#define RPG_GAMECORE_FINISHWAYEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x171D86A0)
#define RPG_GAMECORE_FINISHWAYEXCELTABLE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x171D98D0)
#define RPG_GAMECORE_FINISHWAYEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x171D8970)
#define RPG_GAMECORE_FINISHWAYEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x171D8D00)
#define RPG_GAMECORE_FINISHWAYEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x171D8720)
#define RPG_GAMECORE_FINISHWAYEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x171D9710)
#define RPG_GAMECORE_FINISHWAYEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x171D8D40)
#define RPG_GAMECORE_FINISHWAYEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x171D8F20)
#define RPG_GAMECORE_FINISHWAYEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x171D9400)
#define RPG_GAMECORE_FINISHWAYEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x171D9D70)
#define RPG_GAMECORE_FINISHWAYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x171D8E80)
#define RPG_GAMECORE_FINISHWAYEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x171D8DE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FinishWayExcelTable_TypeDefinitionIndex = 13304;

	class FinishWayExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>** StaticGet__cahceDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(FinishWayExcelTable_TypeDefinitionIndex)->GetStaticField(0x2F170);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FinishWayRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FinishWayRow*>**)Il2CppClass::FromTypeDefinitionIndex(FinishWayExcelTable_TypeDefinitionIndex)->GetStaticField(0x2F178);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FinishWayExcelTable_TypeDefinitionIndex)->GetStaticField(0x2F180);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(FinishWayExcelTable_TypeDefinitionIndex)->GetStaticField(0x2F188);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(FinishWayExcelTable_TypeDefinitionIndex)->GetStaticField(0xF3E0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FinishWayExcelTable_TypeDefinitionIndex)->GetStaticField(0xF3E1);
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

		static ::RPG::GameCore::FinishWayRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::FinishWayRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHWAYEXCELTABLE_GETDATA_OFFSET))(ID);
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

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHWAYEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHWAYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHWAYEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::FinishWayRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::FinishWayRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHWAYEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHWAYEXCELTABLE_UNLOADALL_OFFSET))();
		}

		static ::System::UInt32 GetMissionIDByStrParam(::System::String* strParam)
		{
			return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHWAYEXCELTABLE_GETMISSIONIDBYSTRPARAM_OFFSET))(strParam);
		}

		static ::System::Void Initialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHWAYEXCELTABLE_INITIALIZE_OFFSET))();
		}
	};
}
