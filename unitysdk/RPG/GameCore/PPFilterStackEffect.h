#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterPriority.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterPriorityGroup.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_PPFILTERSTACKEFFECT_METHOD_3_114592AE9CE6FD46_OFFSET UNITYSDK_OFFSET(0x1D40F000)
#define RPG_GAMECORE_PPFILTERSTACKEFFECT_METHOD_3_9B64F0A001D1D53A_OFFSET UNITYSDK_OFFSET(0x1D40F090)
#define RPG_GAMECORE_PPFILTERSTACKEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D40F060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PPFilterStackEffect_TypeDefinitionIndex = 20026;

	class PPFilterStackEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean HiendOnly; // 0x18
		::System::Boolean Active; // 0x19
		::RPG::GameCore::PPEffectFilterPriorityGroup PriorityGroup; // 0x1C
		::RPG::GameCore::PPEffectFilterPriority Priority; // 0x20
		::System::Single StartRate; // 0x24
		::System::Single Rate; // 0x28
		::System::Single Duration; // 0x2C
		::System::Single RecoverDuration; // 0x30
		::System::String* AssetPath; // 0x38
		::System::Boolean MuteAudioEvent; // 0x40
		::System::Boolean IsDistanceAttenuationOn; // 0x41
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x48
		::System::UInt32 MaxAttenuationDistance; // 0x50
		::System::Single MaxAttenuationDistanceRate; // 0x54
		::System::Single MinAttenuationDistanceRate; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PPFILTERSTACKEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_114592AE9CE6FD46(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PPFilterStackEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PPFilterStackEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PPFILTERSTACKEFFECT_METHOD_3_114592AE9CE6FD46_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9B64F0A001D1D53A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PPFilterStackEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PPFilterStackEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PPFILTERSTACKEFFECT_METHOD_3_9B64F0A001D1D53A_OFFSET))(a1, a2);
		}
	};
}
