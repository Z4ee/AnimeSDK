#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETFLIPPERLIGHTDEVICEFOLLOWPLAYER_METHOD_3_45C538982AD96A3B_OFFSET UNITYSDK_OFFSET(0x1C5F9340)
#define RPG_GAMECORE_SETFLIPPERLIGHTDEVICEFOLLOWPLAYER_METHOD_3_93776CF452FBD835_OFFSET UNITYSDK_OFFSET(0x1C5F92A0)
#define RPG_GAMECORE_SETFLIPPERLIGHTDEVICEFOLLOWPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5F9300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetFlipperLightDeviceFollowPlayer_TypeDefinitionIndex = 21530;

	class SetFlipperLightDeviceFollowPlayer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* DevicePropTarget; // 0x18
		::RPG::GameCore::TargetEvaluator* PointPropSource; // 0x20
		::RPG::GameCore::TargetEvaluator* PointPropTarget; // 0x28
		::System::String* DeviceFollowAttachPoint; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnLightToSourceEndCallBack; // 0x38
		::System::String* AimAttachPoint; // 0x40
		::RPG::MVector3 FollowOffset; // 0x48
		::RPG::MVector3 AimOffset; // 0x54
		::System::Boolean Follow; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLIPPERLIGHTDEVICEFOLLOWPLAYER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_93776CF452FBD835(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetFlipperLightDeviceFollowPlayer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetFlipperLightDeviceFollowPlayer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLIPPERLIGHTDEVICEFOLLOWPLAYER_METHOD_3_93776CF452FBD835_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_45C538982AD96A3B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetFlipperLightDeviceFollowPlayer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetFlipperLightDeviceFollowPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLIPPERLIGHTDEVICEFOLLOWPLAYER_METHOD_3_45C538982AD96A3B_OFFSET))(a1, a2);
		}
	};
}
