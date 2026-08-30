#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETDAMAGESHAREDTARGET_METHOD_3_11CF17702899D917_OFFSET UNITYSDK_OFFSET(0x1E8161D0)
#define RPG_GAMECORE_SETDAMAGESHAREDTARGET_METHOD_3_A6FA110420B7C612_OFFSET UNITYSDK_OFFSET(0x1E816240)
#define RPG_GAMECORE_SETDAMAGESHAREDTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1E816220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDamageSharedTarget_TypeDefinitionIndex = 22567;

	class SetDamageSharedTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* SharedTarget; // 0x20
		::RPG::GameCore::FixPoint SharedDamagePercentage; // 0x28
		::RPG::GameCore::FixPoint SelfDamagePercentage; // 0x30
		::RPG::GameCore::FixPoint SharedStanceDamagePercentage; // 0x38
		::System::Boolean ShieldResolve; // 0x40
		::System::Boolean DisplayDamageOnSelf; // 0x41
		::System::Boolean Clear; // 0x42

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDAMAGESHAREDTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_11CF17702899D917(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDamageSharedTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDamageSharedTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDAMAGESHAREDTARGET_METHOD_3_11CF17702899D917_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A6FA110420B7C612(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDamageSharedTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDamageSharedTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDAMAGESHAREDTARGET_METHOD_3_A6FA110420B7C612_OFFSET))(a1, a2);
		}
	};
}
