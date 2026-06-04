#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RestaurantRecipeUpRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RESTAURANTRECIPEUPEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19AD96A0)
#define RPG_GAMECORE_RESTAURANTRECIPEUPEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19AD9570)
#define RPG_GAMECORE_RESTAURANTRECIPEUPEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19AD9260)
#define RPG_GAMECORE_RESTAURANTRECIPEUPEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19AD9510)
#define RPG_GAMECORE_RESTAURANTRECIPEUPEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19AD9870)
#define RPG_GAMECORE_RESTAURANTRECIPEUPEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19AD92E0)
#define RPG_GAMECORE_RESTAURANTRECIPEUPEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19AD98B0)
#define RPG_GAMECORE_RESTAURANTRECIPEUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19AD9A80)
#define RPG_GAMECORE_RESTAURANTRECIPEUPEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19AD9CF0)
#define RPG_GAMECORE_RESTAURANTRECIPEUPEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19ADA050)
#define RPG_GAMECORE_RESTAURANTRECIPEUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19AD99E0)
#define RPG_GAMECORE_RESTAURANTRECIPEUPEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19AD9940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantRecipeUpExcelTable_TypeDefinitionIndex = 10894;

	class RestaurantRecipeUpExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RestaurantRecipeUpExcelTable_TypeDefinitionIndex)->GetStaticField(0x427D0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RestaurantRecipeUpExcelTable_TypeDefinitionIndex)->GetStaticField(0x427D8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantRecipeUpRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantRecipeUpRow*>**)Il2CppClass::FromTypeDefinitionIndex(RestaurantRecipeUpExcelTable_TypeDefinitionIndex)->GetStaticField(0x427E0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RestaurantRecipeUpExcelTable_TypeDefinitionIndex)->GetStaticField(0xBDC0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RestaurantRecipeUpExcelTable_TypeDefinitionIndex)->GetStaticField(0xBDC1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTRECIPEUPEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantRecipeUpRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantRecipeUpRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTRECIPEUPEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTRECIPEUPEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantRecipeUpRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantRecipeUpRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTRECIPEUPEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RestaurantRecipeUpRow* GetData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::RestaurantRecipeUpRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTRECIPEUPEXCELTABLE_GETDATA_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTRECIPEUPEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTRECIPEUPEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTRECIPEUPEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTRECIPEUPEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTRECIPEUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTRECIPEUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RestaurantRecipeUpRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RestaurantRecipeUpRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTRECIPEUPEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
