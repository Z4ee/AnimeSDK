#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTTARGETMAPGRIDNEARBY_METHOD_3_1E14F88753C23D3D_OFFSET UNITYSDK_OFFSET(0x1D4B68C0)
#define RPG_GAMECORE_RTTARGETMAPGRIDNEARBY_METHOD_3_DA84216489C95BD9_OFFSET UNITYSDK_OFFSET(0x1D4B6A30)
#define RPG_GAMECORE_RTTARGETMAPGRIDNEARBY_METHOD_3_DF6B2FA767B69C69_OFFSET UNITYSDK_OFFSET(0x1D4B6D30)
#define RPG_GAMECORE_RTTARGETMAPGRIDNEARBY_METHOD_3_E149D78A030C0661_OFFSET UNITYSDK_OFFSET(0x1D4B6C50)
#define RPG_GAMECORE_RTTARGETMAPGRIDNEARBY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4B69A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetMapGridNearby_TypeDefinitionIndex = 23979;

	class RtTargetMapGridNearby : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::RPG::GameCore::PredicateConfig* GridFilter; // 0x10
		::RPG::GameCore::DynamicFloat* MaxDistance; // 0x18
		::RPG::GameCore::DynamicFloat* Count; // 0x20
		::System::Boolean ByRandom; // 0x28
		::RPG::GameCore::ValueEvaluatorConfig* GridEvaluator; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPGRIDNEARBY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1E14F88753C23D3D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetMapGridNearby*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetMapGridNearby*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPGRIDNEARBY_METHOD_3_1E14F88753C23D3D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DA84216489C95BD9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetMapGridNearby* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetMapGridNearby*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPGRIDNEARBY_METHOD_3_DA84216489C95BD9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E149D78A030C0661(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapGridNearby*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapGridNearby*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPGRIDNEARBY_METHOD_3_E149D78A030C0661_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DF6B2FA767B69C69(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapGridNearby* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapGridNearby*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPGRIDNEARBY_METHOD_3_DF6B2FA767B69C69_OFFSET))(a1, a2);
		}
	};
}
