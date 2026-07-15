#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTTARGETMAPENTITYINGRID_METHOD_3_0B691A46FC7E6B9B_OFFSET UNITYSDK_OFFSET(0x1B76F420)
#define RPG_GAMECORE_RTTARGETMAPENTITYINGRID_METHOD_3_76C05291B0A2FF7D_OFFSET UNITYSDK_OFFSET(0x1B76F3C0)
#define RPG_GAMECORE_RTTARGETMAPENTITYINGRID_METHOD_3_9979BEFBAB552974_OFFSET UNITYSDK_OFFSET(0x1B76F280)
#define RPG_GAMECORE_RTTARGETMAPENTITYINGRID_METHOD_3_B912AD69B2B52B0A_OFFSET UNITYSDK_OFFSET(0x1B76F210)
#define RPG_GAMECORE_RTTARGETMAPENTITYINGRID__CTOR_OFFSET UNITYSDK_OFFSET(0x1B76F270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetMapEntityInGrid_TypeDefinitionIndex = 23402;

	class RtTargetMapEntityInGrid : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::RPG::GameCore::EntityTypeMask EntityTypeMask; // 0x10
		::RPG::GameCore::AliveStateMask AliveStateMask; // 0x18
		::RPG::GameCore::PredicateConfig* Predicate; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPENTITYINGRID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B912AD69B2B52B0A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetMapEntityInGrid*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetMapEntityInGrid*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPENTITYINGRID_METHOD_3_B912AD69B2B52B0A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9979BEFBAB552974(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetMapEntityInGrid* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetMapEntityInGrid*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPENTITYINGRID_METHOD_3_9979BEFBAB552974_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_76C05291B0A2FF7D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapEntityInGrid*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapEntityInGrid*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPENTITYINGRID_METHOD_3_76C05291B0A2FF7D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0B691A46FC7E6B9B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapEntityInGrid* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapEntityInGrid*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPENTITYINGRID_METHOD_3_0B691A46FC7E6B9B_OFFSET))(a1, a2);
		}
	};
}
