#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueManagerRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEMANAGEREXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1CFBA9F0)
#define RPG_GAMECORE_ROGUEMANAGEREXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CFBA880)
#define RPG_GAMECORE_ROGUEMANAGEREXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1CFBA570)
#define RPG_GAMECORE_ROGUEMANAGEREXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1CFBA820)
#define RPG_GAMECORE_ROGUEMANAGEREXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1CFBAB80)
#define RPG_GAMECORE_ROGUEMANAGEREXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1CFBA5F0)
#define RPG_GAMECORE_ROGUEMANAGEREXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1CFBABC0)
#define RPG_GAMECORE_ROGUEMANAGEREXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CFBAD90)
#define RPG_GAMECORE_ROGUEMANAGEREXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1CFBB020)
#define RPG_GAMECORE_ROGUEMANAGEREXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CFBB390)
#define RPG_GAMECORE_ROGUEMANAGEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1CFBACF0)
#define RPG_GAMECORE_ROGUEMANAGEREXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1CFBAC50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueManagerExcelTable_TypeDefinitionIndex = 14129;

	class RogueManagerExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueManagerExcelTable_TypeDefinitionIndex)->GetStaticField(0x28AD0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueManagerRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueManagerRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueManagerExcelTable_TypeDefinitionIndex)->GetStaticField(0x28AD8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueManagerExcelTable_TypeDefinitionIndex)->GetStaticField(0x28AE0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueManagerExcelTable_TypeDefinitionIndex)->GetStaticField(0x7700);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueManagerExcelTable_TypeDefinitionIndex)->GetStaticField(0x7701);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMANAGEREXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueManagerRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueManagerRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMANAGEREXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMANAGEREXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueManagerRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueManagerRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMANAGEREXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueManagerRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueManagerRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMANAGEREXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMANAGEREXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMANAGEREXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMANAGEREXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMANAGEREXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMANAGEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMANAGEREXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueManagerRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueManagerRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMANAGEREXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
