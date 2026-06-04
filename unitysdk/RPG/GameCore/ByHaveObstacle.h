#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHAVEOBSTACLE_METHOD_4_3A1CE2DF91184804_OFFSET UNITYSDK_OFFSET(0x19553ED0)
#define RPG_GAMECORE_BYHAVEOBSTACLE_METHOD_4_757A738AF90CC374_OFFSET UNITYSDK_OFFSET(0x19553E00)
#define RPG_GAMECORE_BYHAVEOBSTACLE_METHOD_4_8A2EAB64127414EA_OFFSET UNITYSDK_OFFSET(0x19554090)
#define RPG_GAMECORE_BYHAVEOBSTACLE_METHOD_4_C4349306826E6A69_OFFSET UNITYSDK_OFFSET(0x19554110)
#define RPG_GAMECORE_BYHAVEOBSTACLE__CTOR_OFFSET UNITYSDK_OFFSET(0x19553E80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHaveObstacle_TypeDefinitionIndex = 18911;

	class ByHaveObstacle : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* From; // 0x20
		::RPG::GameCore::TargetEvaluator* To; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEOBSTACLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_757A738AF90CC374(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHaveObstacle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHaveObstacle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEOBSTACLE_METHOD_4_757A738AF90CC374_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3A1CE2DF91184804(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHaveObstacle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHaveObstacle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEOBSTACLE_METHOD_4_3A1CE2DF91184804_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8A2EAB64127414EA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveObstacle*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveObstacle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEOBSTACLE_METHOD_4_8A2EAB64127414EA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C4349306826E6A69(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveObstacle* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveObstacle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEOBSTACLE_METHOD_4_C4349306826E6A69_OFFSET))(a1, a2);
		}
	};
}
