#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTTARGETMAPBORNPOINT_METHOD_3_07C4DE7B0E434CC8_OFFSET UNITYSDK_OFFSET(0x19BF58E0)
#define RPG_GAMECORE_RTTARGETMAPBORNPOINT_METHOD_3_10FB9A382D91F85A_OFFSET UNITYSDK_OFFSET(0x19BF5800)
#define RPG_GAMECORE_RTTARGETMAPBORNPOINT_METHOD_3_328D0CA5EF054EEA_OFFSET UNITYSDK_OFFSET(0x19BF59A0)
#define RPG_GAMECORE_RTTARGETMAPBORNPOINT_METHOD_3_D86F60D433682E2A_OFFSET UNITYSDK_OFFSET(0x19BF5940)
#define RPG_GAMECORE_RTTARGETMAPBORNPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x19BF58C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetMapBornPoint_TypeDefinitionIndex = 22931;

	class RtTargetMapBornPoint : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPBORNPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_10FB9A382D91F85A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetMapBornPoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetMapBornPoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPBORNPOINT_METHOD_3_10FB9A382D91F85A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_07C4DE7B0E434CC8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetMapBornPoint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetMapBornPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPBORNPOINT_METHOD_3_07C4DE7B0E434CC8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D86F60D433682E2A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapBornPoint*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapBornPoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPBORNPOINT_METHOD_3_D86F60D433682E2A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_328D0CA5EF054EEA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapBornPoint* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapBornPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPBORNPOINT_METHOD_3_328D0CA5EF054EEA_OFFSET))(a1, a2);
		}
	};
}
