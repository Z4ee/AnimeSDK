#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector2.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMCAMERAOBSERVECONFIG_METHOD_2_FD7B29C8EF191907_OFFSET UNITYSDK_OFFSET(0x1972B6B0)
#define RPG_GAMECORE_FIVEDIMCAMERAOBSERVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19734990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimCameraObserveConfig_TypeDefinitionIndex = 17717;

	class FiveDimCameraObserveConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean EnableObserve; // 0x10
		::System::Boolean IsMinimalOvserve; // 0x11
		::RPG::MVector2 MaxObserveOffset; // 0x14
		::System::Single ObserveRecoverTime; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCAMERAOBSERVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_FD7B29C8EF191907(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimCameraObserveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimCameraObserveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCAMERAOBSERVECONFIG_METHOD_2_FD7B29C8EF191907_OFFSET))(a1, a2);
		}
	};
}
