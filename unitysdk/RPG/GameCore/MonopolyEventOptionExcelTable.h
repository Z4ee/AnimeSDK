#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MonopolyEventOptionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MONOPOLYEVENTOPTIONEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1995E300)
#define RPG_GAMECORE_MONOPOLYEVENTOPTIONEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1995E190)
#define RPG_GAMECORE_MONOPOLYEVENTOPTIONEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1995DE80)
#define RPG_GAMECORE_MONOPOLYEVENTOPTIONEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1995E130)
#define RPG_GAMECORE_MONOPOLYEVENTOPTIONEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1995E450)
#define RPG_GAMECORE_MONOPOLYEVENTOPTIONEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1995DF00)
#define RPG_GAMECORE_MONOPOLYEVENTOPTIONEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1995E490)
#define RPG_GAMECORE_MONOPOLYEVENTOPTIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1995E660)
#define RPG_GAMECORE_MONOPOLYEVENTOPTIONEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1995EB90)
#define RPG_GAMECORE_MONOPOLYEVENTOPTIONEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1995EEB0)
#define RPG_GAMECORE_MONOPOLYEVENTOPTIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1995E5C0)
#define RPG_GAMECORE_MONOPOLYEVENTOPTIONEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1995E520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyEventOptionExcelTable_TypeDefinitionIndex = 11470;

	class MonopolyEventOptionExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MonopolyEventOptionExcelTable_TypeDefinitionIndex)->GetStaticField(0x19060);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyEventOptionRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyEventOptionRow*>**)Il2CppClass::FromTypeDefinitionIndex(MonopolyEventOptionExcelTable_TypeDefinitionIndex)->GetStaticField(0x19068);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MonopolyEventOptionExcelTable_TypeDefinitionIndex)->GetStaticField(0x19070);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MonopolyEventOptionExcelTable_TypeDefinitionIndex)->GetStaticField(0x84E0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonopolyEventOptionExcelTable_TypeDefinitionIndex)->GetStaticField(0x84E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYEVENTOPTIONEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyEventOptionRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyEventOptionRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYEVENTOPTIONEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYEVENTOPTIONEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyEventOptionRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyEventOptionRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYEVENTOPTIONEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MonopolyEventOptionRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MonopolyEventOptionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYEVENTOPTIONEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYEVENTOPTIONEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYEVENTOPTIONEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYEVENTOPTIONEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYEVENTOPTIONEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYEVENTOPTIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYEVENTOPTIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MonopolyEventOptionRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MonopolyEventOptionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYEVENTOPTIONEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
