#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COMPLEXSKILLAISOURCESPNEEDRATIO_METHOD_3_033ABB0B4FB581DE_OFFSET UNITYSDK_OFFSET(0x171281B0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCESPNEEDRATIO_METHOD_3_0DFB6BCD9A96B967_OFFSET UNITYSDK_OFFSET(0x171294A0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCESPNEEDRATIO__CTOR_OFFSET UNITYSDK_OFFSET(0x17128190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISourceSPNeedRatio_TypeDefinitionIndex = 14228;

	class ComplexSkillAISourceSPNeedRatio : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCESPNEEDRATIO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0DFB6BCD9A96B967(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceSPNeedRatio*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceSPNeedRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCESPNEEDRATIO_METHOD_3_0DFB6BCD9A96B967_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_033ABB0B4FB581DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceSPNeedRatio* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceSPNeedRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCESPNEEDRATIO_METHOD_3_033ABB0B4FB581DE_OFFSET))(a1, a2);
		}
	};
}
