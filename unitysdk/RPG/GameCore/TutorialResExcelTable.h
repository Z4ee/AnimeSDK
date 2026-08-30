#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TutorialResRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TUTORIALRESEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D2A9410)
#define RPG_GAMECORE_TUTORIALRESEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D2A92A0)
#define RPG_GAMECORE_TUTORIALRESEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D2A91C0)
#define RPG_GAMECORE_TUTORIALRESEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D2A9240)
#define RPG_GAMECORE_TUTORIALRESEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D2A87A0)
#define RPG_GAMECORE_TUTORIALRESEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D2A87E0)
#define RPG_GAMECORE_TUTORIALRESEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D2A8A10)
#define RPG_GAMECORE_TUTORIALRESEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D2A8BE0)
#define RPG_GAMECORE_TUTORIALRESEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D2A8E50)
#define RPG_GAMECORE_TUTORIALRESEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2A95A0)
#define RPG_GAMECORE_TUTORIALRESEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D2A8B40)
#define RPG_GAMECORE_TUTORIALRESEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D2A8AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialResExcelTable_TypeDefinitionIndex = 15220;

	class TutorialResExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialResRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialResRow*>**)Il2CppClass::FromTypeDefinitionIndex(TutorialResExcelTable_TypeDefinitionIndex)->GetStaticField(0x25550);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(TutorialResExcelTable_TypeDefinitionIndex)->GetStaticField(0x25558);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TutorialResExcelTable_TypeDefinitionIndex)->GetStaticField(0x25560);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TutorialResExcelTable_TypeDefinitionIndex)->GetStaticField(0xB490);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(TutorialResExcelTable_TypeDefinitionIndex)->GetStaticField(0xB491);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALRESEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALRESEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALRESEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALRESEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALRESEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALRESEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALRESEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::TutorialResRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TutorialResRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALRESEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialResRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialResRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALRESEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALRESEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialResRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialResRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALRESEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::TutorialResRow* GetData(::System::Int32 a1)
		{
			return ((::RPG::GameCore::TutorialResRow*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALRESEXCELTABLE_GETDATA_OFFSET))(a1);
		}
	};
}
