#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYCOMPAREMONSTERID_METHOD_4_55E93A0F2EB1E23F_OFFSET UNITYSDK_OFFSET(0x18733A80)
#define RPG_GAMECORE_BYCOMPAREMONSTERID_METHOD_4_6C683C63AB48E4CA_OFFSET UNITYSDK_OFFSET(0x18733BE0)
#define RPG_GAMECORE_BYCOMPAREMONSTERID__CTOR_OFFSET UNITYSDK_OFFSET(0x18733B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareMonsterID_TypeDefinitionIndex = 21922;

	class ByCompareMonsterID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::DynamicFloat* TargetMonsterID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_55E93A0F2EB1E23F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareMonsterID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareMonsterID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERID_METHOD_4_55E93A0F2EB1E23F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6C683C63AB48E4CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareMonsterID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareMonsterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERID_METHOD_4_6C683C63AB48E4CA_OFFSET))(a1, a2);
		}
	};
}
