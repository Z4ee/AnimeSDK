#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CameraSetting.h"

#define MOLEMOLE_RTCAMERASETTING_METHOD_2_66C34EBC49CE3FFF_OFFSET UNITYSDK_OFFSET(0x1642BD20)
#define MOLEMOLE_RTCAMERASETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x1642BD10)

namespace MoleMole
{
	inline static constexpr unsigned int RTCameraSetting_TypeDefinitionIndex = 82814;

	class RTCameraSetting : public ::MoleMole::CameraSetting
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RTCAMERASETTING__CTOR_OFFSET))(this);
		}

		static ::MoleMole::RTCameraSetting* Method_2_66C34EBC49CE3FFF()
		{
			return ((::MoleMole::RTCameraSetting*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_RTCAMERASETTING_METHOD_2_66C34EBC49CE3FFF_OFFSET))();
		}
	};
}
