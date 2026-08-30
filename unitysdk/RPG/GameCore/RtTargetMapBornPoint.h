#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTTARGETMAPBORNPOINT_METHOD_3_07C4DE7B0E434CC8_OFFSET UNITYSDK_OFFSET(0x1D4B57B0)
#define RPG_GAMECORE_RTTARGETMAPBORNPOINT_METHOD_3_188BB4A7FD717D2E_OFFSET UNITYSDK_OFFSET(0x1D4B5810)
#define RPG_GAMECORE_RTTARGETMAPBORNPOINT_METHOD_3_328D0CA5EF054EEA_OFFSET UNITYSDK_OFFSET(0x1D4B5850)
#define RPG_GAMECORE_RTTARGETMAPBORNPOINT_METHOD_3_9C46E669AEA6CAAD_OFFSET UNITYSDK_OFFSET(0x1D4B5710)
#define RPG_GAMECORE_RTTARGETMAPBORNPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4B57A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetMapBornPoint_TypeDefinitionIndex = 23978;

	class RtTargetMapBornPoint : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPBORNPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9C46E669AEA6CAAD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetMapBornPoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetMapBornPoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPBORNPOINT_METHOD_3_9C46E669AEA6CAAD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_07C4DE7B0E434CC8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetMapBornPoint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetMapBornPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPBORNPOINT_METHOD_3_07C4DE7B0E434CC8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_188BB4A7FD717D2E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapBornPoint*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapBornPoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPBORNPOINT_METHOD_3_188BB4A7FD717D2E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_328D0CA5EF054EEA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapBornPoint* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapBornPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPBORNPOINT_METHOD_3_328D0CA5EF054EEA_OFFSET))(a1, a2);
		}
	};
}
