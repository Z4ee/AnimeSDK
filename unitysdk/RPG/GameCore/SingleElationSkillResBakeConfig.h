#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EffectDurationConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SINGLEELATIONSKILLRESBAKECONFIG_METHOD_2_017041355F7C712F_OFFSET UNITYSDK_OFFSET(0x1D0A0E40)
#define RPG_GAMECORE_SINGLEELATIONSKILLRESBAKECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0A10A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SingleElationSkillResBakeConfig_TypeDefinitionIndex = 16173;

	class SingleElationSkillResBakeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* SkillName; // 0x10
		::System::String* AnimName; // 0x18
		::System::Single AnimDuration; // 0x20
		::System::String* TimelinePath; // 0x28
		::System::Single TimelineDuration; // 0x30
		::Il2CppArray<::RPG::GameCore::EffectDurationConfig*>* EffectDurations; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SINGLEELATIONSKILLRESBAKECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_017041355F7C712F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SingleElationSkillResBakeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SingleElationSkillResBakeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SINGLEELATIONSKILLRESBAKECONFIG_METHOD_2_017041355F7C712F_OFFSET))(a1, a2);
		}
	};
}
