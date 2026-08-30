#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/TimeRewindState.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYTIMEREWINDTARGETCURRENTSTATE_METHOD_4_259673E560D87CE1_OFFSET UNITYSDK_OFFSET(0x1CF67190)
#define RPG_GAMECORE_BYTIMEREWINDTARGETCURRENTSTATE_METHOD_4_77B9EB333AE85F5A_OFFSET UNITYSDK_OFFSET(0x1CF673C0)
#define RPG_GAMECORE_BYTIMEREWINDTARGETCURRENTSTATE_METHOD_4_8B83FA00468ADE50_OFFSET UNITYSDK_OFFSET(0x1CF67150)
#define RPG_GAMECORE_BYTIMEREWINDTARGETCURRENTSTATE_METHOD_4_F750F2EFA9842DCC_OFFSET UNITYSDK_OFFSET(0x1CF67390)
#define RPG_GAMECORE_BYTIMEREWINDTARGETCURRENTSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF67180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTimeRewindTargetCurrentState_TypeDefinitionIndex = 20432;

	class ByTimeRewindTargetCurrentState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x20
		::RPG::GameCore::TimeRewindState CurrentState; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTIMEREWINDTARGETCURRENTSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8B83FA00468ADE50(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTimeRewindTargetCurrentState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTimeRewindTargetCurrentState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTIMEREWINDTARGETCURRENTSTATE_METHOD_4_8B83FA00468ADE50_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_259673E560D87CE1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTimeRewindTargetCurrentState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTimeRewindTargetCurrentState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTIMEREWINDTARGETCURRENTSTATE_METHOD_4_259673E560D87CE1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F750F2EFA9842DCC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTimeRewindTargetCurrentState*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTimeRewindTargetCurrentState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTIMEREWINDTARGETCURRENTSTATE_METHOD_4_F750F2EFA9842DCC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_77B9EB333AE85F5A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTimeRewindTargetCurrentState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTimeRewindTargetCurrentState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTIMEREWINDTARGETCURRENTSTATE_METHOD_4_77B9EB333AE85F5A_OFFSET))(a1, a2);
		}
	};
}
