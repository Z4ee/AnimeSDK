#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/GunPlayModeType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MazePuzzleWolfGunPlayLevelRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19909600)
#define RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19909490)
#define RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19909180)
#define RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19909430)
#define RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x199097E0)
#define RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19909200)
#define RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19909820)
#define RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x199099F0)
#define RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19909E50)
#define RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1990A200)
#define RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19909950)
#define RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x199098B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazePuzzleWolfGunPlayLevelExcelTable_TypeDefinitionIndex = 13414;

	class MazePuzzleWolfGunPlayLevelExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MazePuzzleWolfGunPlayLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C980);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleWolfGunPlayLevelRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleWolfGunPlayLevelRow*>**)Il2CppClass::FromTypeDefinitionIndex(MazePuzzleWolfGunPlayLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C988);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MazePuzzleWolfGunPlayLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C990);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MazePuzzleWolfGunPlayLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x9BF0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MazePuzzleWolfGunPlayLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x9BF1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleWolfGunPlayLevelRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleWolfGunPlayLevelRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleWolfGunPlayLevelRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleWolfGunPlayLevelRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MazePuzzleWolfGunPlayLevelRow* GetData(::RPG::GameCore::GunPlayModeType a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::MazePuzzleWolfGunPlayLevelRow*(*)(::RPG::GameCore::GunPlayModeType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELEXCELTABLE_GETDATA_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MazePuzzleWolfGunPlayLevelRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MazePuzzleWolfGunPlayLevelRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
