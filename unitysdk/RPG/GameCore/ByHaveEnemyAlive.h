#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHAVEENEMYALIVE_METHOD_4_21CCC867EB8455E2_OFFSET UNITYSDK_OFFSET(0x1A8CDBC0)
#define RPG_GAMECORE_BYHAVEENEMYALIVE_METHOD_4_432414A555F8EAEC_OFFSET UNITYSDK_OFFSET(0x1A8CDBF0)
#define RPG_GAMECORE_BYHAVEENEMYALIVE_METHOD_4_816E012B27BC0810_OFFSET UNITYSDK_OFFSET(0x1A8CD980)
#define RPG_GAMECORE_BYHAVEENEMYALIVE_METHOD_4_9FF5C1DF8303BC75_OFFSET UNITYSDK_OFFSET(0x1A8CD940)
#define RPG_GAMECORE_BYHAVEENEMYALIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8CD970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHaveEnemyAlive_TypeDefinitionIndex = 21733;

	class ByHaveEnemyAlive : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Boolean IncludeUnselectable; // 0x28
		::System::Boolean IncludePuppet; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEENEMYALIVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9FF5C1DF8303BC75(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHaveEnemyAlive*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHaveEnemyAlive*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEENEMYALIVE_METHOD_4_9FF5C1DF8303BC75_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_816E012B27BC0810(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHaveEnemyAlive* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHaveEnemyAlive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEENEMYALIVE_METHOD_4_816E012B27BC0810_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_21CCC867EB8455E2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveEnemyAlive*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveEnemyAlive*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEENEMYALIVE_METHOD_4_21CCC867EB8455E2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_432414A555F8EAEC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveEnemyAlive* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveEnemyAlive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEENEMYALIVE_METHOD_4_432414A555F8EAEC_OFFSET))(a1, a2);
		}
	};
}
