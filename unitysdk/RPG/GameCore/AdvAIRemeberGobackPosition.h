#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVAIREMEBERGOBACKPOSITION_METHOD_3_16C40D1C16570335_OFFSET UNITYSDK_OFFSET(0x1BE0C350)
#define RPG_GAMECORE_ADVAIREMEBERGOBACKPOSITION_METHOD_3_A367BBE3CABD57FD_OFFSET UNITYSDK_OFFSET(0x1BE0C3D0)
#define RPG_GAMECORE_ADVAIREMEBERGOBACKPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE0C3A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvAIRemeberGobackPosition_TypeDefinitionIndex = 19229;

	class AdvAIRemeberGobackPosition : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVAIREMEBERGOBACKPOSITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_16C40D1C16570335(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvAIRemeberGobackPosition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvAIRemeberGobackPosition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVAIREMEBERGOBACKPOSITION_METHOD_3_16C40D1C16570335_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A367BBE3CABD57FD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvAIRemeberGobackPosition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvAIRemeberGobackPosition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVAIREMEBERGOBACKPOSITION_METHOD_3_A367BBE3CABD57FD_OFFSET))(a1, a2);
		}
	};
}
