#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AdventurePlayerRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19451DC0)
#define RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19451C50)
#define RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19451A60)
#define RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19451BF0)
#define RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19451F10)
#define RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19451AE0)
#define RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19451F50)
#define RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19452120)
#define RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19452430)
#define RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19452750)
#define RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19452080)
#define RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19451FE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventurePlayerExcelTable_TypeDefinitionIndex = 11975;

	class AdventurePlayerExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AdventurePlayerExcelTable_TypeDefinitionIndex)->GetStaticField(0x14C0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AdventurePlayerExcelTable_TypeDefinitionIndex)->GetStaticField(0x14C8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AdventurePlayerRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AdventurePlayerRow*>**)Il2CppClass::FromTypeDefinitionIndex(AdventurePlayerExcelTable_TypeDefinitionIndex)->GetStaticField(0x14D0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AdventurePlayerExcelTable_TypeDefinitionIndex)->GetStaticField(0x9D0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AdventurePlayerExcelTable_TypeDefinitionIndex)->GetStaticField(0x9D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AdventurePlayerRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AdventurePlayerRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AdventurePlayerRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AdventurePlayerRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AdventurePlayerRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AdventurePlayerRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AdventurePlayerRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AdventurePlayerRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
