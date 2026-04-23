#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtPosOffsetCoordType.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RtLifeBindingConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class ValueEvaluatorVec3; }

#define RPG_GAMECORE_RTTARGETMAPPOSWITHOFFSET_METHOD_3_50E28D82BA6C60EE_OFFSET UNITYSDK_OFFSET(0x18DDB3E0)
#define RPG_GAMECORE_RTTARGETMAPPOSWITHOFFSET_METHOD_3_D7E009CAEF5F37C1_OFFSET UNITYSDK_OFFSET(0x18DDB370)
#define RPG_GAMECORE_RTTARGETMAPPOSWITHOFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x18DDB3C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetMapPosWithOffset_TypeDefinitionIndex = 23269;

	class RtTargetMapPosWithOffset : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::RPG::GameCore::RtPosOffsetCoordType OffsetCoord; // 0x10
		::RPG::GameCore::TargetEvaluator* ParamTarget; // 0x18
		::RPG::GameCore::ValueEvaluatorVec3* Offset; // 0x20
		::RPG::GameCore::RtLifeBindingConfig* LifeBinding; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPPOSWITHOFFSET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D7E009CAEF5F37C1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetMapPosWithOffset*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetMapPosWithOffset*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPPOSWITHOFFSET_METHOD_3_D7E009CAEF5F37C1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_50E28D82BA6C60EE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetMapPosWithOffset* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetMapPosWithOffset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPPOSWITHOFFSET_METHOD_3_50E28D82BA6C60EE_OFFSET))(a1, a2);
		}
	};
}
