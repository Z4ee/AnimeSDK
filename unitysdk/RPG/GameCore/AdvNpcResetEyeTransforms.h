#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVNPCRESETEYETRANSFORMS_METHOD_3_1BC9914B570A3433_OFFSET UNITYSDK_OFFSET(0x1865B6C0)
#define RPG_GAMECORE_ADVNPCRESETEYETRANSFORMS_METHOD_3_C823DCC58EB852D7_OFFSET UNITYSDK_OFFSET(0x1865B740)
#define RPG_GAMECORE_ADVNPCRESETEYETRANSFORMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1865B710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNpcResetEyeTransforms_TypeDefinitionIndex = 21307;

	class AdvNpcResetEyeTransforms : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Enable; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCRESETEYETRANSFORMS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1BC9914B570A3433(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNpcResetEyeTransforms*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNpcResetEyeTransforms*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCRESETEYETRANSFORMS_METHOD_3_1BC9914B570A3433_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C823DCC58EB852D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNpcResetEyeTransforms* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNpcResetEyeTransforms*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCRESETEYETRANSFORMS_METHOD_3_C823DCC58EB852D7_OFFSET))(a1, a2);
		}
	};
}
