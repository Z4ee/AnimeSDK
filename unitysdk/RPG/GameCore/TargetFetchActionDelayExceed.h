#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHACTIONDELAYEXCEED_METHOD_4_1E9DFBC8FCE1D1C5_OFFSET UNITYSDK_OFFSET(0x1E166F20)
#define RPG_GAMECORE_TARGETFETCHACTIONDELAYEXCEED_METHOD_4_719288726689CCA8_OFFSET UNITYSDK_OFFSET(0x1E166F80)
#define RPG_GAMECORE_TARGETFETCHACTIONDELAYEXCEED_METHOD_4_A8D4E9517F6490F5_OFFSET UNITYSDK_OFFSET(0x1E166FA0)
#define RPG_GAMECORE_TARGETFETCHACTIONDELAYEXCEED_METHOD_4_B0459859EECCCA00_OFFSET UNITYSDK_OFFSET(0x1E166EA0)
#define RPG_GAMECORE_TARGETFETCHACTIONDELAYEXCEED__CTOR_OFFSET UNITYSDK_OFFSET(0x1E166F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchActionDelayExceed_TypeDefinitionIndex = 23664;

	class TargetFetchActionDelayExceed : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHACTIONDELAYEXCEED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B0459859EECCCA00(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchActionDelayExceed*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchActionDelayExceed*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHACTIONDELAYEXCEED_METHOD_4_B0459859EECCCA00_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1E9DFBC8FCE1D1C5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchActionDelayExceed* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchActionDelayExceed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHACTIONDELAYEXCEED_METHOD_4_1E9DFBC8FCE1D1C5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_719288726689CCA8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchActionDelayExceed*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchActionDelayExceed*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHACTIONDELAYEXCEED_METHOD_4_719288726689CCA8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A8D4E9517F6490F5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchActionDelayExceed* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchActionDelayExceed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHACTIONDELAYEXCEED_METHOD_4_A8D4E9517F6490F5_OFFSET))(a1, a2);
		}
	};
}
