#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHANGETRACKVIRTUALCAMERAFOLLOWANDAIM_METHOD_3_6EDE58E399C859A8_OFFSET UNITYSDK_OFFSET(0x17064B10)
#define RPG_GAMECORE_CHANGETRACKVIRTUALCAMERAFOLLOWANDAIM_METHOD_3_EC95CAC945449637_OFFSET UNITYSDK_OFFSET(0x17064A90)
#define RPG_GAMECORE_CHANGETRACKVIRTUALCAMERAFOLLOWANDAIM__CTOR_OFFSET UNITYSDK_OFFSET(0x17064AE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeTrackVirtualCameraFollowAndAim_TypeDefinitionIndex = 19860;

	class ChangeTrackVirtualCameraFollowAndAim : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* AreaName; // 0x18
		::System::String* TrackName; // 0x20
		::System::String* CameraName; // 0x28
		::System::String* TargetAreaName; // 0x30
		::System::String* FollowTargetAnchorName; // 0x38
		::System::String* LookAtTargetAnchorName; // 0x40
		::System::UInt32 FollowTargetGroupID; // 0x48
		::System::UInt32 FollowTargetEntityID; // 0x4C
		::System::UInt32 LookAtTargetGroupID; // 0x50
		::System::UInt32 LookAtTargetEntityID; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGETRACKVIRTUALCAMERAFOLLOWANDAIM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EC95CAC945449637(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeTrackVirtualCameraFollowAndAim*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeTrackVirtualCameraFollowAndAim*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGETRACKVIRTUALCAMERAFOLLOWANDAIM_METHOD_3_EC95CAC945449637_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6EDE58E399C859A8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeTrackVirtualCameraFollowAndAim* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeTrackVirtualCameraFollowAndAim*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGETRACKVIRTUALCAMERAFOLLOWANDAIM_METHOD_3_6EDE58E399C859A8_OFFSET))(a1, a2);
		}
	};
}
