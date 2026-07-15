#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class RtLifeBindingConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTTARGETMAPPOSWITHMAXTARGETCOUNT_METHOD_3_72128C761A899A2D_OFFSET UNITYSDK_OFFSET(0x1B770870)
#define RPG_GAMECORE_RTTARGETMAPPOSWITHMAXTARGETCOUNT_METHOD_3_7DA0426B6A44D003_OFFSET UNITYSDK_OFFSET(0x1B770910)
#define RPG_GAMECORE_RTTARGETMAPPOSWITHMAXTARGETCOUNT_METHOD_3_D24A7A1962274922_OFFSET UNITYSDK_OFFSET(0x1B7705C0)
#define RPG_GAMECORE_RTTARGETMAPPOSWITHMAXTARGETCOUNT_METHOD_3_DCB7AEC85F78771A_OFFSET UNITYSDK_OFFSET(0x1B7706C0)
#define RPG_GAMECORE_RTTARGETMAPPOSWITHMAXTARGETCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B770660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetMapPosWithMaxTargetCount_TypeDefinitionIndex = 23403;

	class RtTargetMapPosWithMaxTargetCount : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::RPG::GameCore::TargetEvaluator* MustIncludeTarget; // 0x10
		::RPG::GameCore::DynamicFloat* Radius; // 0x18
		::RPG::GameCore::DynamicFloat* Tolerance; // 0x20
		::RPG::GameCore::RtLifeBindingConfig* LifeBinding; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPPOSWITHMAXTARGETCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D24A7A1962274922(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetMapPosWithMaxTargetCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetMapPosWithMaxTargetCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPPOSWITHMAXTARGETCOUNT_METHOD_3_D24A7A1962274922_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DCB7AEC85F78771A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetMapPosWithMaxTargetCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetMapPosWithMaxTargetCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPPOSWITHMAXTARGETCOUNT_METHOD_3_DCB7AEC85F78771A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_72128C761A899A2D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapPosWithMaxTargetCount*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapPosWithMaxTargetCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPPOSWITHMAXTARGETCOUNT_METHOD_3_72128C761A899A2D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7DA0426B6A44D003(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapPosWithMaxTargetCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapPosWithMaxTargetCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPPOSWITHMAXTARGETCOUNT_METHOD_3_7DA0426B6A44D003_OFFSET))(a1, a2);
		}
	};
}
