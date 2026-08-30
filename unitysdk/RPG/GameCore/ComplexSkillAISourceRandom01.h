#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COMPLEXSKILLAISOURCERANDOM01_METHOD_3_63DD53EA7040E979_OFFSET UNITYSDK_OFFSET(0x1D9AC940)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCERANDOM01_METHOD_3_66250C00B692A47C_OFFSET UNITYSDK_OFFSET(0x1D9AC860)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCERANDOM01__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9AC930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISourceRandom01_TypeDefinitionIndex = 15380;

	class ComplexSkillAISourceRandom01 : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::System::Boolean FromRecord; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCERANDOM01__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_66250C00B692A47C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceRandom01*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceRandom01*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCERANDOM01_METHOD_3_66250C00B692A47C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_63DD53EA7040E979(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceRandom01* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceRandom01*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCERANDOM01_METHOD_3_63DD53EA7040E979_OFFSET))(a1, a2);
		}
	};
}
