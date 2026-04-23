#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYCURRENTVCAMERACONFIGCASTER_METHOD_4_4CBA0C5C17D1D227_OFFSET UNITYSDK_OFFSET(0x18744620)
#define RPG_GAMECORE_BYCURRENTVCAMERACONFIGCASTER_METHOD_4_A94DFA45E1886EE9_OFFSET UNITYSDK_OFFSET(0x18744550)
#define RPG_GAMECORE_BYCURRENTVCAMERACONFIGCASTER__CTOR_OFFSET UNITYSDK_OFFSET(0x187445D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCurrentVCameraConfigCaster_TypeDefinitionIndex = 22715;

	class ByCurrentVCameraConfigCaster : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTVCAMERACONFIGCASTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A94DFA45E1886EE9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCurrentVCameraConfigCaster*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCurrentVCameraConfigCaster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTVCAMERACONFIGCASTER_METHOD_4_A94DFA45E1886EE9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4CBA0C5C17D1D227(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCurrentVCameraConfigCaster* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCurrentVCameraConfigCaster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTVCAMERACONFIGCASTER_METHOD_4_4CBA0C5C17D1D227_OFFSET))(a1, a2);
		}
	};
}
