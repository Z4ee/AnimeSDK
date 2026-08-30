#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETMONSTERHPTOTALSEG_METHOD_3_BA2C3602F97BFBDF_OFFSET UNITYSDK_OFFSET(0x1D5077C0)
#define RPG_GAMECORE_SETMONSTERHPTOTALSEG_METHOD_3_D2EEDCF5ACE0519C_OFFSET UNITYSDK_OFFSET(0x1D507720)
#define RPG_GAMECORE_SETMONSTERHPTOTALSEG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D507780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetMonsterHPTotalSeg_TypeDefinitionIndex = 22884;

	class SetMonsterHPTotalSeg : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* TotalSeg; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERHPTOTALSEG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D2EEDCF5ACE0519C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMonsterHPTotalSeg*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMonsterHPTotalSeg*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERHPTOTALSEG_METHOD_3_D2EEDCF5ACE0519C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BA2C3602F97BFBDF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMonsterHPTotalSeg* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMonsterHPTotalSeg*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERHPTOTALSEG_METHOD_3_BA2C3602F97BFBDF_OFFSET))(a1, a2);
		}
	};
}
