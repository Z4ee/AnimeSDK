#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/MainMissionSubType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MissionSubTypeConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MISSIONSUBTYPECONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x17423AB0)
#define RPG_GAMECORE_MISSIONSUBTYPECONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17423900)
#define RPG_GAMECORE_MISSIONSUBTYPECONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x174235D0)
#define RPG_GAMECORE_MISSIONSUBTYPECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x174238A0)
#define RPG_GAMECORE_MISSIONSUBTYPECONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x17423C80)
#define RPG_GAMECORE_MISSIONSUBTYPECONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x17423650)
#define RPG_GAMECORE_MISSIONSUBTYPECONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x17423CC0)
#define RPG_GAMECORE_MISSIONSUBTYPECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17423EA0)
#define RPG_GAMECORE_MISSIONSUBTYPECONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x17424070)
#define RPG_GAMECORE_MISSIONSUBTYPECONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x174243D0)
#define RPG_GAMECORE_MISSIONSUBTYPECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x17423E00)
#define RPG_GAMECORE_MISSIONSUBTYPECONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x17423D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionSubTypeConfigExcelTable_TypeDefinitionIndex = 12946;

	class MissionSubTypeConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MissionSubTypeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2B5E0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MissionSubTypeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2B5E8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MissionSubTypeConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MissionSubTypeConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(MissionSubTypeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2B5F0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MissionSubTypeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xE640);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MissionSubTypeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xE641);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONSUBTYPECONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MissionSubTypeConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MissionSubTypeConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONSUBTYPECONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONSUBTYPECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MissionSubTypeConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MissionSubTypeConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONSUBTYPECONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MissionSubTypeConfigRow* GetData(::RPG::GameCore::MainMissionSubType Type)
		{
			return ((::RPG::GameCore::MissionSubTypeConfigRow*(*)(::RPG::GameCore::MainMissionSubType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONSUBTYPECONFIGEXCELTABLE_GETDATA_OFFSET))(Type);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONSUBTYPECONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONSUBTYPECONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONSUBTYPECONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONSUBTYPECONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONSUBTYPECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONSUBTYPECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MissionSubTypeConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MissionSubTypeConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONSUBTYPECONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
