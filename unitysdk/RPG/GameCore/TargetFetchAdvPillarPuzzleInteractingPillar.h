#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHADVPILLARPUZZLEINTERACTINGPILLAR_METHOD_4_0743B1D3A50B6416_OFFSET UNITYSDK_OFFSET(0x1D5A5CF0)
#define RPG_GAMECORE_TARGETFETCHADVPILLARPUZZLEINTERACTINGPILLAR_METHOD_4_09118ACE54583013_OFFSET UNITYSDK_OFFSET(0x1D5A5DF0)
#define RPG_GAMECORE_TARGETFETCHADVPILLARPUZZLEINTERACTINGPILLAR_METHOD_4_4C9315311E04E857_OFFSET UNITYSDK_OFFSET(0x1D5A5E30)
#define RPG_GAMECORE_TARGETFETCHADVPILLARPUZZLEINTERACTINGPILLAR_METHOD_4_B8B36E8D12AAFB87_OFFSET UNITYSDK_OFFSET(0x1D5A5D90)
#define RPG_GAMECORE_TARGETFETCHADVPILLARPUZZLEINTERACTINGPILLAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A5D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvPillarPuzzleInteractingPillar_TypeDefinitionIndex = 23615;

	class TargetFetchAdvPillarPuzzleInteractingPillar : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVPILLARPUZZLEINTERACTINGPILLAR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0743B1D3A50B6416(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvPillarPuzzleInteractingPillar*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvPillarPuzzleInteractingPillar*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVPILLARPUZZLEINTERACTINGPILLAR_METHOD_4_0743B1D3A50B6416_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B8B36E8D12AAFB87(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvPillarPuzzleInteractingPillar* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvPillarPuzzleInteractingPillar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVPILLARPUZZLEINTERACTINGPILLAR_METHOD_4_B8B36E8D12AAFB87_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_09118ACE54583013(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvPillarPuzzleInteractingPillar*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvPillarPuzzleInteractingPillar*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVPILLARPUZZLEINTERACTINGPILLAR_METHOD_4_09118ACE54583013_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4C9315311E04E857(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvPillarPuzzleInteractingPillar* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvPillarPuzzleInteractingPillar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVPILLARPUZZLEINTERACTINGPILLAR_METHOD_4_4C9315311E04E857_OFFSET))(a1, a2);
		}
	};
}
