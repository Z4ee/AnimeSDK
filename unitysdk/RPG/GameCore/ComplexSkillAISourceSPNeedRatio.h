#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COMPLEXSKILLAISOURCESPNEEDRATIO_METHOD_3_033ABB0B4FB581DE_OFFSET UNITYSDK_OFFSET(0x1D9ACC70)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCESPNEEDRATIO_METHOD_3_CCAF59E8148CBA4F_OFFSET UNITYSDK_OFFSET(0x1D9ACBF0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCESPNEEDRATIO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9ACC60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISourceSPNeedRatio_TypeDefinitionIndex = 15359;

	class ComplexSkillAISourceSPNeedRatio : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCESPNEEDRATIO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CCAF59E8148CBA4F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceSPNeedRatio*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceSPNeedRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCESPNEEDRATIO_METHOD_3_CCAF59E8148CBA4F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_033ABB0B4FB581DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceSPNeedRatio* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceSPNeedRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCESPNEEDRATIO_METHOD_3_033ABB0B4FB581DE_OFFSET))(a1, a2);
		}
	};
}
