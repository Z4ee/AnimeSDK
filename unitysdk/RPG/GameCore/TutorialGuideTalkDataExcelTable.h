#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TutorialGuideTalkDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TUTORIALGUIDETALKDATAEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D2A7250)
#define RPG_GAMECORE_TUTORIALGUIDETALKDATAEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D2A70E0)
#define RPG_GAMECORE_TUTORIALGUIDETALKDATAEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D2A7000)
#define RPG_GAMECORE_TUTORIALGUIDETALKDATAEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D2A7080)
#define RPG_GAMECORE_TUTORIALGUIDETALKDATAEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D2A6640)
#define RPG_GAMECORE_TUTORIALGUIDETALKDATAEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D2A6680)
#define RPG_GAMECORE_TUTORIALGUIDETALKDATAEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D2A68B0)
#define RPG_GAMECORE_TUTORIALGUIDETALKDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D2A6A80)
#define RPG_GAMECORE_TUTORIALGUIDETALKDATAEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D2A6C90)
#define RPG_GAMECORE_TUTORIALGUIDETALKDATAEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2A73E0)
#define RPG_GAMECORE_TUTORIALGUIDETALKDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D2A69E0)
#define RPG_GAMECORE_TUTORIALGUIDETALKDATAEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D2A6940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialGuideTalkDataExcelTable_TypeDefinitionIndex = 15218;

	class TutorialGuideTalkDataExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialGuideTalkDataRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialGuideTalkDataRow*>**)Il2CppClass::FromTypeDefinitionIndex(TutorialGuideTalkDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x25530);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(TutorialGuideTalkDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x25538);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TutorialGuideTalkDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x25540);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(TutorialGuideTalkDataExcelTable_TypeDefinitionIndex)->GetStaticField(0xB480);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TutorialGuideTalkDataExcelTable_TypeDefinitionIndex)->GetStaticField(0xB481);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDETALKDATAEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDETALKDATAEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDETALKDATAEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDETALKDATAEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDETALKDATAEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDETALKDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDETALKDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::TutorialGuideTalkDataRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TutorialGuideTalkDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDETALKDATAEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialGuideTalkDataRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialGuideTalkDataRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDETALKDATAEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDETALKDATAEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialGuideTalkDataRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialGuideTalkDataRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDETALKDATAEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::TutorialGuideTalkDataRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TutorialGuideTalkDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDETALKDATAEXCELTABLE_GETDATA_OFFSET))(a1);
		}
	};
}
