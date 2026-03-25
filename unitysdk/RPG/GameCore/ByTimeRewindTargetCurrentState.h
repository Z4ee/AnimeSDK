#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/TimeRewindState.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYTIMEREWINDTARGETCURRENTSTATE_METHOD_4_259673E560D87CE1_OFFSET UNITYSDK_OFFSET(0x1703E290)
#define RPG_GAMECORE_BYTIMEREWINDTARGETCURRENTSTATE_METHOD_4_B72B7CE29FB8A4AD_OFFSET UNITYSDK_OFFSET(0x1703E1C0)
#define RPG_GAMECORE_BYTIMEREWINDTARGETCURRENTSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1703E240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTimeRewindTargetCurrentState_TypeDefinitionIndex = 18987;

	class ByTimeRewindTargetCurrentState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x20
		::RPG::GameCore::TimeRewindState CurrentState; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTIMEREWINDTARGETCURRENTSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B72B7CE29FB8A4AD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTimeRewindTargetCurrentState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTimeRewindTargetCurrentState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTIMEREWINDTARGETCURRENTSTATE_METHOD_4_B72B7CE29FB8A4AD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_259673E560D87CE1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTimeRewindTargetCurrentState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTimeRewindTargetCurrentState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTIMEREWINDTARGETCURRENTSTATE_METHOD_4_259673E560D87CE1_OFFSET))(a1, a2);
		}
	};
}
