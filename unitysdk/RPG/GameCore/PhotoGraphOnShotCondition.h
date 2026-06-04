#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PHOTOGRAPHONSHOTCONDITION_METHOD_2_EC49ABD0665ED4A0_OFFSET UNITYSDK_OFFSET(0x19A088A0)
#define RPG_GAMECORE_PHOTOGRAPHONSHOTCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x19A08930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphOnShotCondition_TypeDefinitionIndex = 20432;

	class PhotoGraphOnShotCondition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHONSHOTCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_EC49ABD0665ED4A0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoGraphOnShotCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphOnShotCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHONSHOTCONDITION_METHOD_2_EC49ABD0665ED4A0_OFFSET))(a1, a2);
		}
	};
}
