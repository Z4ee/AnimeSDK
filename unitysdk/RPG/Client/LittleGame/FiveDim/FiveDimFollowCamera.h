#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimMonoCamera.h"

namespace Cinemachine { class CinemachineFramingTransposer; }
namespace Entitas { class IEntity; }
namespace RPG::Client::LittleGame::FiveDim { class FiveDimCinemachineMoveFollowTargetInSpecificSpace; }
namespace RPG::GameCore { class FiveDimCameraFollowConfig; }
namespace System { class String; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFOLLOWCAMERA_ENABLEFOLLOWDAMPENTITYMOVE_OFFSET UNITYSDK_OFFSET(0x99FFF80)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFOLLOWCAMERA_GETDESIREDCAMERADISTANCE_OFFSET UNITYSDK_OFFSET(0x99FF9F0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFOLLOWCAMERA_METHOD_8_E9237B2B579E73DE_OFFSET UNITYSDK_OFFSET(0x99FFA50)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFOLLOWCAMERA_RELEASE_OFFSET UNITYSDK_OFFSET(0x99FF6C0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFOLLOWCAMERA_SETDAMPINENTITYSPACE_OFFSET UNITYSDK_OFFSET(0x99FF730)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFOLLOWCAMERA_SETDAMPINGY_OFFSET UNITYSDK_OFFSET(0x99FFB70)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFOLLOWCAMERA_SETDESIREDCAMERADISTANCE_OFFSET UNITYSDK_OFFSET(0x99FFB00)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFOLLOWCAMERA_SETFOLLOWCONFIG_OFFSET UNITYSDK_OFFSET(0x99FFBE0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFOLLOWCAMERA_SETSCREENY_OFFSET UNITYSDK_OFFSET(0x99FFEC0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFOLLOWCAMERA_SETVIEWHEIGHT_OFFSET UNITYSDK_OFFSET(0x9A00060)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFOLLOWCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x9A00230)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFOLLOWCAMERA___IFIXBASEPROXY_RELEASE_OFFSET UNITYSDK_OFFSET(0x9A00270)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimFollowCamera_TypeDefinitionIndex = 62561;

	class FiveDimFollowCamera : public ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera
	{
	public:
		::RPG::Client::LittleGame::FiveDim::FiveDimCinemachineMoveFollowTargetInSpecificSpace* Field_8_0; // 0x48
		::System::Boolean Field_8_1; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFOLLOWCAMERA__CTOR_OFFSET))(this);
		}

		::System::Void Release(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFOLLOWCAMERA_RELEASE_OFFSET))(this, a1);
		}

		::System::Single GetDesiredCameraDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFOLLOWCAMERA_GETDESIREDCAMERADISTANCE_OFFSET))(this);
		}

		::System::Void SetDesiredCameraDistance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFOLLOWCAMERA_SETDESIREDCAMERADISTANCE_OFFSET))(this, a1);
		}

		::System::Void SetDampingY(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFOLLOWCAMERA_SETDAMPINGY_OFFSET))(this, a1);
		}

		::System::Void SetFollowConfig(::RPG::GameCore::FiveDimCameraFollowConfig* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimCameraFollowConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFOLLOWCAMERA_SETFOLLOWCONFIG_OFFSET))(this, a1, a2);
		}

		::System::Void SetScreenY(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFOLLOWCAMERA_SETSCREENY_OFFSET))(this, a1);
		}

		::System::Void SetDampInEntitySpace(::Entitas::IEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFOLLOWCAMERA_SETDAMPINENTITYSPACE_OFFSET))(this, a1);
		}

		::System::Void EnableFollowDampEntityMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFOLLOWCAMERA_ENABLEFOLLOWDAMPENTITYMOVE_OFFSET))(this);
		}

		::System::Void SetViewHeight(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFOLLOWCAMERA_SETVIEWHEIGHT_OFFSET))(this, a1);
		}

		::Cinemachine::CinemachineFramingTransposer* Method_8_E9237B2B579E73DE()
		{
			return ((::Cinemachine::CinemachineFramingTransposer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFOLLOWCAMERA_METHOD_8_E9237B2B579E73DE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Release(::System::String* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFOLLOWCAMERA___IFIXBASEPROXY_RELEASE_OFFSET))(this, P0);
		}
	};
}
