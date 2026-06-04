#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHADVPILLARPUZZLEINTERACTINGPILLAR_METHOD_4_4C9315311E04E857_OFFSET UNITYSDK_OFFSET(0x19D09600)
#define RPG_GAMECORE_TARGETFETCHADVPILLARPUZZLEINTERACTINGPILLAR_METHOD_4_B8B36E8D12AAFB87_OFFSET UNITYSDK_OFFSET(0x19CF5AA0)
#define RPG_GAMECORE_TARGETFETCHADVPILLARPUZZLEINTERACTINGPILLAR_METHOD_4_CFC98184A2818D29_OFFSET UNITYSDK_OFFSET(0x19D09520)
#define RPG_GAMECORE_TARGETFETCHADVPILLARPUZZLEINTERACTINGPILLAR_METHOD_4_E800615ECB1BA35E_OFFSET UNITYSDK_OFFSET(0x19D038E0)
#define RPG_GAMECORE_TARGETFETCHADVPILLARPUZZLEINTERACTINGPILLAR__CTOR_OFFSET UNITYSDK_OFFSET(0x19CF5A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvPillarPuzzleInteractingPillar_TypeDefinitionIndex = 22572;

	class TargetFetchAdvPillarPuzzleInteractingPillar : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVPILLARPUZZLEINTERACTINGPILLAR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CFC98184A2818D29(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvPillarPuzzleInteractingPillar*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvPillarPuzzleInteractingPillar*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVPILLARPUZZLEINTERACTINGPILLAR_METHOD_4_CFC98184A2818D29_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B8B36E8D12AAFB87(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvPillarPuzzleInteractingPillar* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvPillarPuzzleInteractingPillar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVPILLARPUZZLEINTERACTINGPILLAR_METHOD_4_B8B36E8D12AAFB87_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E800615ECB1BA35E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvPillarPuzzleInteractingPillar*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvPillarPuzzleInteractingPillar*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVPILLARPUZZLEINTERACTINGPILLAR_METHOD_4_E800615ECB1BA35E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4C9315311E04E857(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvPillarPuzzleInteractingPillar* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvPillarPuzzleInteractingPillar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVPILLARPUZZLEINTERACTINGPILLAR_METHOD_4_4C9315311E04E857_OFFSET))(a1, a2);
		}
	};
}
