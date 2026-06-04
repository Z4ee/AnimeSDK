#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTTARGETMAPMOVETARGET_METHOD_3_0A519136D77D3425_OFFSET UNITYSDK_OFFSET(0x19BF7230)
#define RPG_GAMECORE_RTTARGETMAPMOVETARGET_METHOD_3_1F3ADD4770F9CAB5_OFFSET UNITYSDK_OFFSET(0x19BF73D0)
#define RPG_GAMECORE_RTTARGETMAPMOVETARGET_METHOD_3_5CDD749E7B8DAFA5_OFFSET UNITYSDK_OFFSET(0x19BF7370)
#define RPG_GAMECORE_RTTARGETMAPMOVETARGET_METHOD_3_5F4F61FD917EB233_OFFSET UNITYSDK_OFFSET(0x19BF7310)
#define RPG_GAMECORE_RTTARGETMAPMOVETARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x19BF72F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetMapMoveTarget_TypeDefinitionIndex = 22930;

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

		static ::System::Void Method_3_5CDD749E7B8DAFA5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapMoveTarget*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapMoveTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPMOVETARGET_METHOD_3_5CDD749E7B8DAFA5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1F3ADD4770F9CAB5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapMoveTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapMoveTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPMOVETARGET_METHOD_3_1F3ADD4770F9CAB5_OFFSET))(a1, a2);
		}
	};
}
