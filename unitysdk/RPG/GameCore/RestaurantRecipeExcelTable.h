#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RestaurantRecipeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RESTAURANTRECIPEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18CB3F00)
#define RPG_GAMECORE_RESTAURANTRECIPEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18CB3D80)
#define RPG_GAMECORE_RESTAURANTRECIPEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18CB3A50)
#define RPG_GAMECORE_RESTAURANTRECIPEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18CB3D20)
#define RPG_GAMECORE_RESTAURANTRECIPEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18CB40D0)
#define RPG_GAMECORE_RESTAURANTRECIPEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18CB3AD0)
#define RPG_GAMECORE_RESTAURANTRECIPEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18CB4110)
#define RPG_GAMECORE_RESTAURANTRECIPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18CB42F0)
#define RPG_GAMECORE_RESTAURANTRECIPEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18CB46D0)
#define RPG_GAMECORE_RESTAURANTRECIPEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18CB49E0)
#define RPG_GAMECORE_RESTAURANTRECIPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18CB4250)
#define RPG_GAMECORE_RESTAURANTRECIPEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18CB41B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantRecipeExcelTable_TypeDefinitionIndex = 10838;

	class RestaurantRecipeExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantRecipeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantRecipeRow*>**)Il2CppClass::FromTypeDefinitionIndex(RestaurantRecipeExcelTable_TypeDefinitionIndex)->GetStaticField(0x25F60);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RestaurantRecipeExcelTable_TypeDefinitionIndex)->GetStaticField(0x25F68);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RestaurantRecipeExcelTable_TypeDefinitionIndex)->GetStaticField(0x25F70);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RestaurantRecipeExcelTable_TypeDefinitionIndex)->GetStaticField(0x9F70);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RestaurantRecipeExcelTable_TypeDefinitionIndex)->GetStaticField(0x9F71);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTRECIPEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantRecipeRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantRecipeRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTRECIPEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTRECIPEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantRecipeRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantRecipeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTRECIPEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RestaurantRecipeRow* GetData(::System::UInt32 RecipeID)
		{
			return ((::RPG::GameCore::RestaurantRecipeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTRECIPEEXCELTABLE_GETDATA_OFFSET))(RecipeID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTRECIPEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTRECIPEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTRECIPEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTRECIPEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTRECIPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTRECIPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RestaurantRecipeRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RestaurantRecipeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTRECIPEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
