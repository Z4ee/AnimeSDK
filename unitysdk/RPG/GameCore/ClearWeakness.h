#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/WeaknessStackOperationType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CLEARWEAKNESS_METHOD_3_81F2114C3C3CB309_OFFSET UNITYSDK_OFFSET(0x19654960)
#define RPG_GAMECORE_CLEARWEAKNESS_METHOD_3_D45E580DE0EE8676_OFFSET UNITYSDK_OFFSET(0x196549E0)
#define RPG_GAMECORE_CLEARWEAKNESS__CTOR_OFFSET UNITYSDK_OFFSET(0x196549B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClearWeakness_TypeDefinitionIndex = 21822;

	class ClearWeakness : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::WeaknessStackOperationType OPType; // 0x20
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* WeakList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARWEAKNESS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_81F2114C3C3CB309(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearWeakness*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearWeakness*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARWEAKNESS_METHOD_3_81F2114C3C3CB309_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D45E580DE0EE8676(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearWeakness* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearWeakness*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARWEAKNESS_METHOD_3_D45E580DE0EE8676_OFFSET))(a1, a2);
		}
	};
}
