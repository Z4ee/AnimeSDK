#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class WorldLevelRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_WORLDLEVELEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1EFAB0C0)
#define RPG_GAMECORE_WORLDLEVELEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EFAAF90)
#define RPG_GAMECORE_WORLDLEVELEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1EFAAC80)
#define RPG_GAMECORE_WORLDLEVELEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1EFAAF30)
#define RPG_GAMECORE_WORLDLEVELEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1EFAB210)
#define RPG_GAMECORE_WORLDLEVELEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EFAAD00)
#define RPG_GAMECORE_WORLDLEVELEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1EFAB250)
#define RPG_GAMECORE_WORLDLEVELEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EFAB420)
#define RPG_GAMECORE_WORLDLEVELEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1EFAB770)
#define RPG_GAMECORE_WORLDLEVELEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFABA90)
#define RPG_GAMECORE_WORLDLEVELEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1EFAB380)
#define RPG_GAMECORE_WORLDLEVELEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EFAB2E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WorldLevelExcelTable_TypeDefinitionIndex = 14338;

	class WorldLevelExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(WorldLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x850);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::WorldLevelRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::WorldLevelRow*>**)Il2CppClass::FromTypeDefinitionIndex(WorldLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x858);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(WorldLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x860);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(WorldLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x4E0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(WorldLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x4E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_WORLDLEVELEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::WorldLevelRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::WorldLevelRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_WORLDLEVELEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_WORLDLEVELEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::WorldLevelRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::WorldLevelRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_WORLDLEVELEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::WorldLevelRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::WorldLevelRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WORLDLEVELEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_WORLDLEVELEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_WORLDLEVELEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_WORLDLEVELEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WORLDLEVELEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WORLDLEVELEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WORLDLEVELEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::WorldLevelRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::WorldLevelRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WORLDLEVELEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
