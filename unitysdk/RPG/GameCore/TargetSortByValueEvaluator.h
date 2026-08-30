#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETSORTBYVALUEEVALUATOR_METHOD_3_1833629C0ACDAC9F_OFFSET UNITYSDK_OFFSET(0x1D5BBD40)
#define RPG_GAMECORE_TARGETSORTBYVALUEEVALUATOR_METHOD_3_B700F9739D9B80BB_OFFSET UNITYSDK_OFFSET(0x1D5BBBD0)
#define RPG_GAMECORE_TARGETSORTBYVALUEEVALUATOR_METHOD_3_DD314C2A7CE3C679_OFFSET UNITYSDK_OFFSET(0x1D5BBD10)
#define RPG_GAMECORE_TARGETSORTBYVALUEEVALUATOR_METHOD_3_E74B831820E0C118_OFFSET UNITYSDK_OFFSET(0x1D5BBC10)
#define RPG_GAMECORE_TARGETSORTBYVALUEEVALUATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5BBC00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortByValueEvaluator_TypeDefinitionIndex = 23705;

	class TargetSortByValueEvaluator : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean HighestFirst; // 0x10
		::RPG::GameCore::ValueEvaluatorConfig* Evaluator; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYVALUEEVALUATOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B700F9739D9B80BB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByValueEvaluator*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByValueEvaluator*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYVALUEEVALUATOR_METHOD_3_B700F9739D9B80BB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E74B831820E0C118(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByValueEvaluator* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByValueEvaluator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYVALUEEVALUATOR_METHOD_3_E74B831820E0C118_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DD314C2A7CE3C679(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByValueEvaluator*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByValueEvaluator*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYVALUEEVALUATOR_METHOD_3_DD314C2A7CE3C679_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1833629C0ACDAC9F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByValueEvaluator* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByValueEvaluator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYVALUEEVALUATOR_METHOD_3_1833629C0ACDAC9F_OFFSET))(a1, a2);
		}
	};
}
