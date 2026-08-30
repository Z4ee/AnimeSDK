#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTTARGETMAPMOVETARGET_METHOD_3_1AFB29A9621D3A91_OFFSET UNITYSDK_OFFSET(0x1CCF4560)
#define RPG_GAMECORE_RTTARGETMAPMOVETARGET_METHOD_3_1F3ADD4770F9CAB5_OFFSET UNITYSDK_OFFSET(0x1CCF45A0)
#define RPG_GAMECORE_RTTARGETMAPMOVETARGET_METHOD_3_289188E4B60AE2B2_OFFSET UNITYSDK_OFFSET(0x1CCF4460)
#define RPG_GAMECORE_RTTARGETMAPMOVETARGET_METHOD_3_5F4F61FD917EB233_OFFSET UNITYSDK_OFFSET(0x1CCF4500)
#define RPG_GAMECORE_RTTARGETMAPMOVETARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCF44F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetMapMoveTarget_TypeDefinitionIndex = 23977;

	class RtTargetMapMoveTarget : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPMOVETARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_289188E4B60AE2B2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetMapMoveTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetMapMoveTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPMOVETARGET_METHOD_3_289188E4B60AE2B2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5F4F61FD917EB233(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetMapMoveTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetMapMoveTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPMOVETARGET_METHOD_3_5F4F61FD917EB233_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1AFB29A9621D3A91(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapMoveTarget*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapMoveTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPMOVETARGET_METHOD_3_1AFB29A9621D3A91_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1F3ADD4770F9CAB5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapMoveTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapMoveTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPMOVETARGET_METHOD_3_1F3ADD4770F9CAB5_OFFSET))(a1, a2);
		}
	};
}
