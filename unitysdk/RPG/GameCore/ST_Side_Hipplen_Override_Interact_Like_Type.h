#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenInteractLikeType.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_SIDE_HIPPLEN_OVERRIDE_INTERACT_LIKE_TYPE_METHOD_4_B3480FF1D721225E_OFFSET UNITYSDK_OFFSET(0x1DB43030)
#define RPG_GAMECORE_ST_SIDE_HIPPLEN_OVERRIDE_INTERACT_LIKE_TYPE_METHOD_4_D2708D7AB957F3EB_OFFSET UNITYSDK_OFFSET(0x1DB42FE0)
#define RPG_GAMECORE_ST_SIDE_HIPPLEN_OVERRIDE_INTERACT_LIKE_TYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB43020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_Hipplen_Override_Interact_Like_Type_TypeDefinitionIndex = 21062;

	class ST_Side_Hipplen_Override_Interact_Like_Type : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::RPG::GameCore::HipplenInteractLikeType LikeType; // 0x18
		::System::Boolean ResetOnExit; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_OVERRIDE_INTERACT_LIKE_TYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D2708D7AB957F3EB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_Hipplen_Override_Interact_Like_Type*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_Hipplen_Override_Interact_Like_Type*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_OVERRIDE_INTERACT_LIKE_TYPE_METHOD_4_D2708D7AB957F3EB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B3480FF1D721225E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_Hipplen_Override_Interact_Like_Type* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_Hipplen_Override_Interact_Like_Type*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_OVERRIDE_INTERACT_LIKE_TYPE_METHOD_4_B3480FF1D721225E_OFFSET))(a1, a2);
		}
	};
}
