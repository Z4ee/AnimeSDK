#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/TutorialPlatformType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TutorialGuideDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TUTORIALGUIDEDATAEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1B06A9A0)
#define RPG_GAMECORE_TUTORIALGUIDEDATAEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B06A830)
#define RPG_GAMECORE_TUTORIALGUIDEDATAEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1B06A750)
#define RPG_GAMECORE_TUTORIALGUIDEDATAEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1B06A7D0)
#define RPG_GAMECORE_TUTORIALGUIDEDATAEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1B069D10)
#define RPG_GAMECORE_TUTORIALGUIDEDATAEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B069D50)
#define RPG_GAMECORE_TUTORIALGUIDEDATAEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1B069F80)
#define RPG_GAMECORE_TUTORIALGUIDEDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B06A150)
#define RPG_GAMECORE_TUTORIALGUIDEDATAEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1B06A3B0)
#define RPG_GAMECORE_TUTORIALGUIDEDATAEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B06AB80)
#define RPG_GAMECORE_TUTORIALGUIDEDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1B06A0B0)
#define RPG_GAMECORE_TUTORIALGUIDEDATAEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B06A010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialGuideDataExcelTable_TypeDefinitionIndex = 14785;

	class TutorialGuideDataExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialGuideDataRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialGuideDataRow*>**)Il2CppClass::FromTypeDefinitionIndex(TutorialGuideDataExcelTable_TypeDefinitionIndex)->GetStaticField(0xEBD0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(TutorialGuideDataExcelTable_TypeDefinitionIndex)->GetStaticField(0xEBD8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TutorialGuideDataExcelTable_TypeDefinitionIndex)->GetStaticField(0xEBE0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TutorialGuideDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x50A0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(TutorialGuideDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x50A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEDATAEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEDATAEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEDATAEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEDATAEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEDATAEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::TutorialGuideDataRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TutorialGuideDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEDATAEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialGuideDataRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialGuideDataRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEDATAEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEDATAEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialGuideDataRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialGuideDataRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEDATAEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::TutorialGuideDataRow* GetData(::System::UInt32 a1, ::RPG::GameCore::TutorialPlatformType a2)
		{
			return ((::RPG::GameCore::TutorialGuideDataRow*(*)(::System::UInt32, ::RPG::GameCore::TutorialPlatformType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEDATAEXCELTABLE_GETDATA_OFFSET))(a1, a2);
		}
	};
}
