#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETENTITYFORCEVISIBLE_METHOD_3_E73A19A77FEB1BD6_OFFSET UNITYSDK_OFFSET(0x176CBBD0)
#define RPG_GAMECORE_SETENTITYFORCEVISIBLE_METHOD_3_FBEB0ED19959FE0C_OFFSET UNITYSDK_OFFSET(0x176CBB50)
#define RPG_GAMECORE_SETENTITYFORCEVISIBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x176CBBA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetEntityForceVisible_TypeDefinitionIndex = 18911;

	class SetEntityForceVisible : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean ForceVisible; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYFORCEVISIBLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FBEB0ED19959FE0C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEntityForceVisible*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEntityForceVisible*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYFORCEVISIBLE_METHOD_3_FBEB0ED19959FE0C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E73A19A77FEB1BD6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEntityForceVisible* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEntityForceVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYFORCEVISIBLE_METHOD_3_E73A19A77FEB1BD6_OFFSET))(a1, a2);
		}
	};
}
