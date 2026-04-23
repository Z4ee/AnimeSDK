#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConsiderationAxisConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COMPLEXSKILLAIAXIS_METHOD_3_56D3AEF9BC85ECED_OFFSET UNITYSDK_OFFSET(0x18828830)
#define RPG_GAMECORE_COMPLEXSKILLAIAXIS_METHOD_3_A24344F099036F08_OFFSET UNITYSDK_OFFSET(0x188288B0)
#define RPG_GAMECORE_COMPLEXSKILLAIAXIS__CTOR_OFFSET UNITYSDK_OFFSET(0x188288A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAIAxis_TypeDefinitionIndex = 14683;

	class ComplexSkillAIAxis : public ::RPG::GameCore::ConsiderationAxisConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIAXIS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_56D3AEF9BC85ECED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAIAxis*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAIAxis*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIAXIS_METHOD_3_56D3AEF9BC85ECED_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A24344F099036F08(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAIAxis* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAIAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIAXIS_METHOD_3_A24344F099036F08_OFFSET))(a1, a2);
		}
	};
}
