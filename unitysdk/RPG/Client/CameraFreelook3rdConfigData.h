#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_201314D6C7A93CDF;
class Class_1_78B03B04E15725BC;
class Class_1_C77BD78243DB7402;
class Class_1_EB885E2A2E8CAF8E;
namespace RPG::GameCore { class VCameraFreelook3rdConfig; }

#define RPG_CLIENT_CAMERAFREELOOK3RDCONFIGDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C858FD0)
#define RPG_CLIENT_CAMERAFREELOOK3RDCONFIGDATA_METHOD_1_950F1A2A17A751A2_OFFSET UNITYSDK_OFFSET(0x1C859180)
#define RPG_CLIENT_CAMERAFREELOOK3RDCONFIGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C854AD0)

namespace RPG::Client
{
	inline static constexpr unsigned int CameraFreelook3rdConfigData_TypeDefinitionIndex = 69533;

	class CameraFreelook3rdConfigData : public ::System::Object
	{
	public:
		::Class_1_78B03B04E15725BC* BaseChangeData; // 0x10
		::Class_1_EB885E2A2E8CAF8E* FOVChangeData; // 0x18
		::Class_1_EB885E2A2E8CAF8E* ZoomChangeData; // 0x20
		::Class_1_EB885E2A2E8CAF8E* AxisYChangeData; // 0x28
		::Class_1_C77BD78243DB7402* ExtraParamsChangeData; // 0x30
		::Class_1_201314D6C7A93CDF* LookAtOffsetChangeData; // 0x38
		::Class_1_201314D6C7A93CDF* FollowDampChangeData; // 0x40
		::Class_1_201314D6C7A93CDF* LookAtDampChangeData; // 0x48
		::System::UInt32 DampPriority; // 0x50
		::RPG::GameCore::VCameraFreelook3rdConfig* Config; // 0x58

		::System::Void _ctor(::RPG::GameCore::VCameraFreelook3rdConfig* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VCameraFreelook3rdConfig*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAFREELOOK3RDCONFIGDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAFREELOOK3RDCONFIGDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void Method_1_950F1A2A17A751A2(::RPG::Client::CameraFreelook3rdConfigData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraFreelook3rdConfigData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAFREELOOK3RDCONFIGDATA_METHOD_1_950F1A2A17A751A2_OFFSET))(this, a1);
		}
	};
}
