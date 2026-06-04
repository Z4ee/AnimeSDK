#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOOPWAITSERVERERAFLIPPERREGIONCHANGE_METHOD_3_5A759AF4578EA4EB_OFFSET UNITYSDK_OFFSET(0x198B2100)
#define RPG_GAMECORE_LOOPWAITSERVERERAFLIPPERREGIONCHANGE_METHOD_3_B34B87D1BABBDB9B_OFFSET UNITYSDK_OFFSET(0x198B2070)
#define RPG_GAMECORE_LOOPWAITSERVERERAFLIPPERREGIONCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x198B20D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopWaitServerEraFlipperRegionChange_TypeDefinitionIndex = 21120;

	class LoopWaitServerEraFlipperRegionChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERERAFLIPPERREGIONCHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B34B87D1BABBDB9B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitServerEraFlipperRegionChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitServerEraFlipperRegionChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERERAFLIPPERREGIONCHANGE_METHOD_3_B34B87D1BABBDB9B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5A759AF4578EA4EB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitServerEraFlipperRegionChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitServerEraFlipperRegionChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERERAFLIPPERREGIONCHANGE_METHOD_3_5A759AF4578EA4EB_OFFSET))(a1, a2);
		}
	};
}
