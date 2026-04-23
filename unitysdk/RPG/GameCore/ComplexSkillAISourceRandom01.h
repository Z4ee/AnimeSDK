#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COMPLEXSKILLAISOURCERANDOM01_METHOD_3_63DD53EA7040E979_OFFSET UNITYSDK_OFFSET(0x1882E9E0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCERANDOM01_METHOD_3_E6E758526A2FC6C5_OFFSET UNITYSDK_OFFSET(0x18830110)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCERANDOM01__CTOR_OFFSET UNITYSDK_OFFSET(0x1882E9C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISourceRandom01_TypeDefinitionIndex = 14719;

	class ComplexSkillAISourceRandom01 : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::System::Boolean FromRecord; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCERANDOM01__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E6E758526A2FC6C5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceRandom01*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceRandom01*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCERANDOM01_METHOD_3_E6E758526A2FC6C5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_63DD53EA7040E979(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceRandom01* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceRandom01*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCERANDOM01_METHOD_3_63DD53EA7040E979_OFFSET))(a1, a2);
		}
	};
}
