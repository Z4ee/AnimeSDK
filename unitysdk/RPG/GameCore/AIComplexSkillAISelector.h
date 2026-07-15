#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AISelector.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ComplexSkillAIConfig; }
namespace System { class String; }

#define RPG_GAMECORE_AICOMPLEXSKILLAISELECTOR_METHOD_3_A89D4A8409FFB675_OFFSET UNITYSDK_OFFSET(0x1B9F2D90)
#define RPG_GAMECORE_AICOMPLEXSKILLAISELECTOR_METHOD_3_D1D1E30EAACDB0DA_OFFSET UNITYSDK_OFFSET(0x1B9F2DD0)
#define RPG_GAMECORE_AICOMPLEXSKILLAISELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9F2DC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AIComplexSkillAISelector_TypeDefinitionIndex = 14996;

	class AIComplexSkillAISelector : public ::RPG::GameCore::AISelector
	{
	public:
		::System::String* UseSourceInSkillConfig; // 0x10
		::RPG::GameCore::ComplexSkillAIConfig* Source; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AICOMPLEXSKILLAISELECTOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A89D4A8409FFB675(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AIComplexSkillAISelector*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AIComplexSkillAISelector*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AICOMPLEXSKILLAISELECTOR_METHOD_3_A89D4A8409FFB675_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D1D1E30EAACDB0DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AIComplexSkillAISelector* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AIComplexSkillAISelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AICOMPLEXSKILLAISELECTOR_METHOD_3_D1D1E30EAACDB0DA_OFFSET))(a1, a2);
		}
	};
}
