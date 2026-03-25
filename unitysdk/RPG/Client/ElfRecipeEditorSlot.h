#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ELFRECIPEEDITORSLOT_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x95C1210)
#define RPG_CLIENT_ELFRECIPEEDITORSLOT_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x95C06A0)
#define RPG_CLIENT_ELFRECIPEEDITORSLOT_GET_ISLOCK_OFFSET UNITYSDK_OFFSET(0x95BFE70)
#define RPG_CLIENT_ELFRECIPEEDITORSLOT_GET_RECIPEID_OFFSET UNITYSDK_OFFSET(0x95C1230)
#define RPG_CLIENT_ELFRECIPEEDITORSLOT_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x95C1220)
#define RPG_CLIENT_ELFRECIPEEDITORSLOT_SET_RECIPEID_OFFSET UNITYSDK_OFFSET(0x95C1240)
#define RPG_CLIENT_ELFRECIPEEDITORSLOT__CTOR_OFFSET UNITYSDK_OFFSET(0x95C1040)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRecipeEditorSlot_TypeDefinitionIndex = 51776;

	class ElfRecipeEditorSlot : public ::System::Object
	{
	public:
		::System::UInt32 _RecipeID_k__BackingField; // 0x10
		::System::Int32 _Index_k__BackingField; // 0x14

		::System::Void _ctor(::System::Int32 index, ::System::UInt32 recipeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRECIPEEDITORSLOT__CTOR_OFFSET))(this, index, recipeID);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRECIPEEDITORSLOT_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRECIPEEDITORSLOT_SET_INDEX_OFFSET))(this, value);
		}

		::System::UInt32 get_RecipeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRECIPEEDITORSLOT_GET_RECIPEID_OFFSET))(this);
		}

		::System::Void set_RecipeID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRECIPEEDITORSLOT_SET_RECIPEID_OFFSET))(this, value);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRECIPEEDITORSLOT_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Boolean get_IsLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRECIPEEDITORSLOT_GET_ISLOCK_OFFSET))(this);
		}
	};
}
