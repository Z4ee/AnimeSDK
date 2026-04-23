#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_201314D6C7A93CDF;
class Class_1_2C62E4CDE21F302D;
class Class_1_87463E766B62F093;
namespace RPG::GameCore { class VCameraFreelook3rdConfig; }

#define RPG_CLIENT_CAMERAFREELOOK3RDCONFIGDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9F1E0A0)
#define RPG_CLIENT_CAMERAFREELOOK3RDCONFIGDATA_METHOD_1_950F1A2A17A751A2_OFFSET UNITYSDK_OFFSET(0x9F1E270)
#define RPG_CLIENT_CAMERAFREELOOK3RDCONFIGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9F1A230)

namespace RPG::Client
{
	inline static constexpr unsigned int CameraFreelook3rdConfigData_TypeDefinitionIndex = 64114;

	class CameraFreelook3rdConfigData : public ::System::Object
	{
	public:
		::Class_1_2C62E4CDE21F302D* BaseChangeData; // 0x10
		::Class_1_87463E766B62F093* FOVChangeData; // 0x18
		::Class_1_87463E766B62F093* ZoomChangeData; // 0x20
		::Class_1_87463E766B62F093* AxisYChangeData; // 0x28
		::Class_1_201314D6C7A93CDF* LookAtOffsetChangeData; // 0x30
		::Class_1_201314D6C7A93CDF* FollowDampChangeData; // 0x38
		::Class_1_201314D6C7A93CDF* LookAtDampChangeData; // 0x40
		::System::UInt32 DampPriority; // 0x48
		::RPG::GameCore::VCameraFreelook3rdConfig* Config; // 0x50

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
