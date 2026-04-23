#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHACTIONDELAYEXCEED_METHOD_4_1E9DFBC8FCE1D1C5_OFFSET UNITYSDK_OFFSET(0x18ED8140)
#define RPG_GAMECORE_TARGETFETCHACTIONDELAYEXCEED_METHOD_4_989FF27FCCA724D3_OFFSET UNITYSDK_OFFSET(0x18EE18F0)
#define RPG_GAMECORE_TARGETFETCHACTIONDELAYEXCEED__CTOR_OFFSET UNITYSDK_OFFSET(0x18ED80F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchActionDelayExceed_TypeDefinitionIndex = 22930;

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
	};
}
