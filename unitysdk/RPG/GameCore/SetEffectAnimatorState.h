#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SETEFFECTANIMATORSTATE_METHOD_3_CF8883875D7E62B1_OFFSET UNITYSDK_OFFSET(0x1D4FA900)
#define RPG_GAMECORE_SETEFFECTANIMATORSTATE_METHOD_3_DA0CDE5BB133AA90_OFFSET UNITYSDK_OFFSET(0x1D4FA950)
#define RPG_GAMECORE_SETEFFECTANIMATORSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4FA940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetEffectAnimatorState_TypeDefinitionIndex = 23475;

	class SetEffectAnimatorState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* UniqueEffectName; // 0x18
		::System::String* StateName; // 0x20
		::System::Single TransitionDuration; // 0x28
		::System::Boolean CanReplay; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTANIMATORSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CF8883875D7E62B1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEffectAnimatorState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEffectAnimatorState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTANIMATORSTATE_METHOD_3_CF8883875D7E62B1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DA0CDE5BB133AA90(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEffectAnimatorState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEffectAnimatorState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTANIMATORSTATE_METHOD_3_DA0CDE5BB133AA90_OFFSET))(a1, a2);
		}
	};
}
