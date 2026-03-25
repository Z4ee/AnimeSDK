#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENABLEFITTOGROUNDIK_METHOD_3_7643A0E367ABDB4D_OFFSET UNITYSDK_OFFSET(0x16F2BD00)
#define RPG_GAMECORE_ADVENABLEFITTOGROUNDIK_METHOD_3_C9207BC014149761_OFFSET UNITYSDK_OFFSET(0x16F2BD80)
#define RPG_GAMECORE_ADVENABLEFITTOGROUNDIK__CTOR_OFFSET UNITYSDK_OFFSET(0x16F2BD50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvEnableFitToGroundIK_TypeDefinitionIndex = 20598;

	class AdvEnableFitToGroundIK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Enable; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENABLEFITTOGROUNDIK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7643A0E367ABDB4D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvEnableFitToGroundIK*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvEnableFitToGroundIK*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENABLEFITTOGROUNDIK_METHOD_3_7643A0E367ABDB4D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C9207BC014149761(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvEnableFitToGroundIK* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvEnableFitToGroundIK*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENABLEFITTOGROUNDIK_METHOD_3_C9207BC014149761_OFFSET))(a1, a2);
		}
	};
}
