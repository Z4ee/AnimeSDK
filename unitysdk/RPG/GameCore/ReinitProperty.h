#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_REINITPROPERTY_METHOD_3_253D2C2880F2C502_OFFSET UNITYSDK_OFFSET(0x1D3910A0)
#define RPG_GAMECORE_REINITPROPERTY_METHOD_3_63E3DA683202C6B2_OFFSET UNITYSDK_OFFSET(0x1D391060)
#define RPG_GAMECORE_REINITPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D391090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ReinitProperty_TypeDefinitionIndex = 23296;

	class ReinitProperty : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::AbilityProperty Property; // 0x20
		::RPG::GameCore::DynamicFloat* InitValue; // 0x28
		::RPG::GameCore::DynamicFloat* MinValue; // 0x30
		::RPG::GameCore::DynamicFloat* MaxValue; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REINITPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_63E3DA683202C6B2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ReinitProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ReinitProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REINITPROPERTY_METHOD_3_63E3DA683202C6B2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_253D2C2880F2C502(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ReinitProperty* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ReinitProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REINITPROPERTY_METHOD_3_253D2C2880F2C502_OFFSET))(a1, a2);
		}
	};
}
