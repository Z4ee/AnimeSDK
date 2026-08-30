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

#define RPG_GAMECORE_MAINMISSIONSCHEDULEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D490350)
#define RPG_GAMECORE_MAINMISSIONSCHEDULEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D4901E0)
#define RPG_GAMECORE_MAINMISSIONSCHEDULEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D48FED0)
#define RPG_GAMECORE_MAINMISSIONSCHEDULEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D490180)
#define RPG_GAMECORE_MAINMISSIONSCHEDULEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D4904A0)
#define RPG_GAMECORE_MAINMISSIONSCHEDULEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D48FF50)
#define RPG_GAMECORE_MAINMISSIONSCHEDULEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D4904E0)
#define RPG_GAMECORE_MAINMISSIONSCHEDULEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D4906B0)
#define RPG_GAMECORE_MAINMISSIONSCHEDULEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D490910)
#define RPG_GAMECORE_MAINMISSIONSCHEDULEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D490C30)
#define RPG_GAMECORE_MAINMISSIONSCHEDULEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D490610)
#define RPG_GAMECORE_MAINMISSIONSCHEDULEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D490570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MainMissionScheduleExcelTable_TypeDefinitionIndex = 14050;

	class MainMissionScheduleExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MainMissionScheduleExcelTable_TypeDefinitionIndex)->GetStaticField(0x1D680);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MainMissionScheduleRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MainMissionScheduleRow*>**)Il2CppClass::FromTypeDefinitionIndex(MainMissionScheduleExcelTable_TypeDefinitionIndex)->GetStaticField(0x1D688);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MainMissionScheduleExcelTable_TypeDefinitionIndex)->GetStaticField(0x1D690);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MainMissionScheduleExcelTable_TypeDefinitionIndex)->GetStaticField(0x9ED0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MainMissionScheduleExcelTable_TypeDefinitionIndex)->GetStaticField(0x9ED1);
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

		static ::RPG::GameCore::MainMissionScheduleRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MainMissionScheduleRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONSCHEDULEEXCELTABLE_GETDATA_OFFSET))(a1);
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

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONSCHEDULEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONSCHEDULEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONSCHEDULEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MainMissionScheduleRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MainMissionScheduleRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONSCHEDULEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
