#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYTARGETLISTINTERSECTS_METHOD_4_29FAD52C2EF38E18_OFFSET UNITYSDK_OFFSET(0x1CDC9660)
#define RPG_GAMECORE_BYTARGETLISTINTERSECTS_METHOD_4_5D555C30D15ED682_OFFSET UNITYSDK_OFFSET(0x1CDC93A0)
#define RPG_GAMECORE_BYTARGETLISTINTERSECTS_METHOD_4_77A936BA3C13583B_OFFSET UNITYSDK_OFFSET(0x1CDC9350)
#define RPG_GAMECORE_BYTARGETLISTINTERSECTS_METHOD_4_8C67894B6BB31907_OFFSET UNITYSDK_OFFSET(0x1CDC9620)
#define RPG_GAMECORE_BYTARGETLISTINTERSECTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDC9390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTargetListIntersects_TypeDefinitionIndex = 23529;

	class ByTargetListIntersects : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* FirstTargetType; // 0x20
		::System::Boolean FirstTargetAliveOnly; // 0x28
		::RPG::GameCore::TargetEvaluator* SecondTargetType; // 0x30
		::System::Boolean SecondTargetAliveOnly; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLISTINTERSECTS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_77A936BA3C13583B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetListIntersects*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetListIntersects*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLISTINTERSECTS_METHOD_4_77A936BA3C13583B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5D555C30D15ED682(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetListIntersects* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetListIntersects*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLISTINTERSECTS_METHOD_4_5D555C30D15ED682_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8C67894B6BB31907(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetListIntersects*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetListIntersects*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLISTINTERSECTS_METHOD_4_8C67894B6BB31907_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_29FAD52C2EF38E18(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetListIntersects* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetListIntersects*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLISTINTERSECTS_METHOD_4_29FAD52C2EF38E18_OFFSET))(a1, a2);
		}
	};
}
