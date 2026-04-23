#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MainMissionScheduleRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MAINMISSIONSCHEDULEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18A83450)
#define RPG_GAMECORE_MAINMISSIONSCHEDULEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18A832A0)
#define RPG_GAMECORE_MAINMISSIONSCHEDULEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18A82F70)
#define RPG_GAMECORE_MAINMISSIONSCHEDULEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18A83240)
#define RPG_GAMECORE_MAINMISSIONSCHEDULEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18A835D0)
#define RPG_GAMECORE_MAINMISSIONSCHEDULEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18A82FF0)
#define RPG_GAMECORE_MAINMISSIONSCHEDULEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18A83610)
#define RPG_GAMECORE_MAINMISSIONSCHEDULEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A837F0)
#define RPG_GAMECORE_MAINMISSIONSCHEDULEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18A83A50)
#define RPG_GAMECORE_MAINMISSIONSCHEDULEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A83D60)
#define RPG_GAMECORE_MAINMISSIONSCHEDULEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18A83750)
#define RPG_GAMECORE_MAINMISSIONSCHEDULEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18A836B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MainMissionScheduleExcelTable_TypeDefinitionIndex = 13412;

	class MainMissionScheduleExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MainMissionScheduleExcelTable_TypeDefinitionIndex)->GetStaticField(0x33170);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MainMissionScheduleExcelTable_TypeDefinitionIndex)->GetStaticField(0x33178);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MainMissionScheduleRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MainMissionScheduleRow*>**)Il2CppClass::FromTypeDefinitionIndex(MainMissionScheduleExcelTable_TypeDefinitionIndex)->GetStaticField(0x33180);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MainMissionScheduleExcelTable_TypeDefinitionIndex)->GetStaticField(0xC710);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MainMissionScheduleExcelTable_TypeDefinitionIndex)->GetStaticField(0xC711);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONSCHEDULEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MainMissionScheduleRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MainMissionScheduleRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONSCHEDULEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONSCHEDULEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MainMissionScheduleRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MainMissionScheduleRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONSCHEDULEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MainMissionScheduleRow* GetData(::System::UInt32 MainMissionID)
		{
			return ((::RPG::GameCore::MainMissionScheduleRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONSCHEDULEEXCELTABLE_GETDATA_OFFSET))(MainMissionID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONSCHEDULEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONSCHEDULEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONSCHEDULEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONSCHEDULEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONSCHEDULEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONSCHEDULEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MainMissionScheduleRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MainMissionScheduleRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONSCHEDULEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
