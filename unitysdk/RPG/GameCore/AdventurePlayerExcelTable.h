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

#define RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18679A60)
#define RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1867A1C0)
#define RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1867ABE0)
#define RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1867AEB0)
#define RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1867AF10)
#define RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1867AC60)
#define RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1867AF50)
#define RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1867B130)
#define RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1867B450)
#define RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1867B760)
#define RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1867B090)
#define RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1867AFF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventurePlayerExcelTable_TypeDefinitionIndex = 11882;

	class AdventurePlayerExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AdventurePlayerRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AdventurePlayerRow*>**)Il2CppClass::FromTypeDefinitionIndex(AdventurePlayerExcelTable_TypeDefinitionIndex)->GetStaticField(0x7600);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AdventurePlayerExcelTable_TypeDefinitionIndex)->GetStaticField(0x7608);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AdventurePlayerExcelTable_TypeDefinitionIndex)->GetStaticField(0x7610);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AdventurePlayerExcelTable_TypeDefinitionIndex)->GetStaticField(0x34A0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AdventurePlayerExcelTable_TypeDefinitionIndex)->GetStaticField(0x34A1);
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

		static ::RPG::GameCore::AdventurePlayerRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::AdventurePlayerRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE_GETDATA_OFFSET))(ID);
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

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AdventurePlayerRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::AdventurePlayerRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
