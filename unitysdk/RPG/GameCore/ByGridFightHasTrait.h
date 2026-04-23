#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYGRIDFIGHTHASTRAIT_METHOD_4_35D60AA6B27A7C79_OFFSET UNITYSDK_OFFSET(0x187475E0)
#define RPG_GAMECORE_BYGRIDFIGHTHASTRAIT_METHOD_4_946F750F9C3A0BCF_OFFSET UNITYSDK_OFFSET(0x187476C0)
#define RPG_GAMECORE_BYGRIDFIGHTHASTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x18747660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByGridFightHasTrait_TypeDefinitionIndex = 21409;

	class ByGridFightHasTrait : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::DynamicString* TeamTrait; // 0x28
		::System::Boolean IncludeOtherEffect; // 0x30
		::System::Boolean IncludeInactiveTrait; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTHASTRAIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_35D60AA6B27A7C79(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByGridFightHasTrait*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByGridFightHasTrait*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTHASTRAIT_METHOD_4_35D60AA6B27A7C79_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_946F750F9C3A0BCF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByGridFightHasTrait* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByGridFightHasTrait*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTHASTRAIT_METHOD_4_946F750F9C3A0BCF_OFFSET))(a1, a2);
		}
	};
}
