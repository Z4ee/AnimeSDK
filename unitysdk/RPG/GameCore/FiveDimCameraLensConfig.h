#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMCAMERALENSCONFIG_METHOD_2_393D71BD4B31B773_OFFSET UNITYSDK_OFFSET(0x188ED910)
#define RPG_GAMECORE_FIVEDIMCAMERALENSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x188F91D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimCameraLensConfig_TypeDefinitionIndex = 17685;

	class FiveDimCameraLensConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single Fov; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCAMERALENSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_393D71BD4B31B773(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimCameraLensConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimCameraLensConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCAMERALENSCONFIG_METHOD_2_393D71BD4B31B773_OFFSET))(a1, a2);
		}
	};
}
