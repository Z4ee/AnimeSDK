#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_LOCKANIMATORSPEED_METHOD_3_6B00C186441F1590_OFFSET UNITYSDK_OFFSET(0x198AAEC0)
#define RPG_GAMECORE_LOCKANIMATORSPEED_METHOD_3_983F1C7C77231141_OFFSET UNITYSDK_OFFSET(0x198AAE40)
#define RPG_GAMECORE_LOCKANIMATORSPEED__CTOR_OFFSET UNITYSDK_OFFSET(0x198AAE90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LockAnimatorSpeed_TypeDefinitionIndex = 21971;

	class LockAnimatorSpeed : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsReset; // 0x18
		::RPG::GameCore::DynamicFloat* LockSpeed; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKANIMATORSPEED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_983F1C7C77231141(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockAnimatorSpeed*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockAnimatorSpeed*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKANIMATORSPEED_METHOD_3_983F1C7C77231141_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6B00C186441F1590(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockAnimatorSpeed* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockAnimatorSpeed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKANIMATORSPEED_METHOD_3_6B00C186441F1590_OFFSET))(a1, a2);
		}
	};
}
