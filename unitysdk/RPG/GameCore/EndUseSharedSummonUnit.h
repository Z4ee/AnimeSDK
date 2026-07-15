#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ENDUSESHAREDSUMMONUNIT_METHOD_3_37DF8488625024DA_OFFSET UNITYSDK_OFFSET(0x1C04FFB0)
#define RPG_GAMECORE_ENDUSESHAREDSUMMONUNIT_METHOD_3_4F0D2BF91D249351_OFFSET UNITYSDK_OFFSET(0x1C04FF70)
#define RPG_GAMECORE_ENDUSESHAREDSUMMONUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C04FFA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EndUseSharedSummonUnit_TypeDefinitionIndex = 20368;

	class EndUseSharedSummonUnit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SummonUnit; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENDUSESHAREDSUMMONUNIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4F0D2BF91D249351(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EndUseSharedSummonUnit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EndUseSharedSummonUnit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENDUSESHAREDSUMMONUNIT_METHOD_3_4F0D2BF91D249351_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_37DF8488625024DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EndUseSharedSummonUnit* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EndUseSharedSummonUnit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENDUSESHAREDSUMMONUNIT_METHOD_3_37DF8488625024DA_OFFSET))(a1, a2);
		}
	};
}
