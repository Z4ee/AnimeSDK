#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/SkillAutoLockType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ComplexSkillAIConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SKILLEXTENSIONCOMPLEXSKILLAICONFIG_METHOD_2_A4B21FB8E2031F0C_OFFSET UNITYSDK_OFFSET(0x1770EA60)
#define RPG_GAMECORE_SKILLEXTENSIONCOMPLEXSKILLAICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1770EC70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillExtensionComplexSkillAIConfig_TypeDefinitionIndex = 14266;

	class SkillExtensionComplexSkillAIConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean AlwaysDoAutoLock; // 0x10
		::RPG::GameCore::SkillAutoLockType AutoLockType; // 0x14
		::RPG::GameCore::ComplexSkillAIConfig* AutoLockBySource; // 0x18
		::RPG::GameCore::ComplexSkillAIConfig* ComplexSkillAIPreCheck; // 0x20
		::RPG::GameCore::ComplexSkillAIConfig* ComplexSkillAI; // 0x28
		::System::String* AIUltraSkillPriority; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLEXTENSIONCOMPLEXSKILLAICONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A4B21FB8E2031F0C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SkillExtensionComplexSkillAIConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SkillExtensionComplexSkillAIConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLEXTENSIONCOMPLEXSKILLAICONFIG_METHOD_2_A4B21FB8E2031F0C_OFFSET))(a1, a2);
		}
	};
}
