#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class IElfRecipeEditable; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFRECIPEEDITOR_ADDRECIPE_OFFSET UNITYSDK_OFFSET(0x1AC87770)
#define RPG_CLIENT_ELFRECIPEEDITOR_CLEARTODAYRECIPE_OFFSET UNITYSDK_OFFSET(0x1AC87E20)
#define RPG_CLIENT_ELFRECIPEEDITOR_CONTAINSVALUE_OFFSET UNITYSDK_OFFSET(0x1AC87930)
#define RPG_CLIENT_ELFRECIPEEDITOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AC87070)
#define RPG_CLIENT_ELFRECIPEEDITOR_GETRECIPEINDEX_OFFSET UNITYSDK_OFFSET(0x1AC875A0)
#define RPG_CLIENT_ELFRECIPEEDITOR_GETRECIPELIST_OFFSET UNITYSDK_OFFSET(0x1AC87100)
#define RPG_CLIENT_ELFRECIPEEDITOR_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1AC87EA0)
#define RPG_CLIENT_ELFRECIPEEDITOR_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1AC87F20)
#define RPG_CLIENT_ELFRECIPEEDITOR_GET_SLOTS_OFFSET UNITYSDK_OFFSET(0x1AC87EE0)
#define RPG_CLIENT_ELFRECIPEEDITOR_INIT_OFFSET UNITYSDK_OFFSET(0x1AC86E90)
#define RPG_CLIENT_ELFRECIPEEDITOR_ISFULL_OFFSET UNITYSDK_OFFSET(0x1AC87AA0)
#define RPG_CLIENT_ELFRECIPEEDITOR_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x1AC87C40)
#define RPG_CLIENT_ELFRECIPEEDITOR_REMOVE_OFFSET UNITYSDK_OFFSET(0x1AC87CE0)
#define RPG_CLIENT_ELFRECIPEEDITOR_REPLACETODAYRECIPE_OFFSET UNITYSDK_OFFSET(0x1AC876D0)
#define RPG_CLIENT_ELFRECIPEEDITOR_SYNCRECIPE_OFFSET UNITYSDK_OFFSET(0x1AC873B0)
#define RPG_CLIENT_ELFRECIPEEDITOR_UPDATESELECTRECIPES_OFFSET UNITYSDK_OFFSET(0x1AC874F0)
#define RPG_CLIENT_ELFRECIPEEDITOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC87FA0)
#define RPG_CLIENT_ELFRECIPEEDITOR__INITSLOTS_OFFSET UNITYSDK_OFFSET(0x1AC86EE0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRecipeEditor_TypeDefinitionIndex = 63793;

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

		::System::Void SyncRecipe(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRECIPEEDITOR_SYNCRECIPE_OFFSET))(this, a1);
		}

		::System::Int32 GetRecipeIndex(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRECIPEEDITOR_GETRECIPEINDEX_OFFSET))(this, a1);
		}

		::System::Void ReplaceTodayRecipe(::System::Int32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRECIPEEDITOR_REPLACETODAYRECIPE_OFFSET))(this, a1, a2);
		}

		::System::Void AddRecipe(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRECIPEEDITOR_ADDRECIPE_OFFSET))(this, a1);
		}

		::System::Void UpdateSelectRecipes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRECIPEEDITOR_UPDATESELECTRECIPES_OFFSET))(this);
		}

		::System::Boolean IsFull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRECIPEEDITOR_ISFULL_OFFSET))(this);
		}

		::System::Void RemoveAt(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRECIPEEDITOR_REMOVEAT_OFFSET))(this, a1);
		}

		::System::Void Remove(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRECIPEEDITOR_REMOVE_OFFSET))(this, a1);
		}

		::System::Boolean ContainsValue(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRECIPEEDITOR_CONTAINSVALUE_OFFSET))(this, a1);
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

		::RPG::Client::IElfRecipeEditable* get_Item(::System::Int32 a1)
		{
			return ((::RPG::Client::IElfRecipeEditable*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRECIPEEDITOR_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRECIPEEDITOR_GET_COUNT_OFFSET))(this);
		}
	};
}
