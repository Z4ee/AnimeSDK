#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPGTools::Timeline { class VirtualCameraNoiseConfig; }

#define CLASS_1_2C65363A06719ECB_CLASS_1_FDE81281E0A8BBF1_METHOD_1_508352D137D32296_OFFSET UNITYSDK_OFFSET(0xB8D8270)
#define CLASS_1_2C65363A06719ECB_CLASS_1_FDE81281E0A8BBF1_METHOD_1_7CED6DAB3B79596C_OFFSET UNITYSDK_OFFSET(0xB8D8820)
#define CLASS_1_2C65363A06719ECB_CLASS_1_FDE81281E0A8BBF1_METHOD_1_850AFF8B58ED49A6_OFFSET UNITYSDK_OFFSET(0xB8D8790)
#define CLASS_1_2C65363A06719ECB_CLASS_1_FDE81281E0A8BBF1_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB8D8340)
#define CLASS_1_2C65363A06719ECB_CLASS_1_FDE81281E0A8BBF1__CTOR_OFFSET UNITYSDK_OFFSET(0xB8D8810)

inline static constexpr unsigned int Class_1_2C65363A06719ECB_Class_1_FDE81281E0A8BBF1_TypeDefinitionIndex = 49184;

class Class_1_2C65363A06719ECB_Class_1_FDE81281E0A8BBF1 : public ::System::Object
{
public:
	::RPGTools::Timeline::VirtualCameraNoiseConfig* Field_1_1; // 0x10
	::Cinemachine::CinemachineVirtualCamera* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C65363A06719ECB_CLASS_1_FDE81281E0A8BBF1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7CED6DAB3B79596C(::Cinemachine::CinemachineVirtualCamera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + CLASS_1_2C65363A06719ECB_CLASS_1_FDE81281E0A8BBF1_METHOD_1_7CED6DAB3B79596C_OFFSET))(this, a1);
	}

	::System::Void Method_1_508352D137D32296(::RPGTools::Timeline::VirtualCameraNoiseConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::VirtualCameraNoiseConfig*))((::PBYTE)hIl2Cpp + CLASS_1_2C65363A06719ECB_CLASS_1_FDE81281E0A8BBF1_METHOD_1_508352D137D32296_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C65363A06719ECB_CLASS_1_FDE81281E0A8BBF1_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_850AFF8B58ED49A6(::Cinemachine::CinemachineVirtualCamera* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + CLASS_1_2C65363A06719ECB_CLASS_1_FDE81281E0A8BBF1_METHOD_1_850AFF8B58ED49A6_OFFSET))(this, a1);
	}
};
