#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PropState.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FOUNDATIONPROPSTATECONFIG_METHOD_2_621CA628EF2772F2_OFFSET UNITYSDK_OFFSET(0x17219D80)
#define RPG_GAMECORE_FOUNDATIONPROPSTATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17219F00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FoundationPropStateConfig_TypeDefinitionIndex = 16144;

	class FoundationPropStateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PropState State; // 0x10
		::System::Single RotateAngle; // 0x14
		::System::String* BallStateName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOUNDATIONPROPSTATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_621CA628EF2772F2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FoundationPropStateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FoundationPropStateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOUNDATIONPROPSTATECONFIG_METHOD_2_621CA628EF2772F2_OFFSET))(a1, a2);
		}
	};
}
