#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_LOCKANIMATORSPEED_METHOD_3_6972E62D32B1EFF5_OFFSET UNITYSDK_OFFSET(0x1BCCE1C0)
#define RPG_GAMECORE_LOCKANIMATORSPEED_METHOD_3_6B00C186441F1590_OFFSET UNITYSDK_OFFSET(0x1BCCE200)
#define RPG_GAMECORE_LOCKANIMATORSPEED__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCCE1F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LockAnimatorSpeed_TypeDefinitionIndex = 22405;

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

		static ::System::Void Method_3_6972E62D32B1EFF5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockAnimatorSpeed*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockAnimatorSpeed*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKANIMATORSPEED_METHOD_3_6972E62D32B1EFF5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6B00C186441F1590(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockAnimatorSpeed* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockAnimatorSpeed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKANIMATORSPEED_METHOD_3_6B00C186441F1590_OFFSET))(a1, a2);
		}
	};
}
