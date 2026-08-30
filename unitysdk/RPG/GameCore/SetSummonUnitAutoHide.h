#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETSUMMONUNITAUTOHIDE_METHOD_3_5A1EBB4F43C02290_OFFSET UNITYSDK_OFFSET(0x1E08F210)
#define RPG_GAMECORE_SETSUMMONUNITAUTOHIDE_METHOD_3_CA266A38121A477F_OFFSET UNITYSDK_OFFSET(0x1E08F1C0)
#define RPG_GAMECORE_SETSUMMONUNITAUTOHIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E08F200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetSummonUnitAutoHide_TypeDefinitionIndex = 19927;

	class SetSummonUnitAutoHide : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SummonUnit; // 0x18
		::System::Boolean AutoHide; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSUMMONUNITAUTOHIDE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CA266A38121A477F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetSummonUnitAutoHide*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetSummonUnitAutoHide*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSUMMONUNITAUTOHIDE_METHOD_3_CA266A38121A477F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5A1EBB4F43C02290(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetSummonUnitAutoHide* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetSummonUnitAutoHide*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSUMMONUNITAUTOHIDE_METHOD_3_5A1EBB4F43C02290_OFFSET))(a1, a2);
		}
	};
}
