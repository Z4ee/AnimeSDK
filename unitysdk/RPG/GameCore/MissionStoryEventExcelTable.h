#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MissionStoryEventRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MISSIONSTORYEVENTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x17422A90)
#define RPG_GAMECORE_MISSIONSTORYEVENTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x174228E0)
#define RPG_GAMECORE_MISSIONSTORYEVENTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x174225B0)
#define RPG_GAMECORE_MISSIONSTORYEVENTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x17422880)
#define RPG_GAMECORE_MISSIONSTORYEVENTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x17422C60)
#define RPG_GAMECORE_MISSIONSTORYEVENTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x17422630)
#define RPG_GAMECORE_MISSIONSTORYEVENTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x17422CA0)
#define RPG_GAMECORE_MISSIONSTORYEVENTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17422E80)
#define RPG_GAMECORE_MISSIONSTORYEVENTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x17423120)
#define RPG_GAMECORE_MISSIONSTORYEVENTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17423480)
#define RPG_GAMECORE_MISSIONSTORYEVENTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x17422DE0)
#define RPG_GAMECORE_MISSIONSTORYEVENTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x17422D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionStoryEventExcelTable_TypeDefinitionIndex = 12940;

	class MissionStoryEventExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MissionStoryEventExcelTable_TypeDefinitionIndex)->GetStaticField(0x25200);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MissionStoryEventRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MissionStoryEventRow*>**)Il2CppClass::FromTypeDefinitionIndex(MissionStoryEventExcelTable_TypeDefinitionIndex)->GetStaticField(0x25208);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MissionStoryEventExcelTable_TypeDefinitionIndex)->GetStaticField(0x25210);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MissionStoryEventExcelTable_TypeDefinitionIndex)->GetStaticField(0xA050);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MissionStoryEventExcelTable_TypeDefinitionIndex)->GetStaticField(0xA051);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONSTORYEVENTEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MissionStoryEventRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MissionStoryEventRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONSTORYEVENTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONSTORYEVENTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MissionStoryEventRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MissionStoryEventRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONSTORYEVENTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MissionStoryEventRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::MissionStoryEventRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONSTORYEVENTEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONSTORYEVENTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONSTORYEVENTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONSTORYEVENTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONSTORYEVENTEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONSTORYEVENTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONSTORYEVENTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MissionStoryEventRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MissionStoryEventRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONSTORYEVENTEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
