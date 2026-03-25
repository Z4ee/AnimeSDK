#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DrinkMakerTagRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_DRINKMAKERTAGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x17182210)
#define RPG_GAMECORE_DRINKMAKERTAGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17182090)
#define RPG_GAMECORE_DRINKMAKERTAGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x17181D60)
#define RPG_GAMECORE_DRINKMAKERTAGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x17182030)
#define RPG_GAMECORE_DRINKMAKERTAGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x17182390)
#define RPG_GAMECORE_DRINKMAKERTAGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x17181DE0)
#define RPG_GAMECORE_DRINKMAKERTAGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x171823D0)
#define RPG_GAMECORE_DRINKMAKERTAGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x171825B0)
#define RPG_GAMECORE_DRINKMAKERTAGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x17182980)
#define RPG_GAMECORE_DRINKMAKERTAGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17182C90)
#define RPG_GAMECORE_DRINKMAKERTAGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x17182510)
#define RPG_GAMECORE_DRINKMAKERTAGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x17182470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerTagExcelTable_TypeDefinitionIndex = 12004;

	class DrinkMakerTagExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerTagExcelTable_TypeDefinitionIndex)->GetStaticField(0x2AEA0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerTagRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerTagRow*>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerTagExcelTable_TypeDefinitionIndex)->GetStaticField(0x2AEA8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerTagExcelTable_TypeDefinitionIndex)->GetStaticField(0x2AEB0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerTagExcelTable_TypeDefinitionIndex)->GetStaticField(0xE2E0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerTagExcelTable_TypeDefinitionIndex)->GetStaticField(0xE2E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERTAGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerTagRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerTagRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERTAGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERTAGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerTagRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerTagRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERTAGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::DrinkMakerTagRow* GetData(::System::UInt32 TagID)
		{
			return ((::RPG::GameCore::DrinkMakerTagRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERTAGEXCELTABLE_GETDATA_OFFSET))(TagID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERTAGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERTAGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERTAGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERTAGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERTAGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERTAGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::DrinkMakerTagRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::DrinkMakerTagRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERTAGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
