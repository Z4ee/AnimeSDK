#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENABLEFITTOGROUNDIK_METHOD_3_0BBB8EDD905F9CDE_OFFSET UNITYSDK_OFFSET(0x1CDC6E10)
#define RPG_GAMECORE_ADVENABLEFITTOGROUNDIK_METHOD_3_C9207BC014149761_OFFSET UNITYSDK_OFFSET(0x1CDC6E50)
#define RPG_GAMECORE_ADVENABLEFITTOGROUNDIK__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDC6E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvEnableFitToGroundIK_TypeDefinitionIndex = 22153;

	class AdvEnableFitToGroundIK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Enable; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENABLEFITTOGROUNDIK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0BBB8EDD905F9CDE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvEnableFitToGroundIK*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvEnableFitToGroundIK*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENABLEFITTOGROUNDIK_METHOD_3_0BBB8EDD905F9CDE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C9207BC014149761(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvEnableFitToGroundIK* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvEnableFitToGroundIK*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENABLEFITTOGROUNDIK_METHOD_3_C9207BC014149761_OFFSET))(a1, a2);
		}
	};
}
