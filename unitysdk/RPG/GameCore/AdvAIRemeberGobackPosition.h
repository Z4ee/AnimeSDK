#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVAIREMEBERGOBACKPOSITION_METHOD_3_5D0BC922786868EB_OFFSET UNITYSDK_OFFSET(0x186458B0)
#define RPG_GAMECORE_ADVAIREMEBERGOBACKPOSITION_METHOD_3_A367BBE3CABD57FD_OFFSET UNITYSDK_OFFSET(0x18645A00)
#define RPG_GAMECORE_ADVAIREMEBERGOBACKPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x18645970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvAIRemeberGobackPosition_TypeDefinitionIndex = 18925;

	class AdvAIRemeberGobackPosition : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVAIREMEBERGOBACKPOSITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5D0BC922786868EB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvAIRemeberGobackPosition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvAIRemeberGobackPosition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVAIREMEBERGOBACKPOSITION_METHOD_3_5D0BC922786868EB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A367BBE3CABD57FD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvAIRemeberGobackPosition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvAIRemeberGobackPosition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVAIREMEBERGOBACKPOSITION_METHOD_3_A367BBE3CABD57FD_OFFSET))(a1, a2);
		}
	};
}
