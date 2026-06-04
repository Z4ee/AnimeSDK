#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MissionChapterConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MISSIONCHAPTERCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19942AD0)
#define RPG_GAMECORE_MISSIONCHAPTERCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19942960)
#define RPG_GAMECORE_MISSIONCHAPTERCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19942650)
#define RPG_GAMECORE_MISSIONCHAPTERCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19942900)
#define RPG_GAMECORE_MISSIONCHAPTERCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19942C20)
#define RPG_GAMECORE_MISSIONCHAPTERCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x199426D0)
#define RPG_GAMECORE_MISSIONCHAPTERCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19942C60)
#define RPG_GAMECORE_MISSIONCHAPTERCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19942E30)
#define RPG_GAMECORE_MISSIONCHAPTERCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19943200)
#define RPG_GAMECORE_MISSIONCHAPTERCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19943520)
#define RPG_GAMECORE_MISSIONCHAPTERCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19942D90)
#define RPG_GAMECORE_MISSIONCHAPTERCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19942CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionChapterConfigExcelTable_TypeDefinitionIndex = 13483;

	class MissionChapterConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MissionChapterConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2E1E0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MissionChapterConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2E1E8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MissionChapterConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MissionChapterConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(MissionChapterConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2E1F0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MissionChapterConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x9DB0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MissionChapterConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x9DB1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCHAPTERCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MissionChapterConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MissionChapterConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCHAPTERCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCHAPTERCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MissionChapterConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MissionChapterConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCHAPTERCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MissionChapterConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MissionChapterConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCHAPTERCONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCHAPTERCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCHAPTERCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCHAPTERCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCHAPTERCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCHAPTERCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCHAPTERCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MissionChapterConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MissionChapterConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCHAPTERCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
