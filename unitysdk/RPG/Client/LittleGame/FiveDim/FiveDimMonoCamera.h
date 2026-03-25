#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/LensSettings.h"
#include "unitysdk/RPG/Client/LittleGame/BaseMonoCamera.h"
#include "unitysdk/Struct_2_EAC1BB0F093534A5.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class Class_1_47EE63CB5C4DC8FC_5;
class Class_2_9DD8A46984F1AFFD;
class Class_3_1A92845FAFA5EC77;
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_GETASPECT_OFFSET UNITYSDK_OFFSET(0x9A0CA00)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_GETENTITY_OFFSET UNITYSDK_OFFSET(0x9A0C350)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_GETFOLLOW_OFFSET UNITYSDK_OFFSET(0x9A0C390)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_GETFOV_OFFSET UNITYSDK_OFFSET(0x99FFE70)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_GETLENSSETTINGS_OFFSET UNITYSDK_OFFSET(0x9A0C910)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_GETLOOKAT_OFFSET UNITYSDK_OFFSET(0x9A0C420)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_GETVIRTUALCAMERATRANSFORM_OFFSET UNITYSDK_OFFSET(0x9A0CB50)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_GETVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x99FFF40)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9A0BF60)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x9A0C720)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_ISINBLEND_OFFSET UNITYSDK_OFFSET(0x9A0C4B0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_ISLIVE_OFFSET UNITYSDK_OFFSET(0x9A0C640)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_METHOD_7_99053D1AE5A59190_OFFSET UNITYSDK_OFFSET(0x9A0C070)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_RELEASE_OFFSET UNITYSDK_OFFSET(0x99FF8C0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_SETFOV_OFFSET UNITYSDK_OFFSET(0x9A0CA90)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x9A00250)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimMonoCamera_TypeDefinitionIndex = 62562;

	class FiveDimMonoCamera : public ::RPG::Client::LittleGame::BaseMonoCamera
	{
	public:
		::Cinemachine::CinemachineVirtualCameraBase* VirtualCamera; // 0x20
		::Class_3_1A92845FAFA5EC77* Field_7_1; // 0x28
		::Class_2_9DD8A46984F1AFFD* Field_7_2; // 0x30
		::UnityEngine::Quaternion Field_7_3; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA__CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::Entitas::IContext* a1, ::Class_1_47EE63CB5C4DC8FC_5* a2, ::Entitas::IEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Class_1_47EE63CB5C4DC8FC_5*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Release(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_RELEASE_OFFSET))(this, a1);
		}

		::Entitas::IEntity* GetEntity()
		{
			return ((::Entitas::IEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_GETENTITY_OFFSET))(this);
		}

		::UnityEngine::Transform* GetFollow()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_GETFOLLOW_OFFSET))(this);
		}

		::UnityEngine::Transform* GetLookAt()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_GETLOOKAT_OFFSET))(this);
		}

		::System::Boolean IsInBlend()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_ISINBLEND_OFFSET))(this);
		}

		::System::Boolean IsLive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_ISLIVE_OFFSET))(this);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_ISACTIVE_OFFSET))(this);
		}

		::Cinemachine::CinemachineVirtualCameraBase* GetVirtualCamera()
		{
			return ((::Cinemachine::CinemachineVirtualCameraBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_GETVIRTUALCAMERA_OFFSET))(this);
		}

		::Cinemachine::LensSettings GetLensSettings()
		{
			return ((::Cinemachine::LensSettings(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_GETLENSSETTINGS_OFFSET))(this);
		}

		::System::Single GetFov()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_GETFOV_OFFSET))(this);
		}

		::System::Single GetAspect()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_GETASPECT_OFFSET))(this);
		}

		::System::Void SetFov(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_SETFOV_OFFSET))(this, a1);
		}

		::Struct_2_EAC1BB0F093534A5 GetVirtualCameraTransform()
		{
			return ((::Struct_2_EAC1BB0F093534A5(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_GETVIRTUALCAMERATRANSFORM_OFFSET))(this);
		}

		::System::Void Method_7_99053D1AE5A59190()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_METHOD_7_99053D1AE5A59190_OFFSET))(this);
		}
	};
}
