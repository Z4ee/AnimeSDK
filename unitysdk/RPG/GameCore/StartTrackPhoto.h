#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TrackPhotoEvent; }

#define RPG_GAMECORE_STARTTRACKPHOTO_METHOD_3_68F629B1A7CFE58B_OFFSET UNITYSDK_OFFSET(0x19CB9820)
#define RPG_GAMECORE_STARTTRACKPHOTO_METHOD_3_B6C6BCCEC66C6429_OFFSET UNITYSDK_OFFSET(0x19CB98A0)
#define RPG_GAMECORE_STARTTRACKPHOTO__CTOR_OFFSET UNITYSDK_OFFSET(0x19CB9870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StartTrackPhoto_TypeDefinitionIndex = 20428;

	class StartTrackPhoto : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* StageID; // 0x18
		::RPG::GameCore::DynamicString* WayPointPath; // 0x20
		::Il2CppArray<::RPG::GameCore::TrackPhotoEvent*>* Events; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnRestart; // 0x30
		::System::Single StandardScreenDis; // 0x38
		::System::Boolean CameraManualRotation; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTTRACKPHOTO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_68F629B1A7CFE58B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartTrackPhoto*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartTrackPhoto*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTTRACKPHOTO_METHOD_3_68F629B1A7CFE58B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B6C6BCCEC66C6429(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartTrackPhoto* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartTrackPhoto*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTTRACKPHOTO_METHOD_3_B6C6BCCEC66C6429_OFFSET))(a1, a2);
		}
	};
}
