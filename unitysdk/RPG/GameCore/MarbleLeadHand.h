#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLELEADHAND_METHOD_3_09CFB28EFAFF1FE3_OFFSET UNITYSDK_OFFSET(0x18A9E520)
#define RPG_GAMECORE_MARBLELEADHAND_METHOD_3_C6CBB5E0BAB59A85_OFFSET UNITYSDK_OFFSET(0x18A9E6E0)
#define RPG_GAMECORE_MARBLELEADHAND__CTOR_OFFSET UNITYSDK_OFFSET(0x18A9E690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleLeadHand_TypeDefinitionIndex = 15959;

	class MarbleLeadHand : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::System::Boolean EnemyTeam; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLELEADHAND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_09CFB28EFAFF1FE3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleLeadHand*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleLeadHand*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLELEADHAND_METHOD_3_09CFB28EFAFF1FE3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C6CBB5E0BAB59A85(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleLeadHand* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleLeadHand*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLELEADHAND_METHOD_3_C6CBB5E0BAB59A85_OFFSET))(a1, a2);
		}
	};
}
