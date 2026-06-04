#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHMAZEBUFFTARGETS_METHOD_4_7C6C9CD30C376383_OFFSET UNITYSDK_OFFSET(0x19D06170)
#define RPG_GAMECORE_TARGETFETCHMAZEBUFFTARGETS_METHOD_4_8F65B389A8CB6D02_OFFSET UNITYSDK_OFFSET(0x19CFA3A0)
#define RPG_GAMECORE_TARGETFETCHMAZEBUFFTARGETS_METHOD_4_C24F50618D262ABA_OFFSET UNITYSDK_OFFSET(0x19D0D750)
#define RPG_GAMECORE_TARGETFETCHMAZEBUFFTARGETS_METHOD_4_CF4F72CA467439B0_OFFSET UNITYSDK_OFFSET(0x19D0D670)
#define RPG_GAMECORE_TARGETFETCHMAZEBUFFTARGETS__CTOR_OFFSET UNITYSDK_OFFSET(0x19CFA350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchMazeBuffTargets_TypeDefinitionIndex = 22617;

	class TargetFetchMazeBuffTargets : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMAZEBUFFTARGETS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CF4F72CA467439B0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchMazeBuffTargets*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchMazeBuffTargets*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMAZEBUFFTARGETS_METHOD_4_CF4F72CA467439B0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8F65B389A8CB6D02(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchMazeBuffTargets* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchMazeBuffTargets*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMAZEBUFFTARGETS_METHOD_4_8F65B389A8CB6D02_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7C6C9CD30C376383(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchMazeBuffTargets*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchMazeBuffTargets*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMAZEBUFFTARGETS_METHOD_4_7C6C9CD30C376383_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C24F50618D262ABA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchMazeBuffTargets* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchMazeBuffTargets*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMAZEBUFFTARGETS_METHOD_4_C24F50618D262ABA_OFFSET))(a1, a2);
		}
	};
}
