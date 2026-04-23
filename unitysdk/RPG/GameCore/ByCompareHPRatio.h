#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYCOMPAREHPRATIO_METHOD_4_1576F02E1FFDD53B_OFFSET UNITYSDK_OFFSET(0x1872F6F0)
#define RPG_GAMECORE_BYCOMPAREHPRATIO_METHOD_4_5BAAA37E5C859879_OFFSET UNITYSDK_OFFSET(0x1872F7C0)
#define RPG_GAMECORE_BYCOMPAREHPRATIO__CTOR_OFFSET UNITYSDK_OFFSET(0x1872F770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareHPRatio_TypeDefinitionIndex = 21918;

	class ByCompareHPRatio : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x28
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHPRATIO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1576F02E1FFDD53B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareHPRatio*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareHPRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHPRATIO_METHOD_4_1576F02E1FFDD53B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5BAAA37E5C859879(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareHPRatio* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareHPRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHPRATIO_METHOD_4_5BAAA37E5C859879_OFFSET))(a1, a2);
		}
	};
}
