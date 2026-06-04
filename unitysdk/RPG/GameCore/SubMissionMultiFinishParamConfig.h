#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SUBMISSIONMULTIFINISHPARAMCONFIG_METHOD_2_AA6A8D776036E9E5_OFFSET UNITYSDK_OFFSET(0x19CCF910)
#define RPG_GAMECORE_SUBMISSIONMULTIFINISHPARAMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19CCF950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SubMissionMultiFinishParamConfig_TypeDefinitionIndex = 18067;

	class SubMissionMultiFinishParamConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONMULTIFINISHPARAMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_AA6A8D776036E9E5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SubMissionMultiFinishParamConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SubMissionMultiFinishParamConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONMULTIFINISHPARAMCONFIG_METHOD_2_AA6A8D776036E9E5_OFFSET))(a1, a2);
		}
	};
}
