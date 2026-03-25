#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class IElfRecipeEditable; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFRECIPEEDITOR_ADDRECIPE_OFFSET UNITYSDK_OFFSET(0x95C03D0)
#define RPG_CLIENT_ELFRECIPEEDITOR_CLEARTODAYRECIPE_OFFSET UNITYSDK_OFFSET(0x95C0FD0)
#define RPG_CLIENT_ELFRECIPEEDITOR_CONTAINSVALUE_OFFSET UNITYSDK_OFFSET(0x95C0550)
#define RPG_CLIENT_ELFRECIPEEDITOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x95BFC40)
#define RPG_CLIENT_ELFRECIPEEDITOR_GETRECIPEINDEX_OFFSET UNITYSDK_OFFSET(0x95C01C0)
#define RPG_CLIENT_ELFRECIPEEDITOR_GETRECIPELIST_OFFSET UNITYSDK_OFFSET(0x95BFCB0)
#define RPG_CLIENT_ELFRECIPEEDITOR_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x95C1050)
#define RPG_CLIENT_ELFRECIPEEDITOR_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x95C1070)
#define RPG_CLIENT_ELFRECIPEEDITOR_GET_SLOTS_OFFSET UNITYSDK_OFFSET(0x95C1060)
#define RPG_CLIENT_ELFRECIPEEDITOR_INIT_OFFSET UNITYSDK_OFFSET(0x95BFB00)
#define RPG_CLIENT_ELFRECIPEEDITOR_ISFULL_OFFSET UNITYSDK_OFFSET(0x95C0C50)
#define RPG_CLIENT_ELFRECIPEEDITOR_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x95C0DB0)
#define RPG_CLIENT_ELFRECIPEEDITOR_REMOVE_OFFSET UNITYSDK_OFFSET(0x95C0E60)
#define RPG_CLIENT_ELFRECIPEEDITOR_REPLACETODAYRECIPE_OFFSET UNITYSDK_OFFSET(0x95C0320)
#define RPG_CLIENT_ELFRECIPEEDITOR_SYNCRECIPE_OFFSET UNITYSDK_OFFSET(0x95BFFD0)
#define RPG_CLIENT_ELFRECIPEEDITOR_UPDATESELECTRECIPES_OFFSET UNITYSDK_OFFSET(0x95C0120)
#define RPG_CLIENT_ELFRECIPEEDITOR__CTOR_OFFSET UNITYSDK_OFFSET(0x95C1200)
#define RPG_CLIENT_ELFRECIPEEDITOR__INITSLOTS_OFFSET UNITYSDK_OFFSET(0x95BFB50)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRecipeEditor_TypeDefinitionIndex = 51777;

	class ElfRecipeEditor : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::IElfRecipeEditable*>* _Slots; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRECIPEEDITOR__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRECIPEEDITOR_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRECIPEEDITOR_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetRecipeList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRECIPEEDITOR_GETRECIPELIST_OFFSET))(this);
		}

		::System::Void SyncRecipe(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* recipeList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRECIPEEDITOR_SYNCRECIPE_OFFSET))(this, recipeList);
		}

		::System::Int32 GetRecipeIndex(::System::UInt32 recipeID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRECIPEEDITOR_GETRECIPEINDEX_OFFSET))(this, recipeID);
		}

		::System::Void ReplaceTodayRecipe(::System::Int32 index, ::System::UInt32 recipeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRECIPEEDITOR_REPLACETODAYRECIPE_OFFSET))(this, index, recipeID);
		}

		::System::Void AddRecipe(::System::UInt32 recipeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRECIPEEDITOR_ADDRECIPE_OFFSET))(this, recipeID);
		}

		::System::Void UpdateSelectRecipes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRECIPEEDITOR_UPDATESELECTRECIPES_OFFSET))(this);
		}

		::System::Boolean IsFull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRECIPEEDITOR_ISFULL_OFFSET))(this);
		}

		::System::Void RemoveAt(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRECIPEEDITOR_REMOVEAT_OFFSET))(this, index);
		}

		::System::Void Remove(::System::UInt32 recipeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRECIPEEDITOR_REMOVE_OFFSET))(this, recipeID);
		}

		::System::Boolean ContainsValue(::System::UInt32 recipeID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRECIPEEDITOR_CONTAINSVALUE_OFFSET))(this, recipeID);
		}

		::System::Void ClearTodayRecipe()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRECIPEEDITOR_CLEARTODAYRECIPE_OFFSET))(this);
		}

		::System::Void _InitSlots()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRECIPEEDITOR__INITSLOTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IElfRecipeEditable*>* get_Slots()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IElfRecipeEditable*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRECIPEEDITOR_GET_SLOTS_OFFSET))(this);
		}

		::RPG::Client::IElfRecipeEditable* get_Item(::System::Int32 index)
		{
			return ((::RPG::Client::IElfRecipeEditable*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRECIPEEDITOR_GET_ITEM_OFFSET))(this, index);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRECIPEEDITOR_GET_COUNT_OFFSET))(this);
		}
	};
}
