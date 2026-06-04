#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EventStuffConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_EVENTSTUFFCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x196F6DA0)
#define RPG_GAMECORE_EVENTSTUFFCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x196F6C70)
#define RPG_GAMECORE_EVENTSTUFFCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x196F6960)
#define RPG_GAMECORE_EVENTSTUFFCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x196F6C10)
#define RPG_GAMECORE_EVENTSTUFFCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x196F6F30)
#define RPG_GAMECORE_EVENTSTUFFCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x196F69E0)
#define RPG_GAMECORE_EVENTSTUFFCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x196F6F70)
#define RPG_GAMECORE_EVENTSTUFFCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x196F7450)
#define RPG_GAMECORE_EVENTSTUFFCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x196F7730)
#define RPG_GAMECORE_EVENTSTUFFCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x196F7A50)
#define RPG_GAMECORE_EVENTSTUFFCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x196F73B0)
#define RPG_GAMECORE_EVENTSTUFFCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x196F7000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EventStuffConfigExcelTable_TypeDefinitionIndex = 13566;

	class EventStuffConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EventStuffConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EventStuffConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(EventStuffConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x15360);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(EventStuffConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x15368);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EventStuffConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x15370);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EventStuffConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x7D70);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(EventStuffConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x7D71);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTSTUFFCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EventStuffConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EventStuffConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTSTUFFCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTSTUFFCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EventStuffConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EventStuffConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTSTUFFCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::EventStuffConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::EventStuffConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTSTUFFCONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTSTUFFCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTSTUFFCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTSTUFFCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTSTUFFCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTSTUFFCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTSTUFFCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::EventStuffConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::EventStuffConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTSTUFFCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
