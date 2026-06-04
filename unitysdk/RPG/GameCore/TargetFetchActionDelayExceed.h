#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHACTIONDELAYEXCEED_METHOD_4_1E9DFBC8FCE1D1C5_OFFSET UNITYSDK_OFFSET(0x19CF44F0)
#define RPG_GAMECORE_TARGETFETCHACTIONDELAYEXCEED_METHOD_4_989FF27FCCA724D3_OFFSET UNITYSDK_OFFSET(0x19D080E0)
#define RPG_GAMECORE_TARGETFETCHACTIONDELAYEXCEED_METHOD_4_A8D4E9517F6490F5_OFFSET UNITYSDK_OFFSET(0x19D081A0)
#define RPG_GAMECORE_TARGETFETCHACTIONDELAYEXCEED_METHOD_4_E8479B97CFE35CE5_OFFSET UNITYSDK_OFFSET(0x19D02DD0)
#define RPG_GAMECORE_TARGETFETCHACTIONDELAYEXCEED__CTOR_OFFSET UNITYSDK_OFFSET(0x19CF44A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchActionDelayExceed_TypeDefinitionIndex = 22621;

	class TargetFetchActionDelayExceed : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHACTIONDELAYEXCEED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_989FF27FCCA724D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchActionDelayExceed*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchActionDelayExceed*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHACTIONDELAYEXCEED_METHOD_4_989FF27FCCA724D3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1E9DFBC8FCE1D1C5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchActionDelayExceed* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchActionDelayExceed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHACTIONDELAYEXCEED_METHOD_4_1E9DFBC8FCE1D1C5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E8479B97CFE35CE5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchActionDelayExceed*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchActionDelayExceed*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHACTIONDELAYEXCEED_METHOD_4_E8479B97CFE35CE5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A8D4E9517F6490F5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchActionDelayExceed* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchActionDelayExceed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHACTIONDELAYEXCEED_METHOD_4_A8D4E9517F6490F5_OFFSET))(a1, a2);
		}
	};
}
