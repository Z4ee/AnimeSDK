#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RTTARGETMAPMOVETARGET_METHOD_3_0A519136D77D3425_OFFSET UNITYSDK_OFFSET(0x18DDAF60)
#define RPG_GAMECORE_RTTARGETMAPMOVETARGET_METHOD_3_5F4F61FD917EB233_OFFSET UNITYSDK_OFFSET(0x18DDB040)
#define RPG_GAMECORE_RTTARGETMAPMOVETARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x18DDB020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetMapMoveTarget_TypeDefinitionIndex = 23262;

	class RtTargetMapMoveTarget : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPMOVETARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0A519136D77D3425(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetMapMoveTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetMapMoveTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPMOVETARGET_METHOD_3_0A519136D77D3425_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5F4F61FD917EB233(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetMapMoveTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetMapMoveTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPMOVETARGET_METHOD_3_5F4F61FD917EB233_OFFSET))(a1, a2);
		}
	};
}
