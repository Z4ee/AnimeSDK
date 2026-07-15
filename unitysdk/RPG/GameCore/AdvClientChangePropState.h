#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVCLIENTCHANGEPROPSTATE_METHOD_3_59BA1BE9BD6269CF_OFFSET UNITYSDK_OFFSET(0x1BE18160)
#define RPG_GAMECORE_ADVCLIENTCHANGEPROPSTATE_METHOD_3_EBE6D64849450460_OFFSET UNITYSDK_OFFSET(0x1BE180E0)
#define RPG_GAMECORE_ADVCLIENTCHANGEPROPSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE18130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvClientChangePropState_TypeDefinitionIndex = 19673;

	class AdvClientChangePropState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::PropState FromState; // 0x20
		::RPG::GameCore::PropState ToState; // 0x24
		::System::Boolean CanChangeServerProp; // 0x28
		::System::Boolean CanChangeFromAnyState; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCLIENTCHANGEPROPSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EBE6D64849450460(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvClientChangePropState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvClientChangePropState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCLIENTCHANGEPROPSTATE_METHOD_3_EBE6D64849450460_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_59BA1BE9BD6269CF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvClientChangePropState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvClientChangePropState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCLIENTCHANGEPROPSTATE_METHOD_3_59BA1BE9BD6269CF_OFFSET))(a1, a2);
		}
	};
}
