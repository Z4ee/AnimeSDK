#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TutorialDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TUTORIALDATAEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D613550)
#define RPG_GAMECORE_TUTORIALDATAEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D613420)
#define RPG_GAMECORE_TUTORIALDATAEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D613340)
#define RPG_GAMECORE_TUTORIALDATAEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D6133C0)
#define RPG_GAMECORE_TUTORIALDATAEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D6128E0)
#define RPG_GAMECORE_TUTORIALDATAEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D612920)
#define RPG_GAMECORE_TUTORIALDATAEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D612B50)
#define RPG_GAMECORE_TUTORIALDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D612D20)
#define RPG_GAMECORE_TUTORIALDATAEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D613020)
#define RPG_GAMECORE_TUTORIALDATAEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D6136A0)
#define RPG_GAMECORE_TUTORIALDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D612C80)
#define RPG_GAMECORE_TUTORIALDATAEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D612BE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialDataExcelTable_TypeDefinitionIndex = 15216;

	class TutorialDataExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialDataRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialDataRow*>**)Il2CppClass::FromTypeDefinitionIndex(TutorialDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x1D0A0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(TutorialDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x1D0A8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TutorialDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x1D0B0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TutorialDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x9CE0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(TutorialDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x9CE1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALDATAEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALDATAEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALDATAEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALDATAEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALDATAEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::TutorialDataRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TutorialDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALDATAEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialDataRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialDataRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALDATAEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALDATAEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialDataRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialDataRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALDATAEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::TutorialDataRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TutorialDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALDATAEXCELTABLE_GETDATA_OFFSET))(a1);
		}
	};
}
