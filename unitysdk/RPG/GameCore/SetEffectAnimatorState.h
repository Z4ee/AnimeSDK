#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SETEFFECTANIMATORSTATE_METHOD_3_012C3FC00FA16698_OFFSET UNITYSDK_OFFSET(0x18E2CB60)
#define RPG_GAMECORE_SETEFFECTANIMATORSTATE_METHOD_3_0FC791D78057ED6B_OFFSET UNITYSDK_OFFSET(0x18E2CBE0)
#define RPG_GAMECORE_SETEFFECTANIMATORSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18E2CBB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetEffectAnimatorState_TypeDefinitionIndex = 22734;

	class SetEffectAnimatorState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* UniqueEffectName; // 0x18
		::System::String* StateName; // 0x20
		::System::Single TransitionDuration; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTANIMATORSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_012C3FC00FA16698(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEffectAnimatorState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEffectAnimatorState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTANIMATORSTATE_METHOD_3_012C3FC00FA16698_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0FC791D78057ED6B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEffectAnimatorState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEffectAnimatorState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTANIMATORSTATE_METHOD_3_0FC791D78057ED6B_OFFSET))(a1, a2);
		}
	};
}
