#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MissionGotoConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MISSIONGOTOCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18B2DB60)
#define RPG_GAMECORE_MISSIONGOTOCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18B2D9B0)
#define RPG_GAMECORE_MISSIONGOTOCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18B2D680)
#define RPG_GAMECORE_MISSIONGOTOCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18B2D950)
#define RPG_GAMECORE_MISSIONGOTOCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18B2DCE0)
#define RPG_GAMECORE_MISSIONGOTOCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18B2D700)
#define RPG_GAMECORE_MISSIONGOTOCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18B2DD20)
#define RPG_GAMECORE_MISSIONGOTOCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18B2DF00)
#define RPG_GAMECORE_MISSIONGOTOCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18B2E0B0)
#define RPG_GAMECORE_MISSIONGOTOCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B2E3C0)
#define RPG_GAMECORE_MISSIONGOTOCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18B2DE60)
#define RPG_GAMECORE_MISSIONGOTOCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18B2DDC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionGotoConfigExcelTable_TypeDefinitionIndex = 13418;

	class MissionGotoConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MissionGotoConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x3D920);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MissionGotoConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x3D928);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MissionGotoConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MissionGotoConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(MissionGotoConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x3D930);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MissionGotoConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xDB00);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MissionGotoConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xDB01);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONGOTOCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MissionGotoConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MissionGotoConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONGOTOCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONGOTOCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MissionGotoConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MissionGotoConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONGOTOCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MissionGotoConfigRow* GetData(::System::UInt32 GotoID)
		{
			return ((::RPG::GameCore::MissionGotoConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONGOTOCONFIGEXCELTABLE_GETDATA_OFFSET))(GotoID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONGOTOCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONGOTOCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONGOTOCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONGOTOCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONGOTOCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONGOTOCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MissionGotoConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MissionGotoConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONGOTOCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
