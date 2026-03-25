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

#define RPG_GAMECORE_RESTAURANTRECIPEUPEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x175A92A0)
#define RPG_GAMECORE_RESTAURANTRECIPEUPEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x175A9120)
#define RPG_GAMECORE_RESTAURANTRECIPEUPEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x175A8DF0)
#define RPG_GAMECORE_RESTAURANTRECIPEUPEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x175A90C0)
#define RPG_GAMECORE_RESTAURANTRECIPEUPEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x175A94B0)
#define RPG_GAMECORE_RESTAURANTRECIPEUPEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x175A8E70)
#define RPG_GAMECORE_RESTAURANTRECIPEUPEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x175A94F0)
#define RPG_GAMECORE_RESTAURANTRECIPEUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x175A96D0)
#define RPG_GAMECORE_RESTAURANTRECIPEUPEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x175A9940)
#define RPG_GAMECORE_RESTAURANTRECIPEUPEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x175A9CA0)
#define RPG_GAMECORE_RESTAURANTRECIPEUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x175A9630)
#define RPG_GAMECORE_RESTAURANTRECIPEUPEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x175A9590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantRecipeUpExcelTable_TypeDefinitionIndex = 10587;

	class RestaurantRecipeUpExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RestaurantRecipeUpExcelTable_TypeDefinitionIndex)->GetStaticField(0x32390);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RestaurantRecipeUpExcelTable_TypeDefinitionIndex)->GetStaticField(0x32398);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantRecipeUpRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantRecipeUpRow*>**)Il2CppClass::FromTypeDefinitionIndex(RestaurantRecipeUpExcelTable_TypeDefinitionIndex)->GetStaticField(0x323A0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RestaurantRecipeUpExcelTable_TypeDefinitionIndex)->GetStaticField(0x104B0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RestaurantRecipeUpExcelTable_TypeDefinitionIndex)->GetStaticField(0x104B1);
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

		static ::RPG::GameCore::RestaurantRecipeUpRow* GetData(::System::UInt32 RecipeID, ::System::UInt32 Level)
		{
			return ((::RPG::GameCore::RestaurantRecipeUpRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTRECIPEUPEXCELTABLE_GETDATA_OFFSET))(RecipeID, Level);
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

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTRECIPEUPEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTRECIPEUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTRECIPEUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RestaurantRecipeUpRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RestaurantRecipeUpRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTRECIPEUPEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
