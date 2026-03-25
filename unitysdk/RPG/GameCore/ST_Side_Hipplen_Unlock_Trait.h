#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_SIDE_HIPPLEN_UNLOCK_TRAIT_METHOD_4_C4F77A001B33C11D_OFFSET UNITYSDK_OFFSET(0x17699310)
#define RPG_GAMECORE_ST_SIDE_HIPPLEN_UNLOCK_TRAIT_METHOD_4_F7EF4B3DAFD18CB7_OFFSET UNITYSDK_OFFSET(0x1768CE20)
#define RPG_GAMECORE_ST_SIDE_HIPPLEN_UNLOCK_TRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1768CDD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_Hipplen_Unlock_Trait_TypeDefinitionIndex = 19606;

	class ST_Side_Hipplen_Unlock_Trait : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* TraitIDs; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_UNLOCK_TRAIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C4F77A001B33C11D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_Hipplen_Unlock_Trait*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_Hipplen_Unlock_Trait*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_UNLOCK_TRAIT_METHOD_4_C4F77A001B33C11D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F7EF4B3DAFD18CB7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_Hipplen_Unlock_Trait* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_Hipplen_Unlock_Trait*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_UNLOCK_TRAIT_METHOD_4_F7EF4B3DAFD18CB7_OFFSET))(a1, a2);
		}
	};
}
