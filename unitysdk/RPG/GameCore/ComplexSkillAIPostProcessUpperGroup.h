#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIPostProcess.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIValueCompareType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESSUPPERGROUP_METHOD_3_42E81117D20917AE_OFFSET UNITYSDK_OFFSET(0x171244C0)
#define RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESSUPPERGROUP_METHOD_3_FDAF493017918F69_OFFSET UNITYSDK_OFFSET(0x17124750)
#define RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESSUPPERGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x171244B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAIPostProcessUpperGroup_TypeDefinitionIndex = 14259;

	class ComplexSkillAIPostProcessUpperGroup : public ::RPG::GameCore::ComplexSkillAIPostProcess
	{
	public:
		::RPG::GameCore::ComplexSkillAIValueCompareType CompareType; // 0x10
		::RPG::GameCore::FixPoint CompareValue; // 0x18
		::System::String* AIUpperGroupPriority; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESSUPPERGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FDAF493017918F69(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAIPostProcessUpperGroup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAIPostProcessUpperGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESSUPPERGROUP_METHOD_3_FDAF493017918F69_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_42E81117D20917AE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAIPostProcessUpperGroup* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAIPostProcessUpperGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESSUPPERGROUP_METHOD_3_42E81117D20917AE_OFFSET))(a1, a2);
		}
	};
}
