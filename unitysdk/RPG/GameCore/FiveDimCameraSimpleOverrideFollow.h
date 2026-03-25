#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMCAMERASIMPLEOVERRIDEFOLLOW_METHOD_2_3B46AB74DAFF5737_OFFSET UNITYSDK_OFFSET(0x171E0670)
#define RPG_GAMECORE_FIVEDIMCAMERASIMPLEOVERRIDEFOLLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x171EB780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimCameraSimpleOverrideFollow_TypeDefinitionIndex = 17091;

	class FiveDimCameraSimpleOverrideFollow : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single ViewHeight; // 0x10
		::System::Single VCameraPitch; // 0x14
		::System::Boolean FollowPlayerGravity; // 0x18
		::System::Boolean FollowSurfaceMove; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCAMERASIMPLEOVERRIDEFOLLOW__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3B46AB74DAFF5737(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimCameraSimpleOverrideFollow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimCameraSimpleOverrideFollow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCAMERASIMPLEOVERRIDEFOLLOW_METHOD_2_3B46AB74DAFF5737_OFFSET))(a1, a2);
		}
	};
}
