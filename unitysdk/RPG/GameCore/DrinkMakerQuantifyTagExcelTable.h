#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DrinkMakerQuantifyTagRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D0479C0)
#define RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D047890)
#define RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D047580)
#define RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D047830)
#define RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D047B10)
#define RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D047600)
#define RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D047B50)
#define RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D047D20)
#define RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D047EE0)
#define RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D048200)
#define RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D047C80)
#define RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D047BE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerQuantifyTagExcelTable_TypeDefinitionIndex = 13058;

	class DrinkMakerQuantifyTagExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerQuantifyTagExcelTable_TypeDefinitionIndex)->GetStaticField(0x25470);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerQuantifyTagExcelTable_TypeDefinitionIndex)->GetStaticField(0x25478);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerQuantifyTagRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerQuantifyTagRow*>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerQuantifyTagExcelTable_TypeDefinitionIndex)->GetStaticField(0x25480);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerQuantifyTagExcelTable_TypeDefinitionIndex)->GetStaticField(0xB230);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerQuantifyTagExcelTable_TypeDefinitionIndex)->GetStaticField(0xB231);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerQuantifyTagRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerQuantifyTagRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerQuantifyTagRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerQuantifyTagRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::DrinkMakerQuantifyTagRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::DrinkMakerQuantifyTagRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::DrinkMakerQuantifyTagRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::DrinkMakerQuantifyTagRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
