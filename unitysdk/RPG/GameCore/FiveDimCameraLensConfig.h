#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMCAMERALENSCONFIG_METHOD_2_F35648C0B8A6D68A_OFFSET UNITYSDK_OFFSET(0x1BA8A370)
#define RPG_GAMECORE_FIVEDIMCAMERALENSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA8C2E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimCameraLensConfig_TypeDefinitionIndex = 17887;

	class FiveDimCameraLensConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single Fov; // 0x10
		::System::Single FixCameraViewHeight; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCAMERALENSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F35648C0B8A6D68A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimCameraLensConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimCameraLensConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCAMERALENSCONFIG_METHOD_2_F35648C0B8A6D68A_OFFSET))(a1, a2);
		}
	};
}
