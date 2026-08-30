#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_OWNERENTITYREMOVEABILITY_METHOD_3_515E62B7E98E4758_OFFSET UNITYSDK_OFFSET(0x1D306230)
#define RPG_GAMECORE_OWNERENTITYREMOVEABILITY_METHOD_3_A2DFFED624F1D7FB_OFFSET UNITYSDK_OFFSET(0x1D3061F0)
#define RPG_GAMECORE_OWNERENTITYREMOVEABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D306220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OwnerEntityRemoveAbility_TypeDefinitionIndex = 23206;

	class OwnerEntityRemoveAbility : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* AbilityName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OWNERENTITYREMOVEABILITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A2DFFED624F1D7FB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OwnerEntityRemoveAbility*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OwnerEntityRemoveAbility*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OWNERENTITYREMOVEABILITY_METHOD_3_A2DFFED624F1D7FB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_515E62B7E98E4758(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OwnerEntityRemoveAbility* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OwnerEntityRemoveAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OWNERENTITYREMOVEABILITY_METHOD_3_515E62B7E98E4758_OFFSET))(a1, a2);
		}
	};
}
