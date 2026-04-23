#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_RTTARGETFETCHPOSWITHMAXTARGETCOUNT_METHOD_4_BFBA0B9AC5A4CBB3_OFFSET UNITYSDK_OFFSET(0x18DD9660)
#define RPG_GAMECORE_RTTARGETFETCHPOSWITHMAXTARGETCOUNT_METHOD_4_C52A111A708900B1_OFFSET UNITYSDK_OFFSET(0x18DD97D0)
#define RPG_GAMECORE_RTTARGETFETCHPOSWITHMAXTARGETCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x18DD9730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetFetchPosWithMaxTargetCount_TypeDefinitionIndex = 23252;

	class RtTargetFetchPosWithMaxTargetCount : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::TargetEvaluator* SourceTargetList; // 0x10
		::RPG::GameCore::TargetEvaluator* MustIncludeTarget; // 0x18
		::RPG::GameCore::DynamicFloat* Radius; // 0x20
		::RPG::GameCore::DynamicFloat* Tolerance; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHPOSWITHMAXTARGETCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_BFBA0B9AC5A4CBB3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetFetchPosWithMaxTargetCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetFetchPosWithMaxTargetCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHPOSWITHMAXTARGETCOUNT_METHOD_4_BFBA0B9AC5A4CBB3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C52A111A708900B1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetFetchPosWithMaxTargetCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetFetchPosWithMaxTargetCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHPOSWITHMAXTARGETCOUNT_METHOD_4_C52A111A708900B1_OFFSET))(a1, a2);
		}
	};
}
