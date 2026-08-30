#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPGTools::Timeline { class VirtualCameraNoiseConfig; }

#define CLASS_1_2C65363A06719ECB_CLASS_1_E9C30BE229F37179_METHOD_1_46E90496A7D4DAA3_OFFSET UNITYSDK_OFFSET(0x164007D0)
#define CLASS_1_2C65363A06719ECB_CLASS_1_E9C30BE229F37179_METHOD_1_4E6317A17760A87F_OFFSET UNITYSDK_OFFSET(0x16400100)
#define CLASS_1_2C65363A06719ECB_CLASS_1_E9C30BE229F37179_METHOD_1_850AFF8B58ED49A6_OFFSET UNITYSDK_OFFSET(0x16400740)
#define CLASS_1_2C65363A06719ECB_CLASS_1_E9C30BE229F37179_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16400200)
#define CLASS_1_2C65363A06719ECB_CLASS_1_E9C30BE229F37179__CTOR_OFFSET UNITYSDK_OFFSET(0x164007C0)

inline static constexpr unsigned int Class_1_2C65363A06719ECB_Class_1_E9C30BE229F37179_TypeDefinitionIndex = 60803;

class Class_1_2C65363A06719ECB_Class_1_E9C30BE229F37179 : public ::System::Object
{
public:
	::RPGTools::Timeline::VirtualCameraNoiseConfig* CKMHCFNKKPK; // 0x10
	::Cinemachine::CinemachineVirtualCamera* EAJFHBDCFFO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C65363A06719ECB_CLASS_1_E9C30BE229F37179__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_46E90496A7D4DAA3(::Cinemachine::CinemachineVirtualCamera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + CLASS_1_2C65363A06719ECB_CLASS_1_E9C30BE229F37179_METHOD_1_46E90496A7D4DAA3_OFFSET))(this, a1);
	}

	::System::Void Method_1_4E6317A17760A87F(::RPGTools::Timeline::VirtualCameraNoiseConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::VirtualCameraNoiseConfig*))((::PBYTE)hIl2Cpp + CLASS_1_2C65363A06719ECB_CLASS_1_E9C30BE229F37179_METHOD_1_4E6317A17760A87F_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C65363A06719ECB_CLASS_1_E9C30BE229F37179_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_850AFF8B58ED49A6(::Cinemachine::CinemachineVirtualCamera* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + CLASS_1_2C65363A06719ECB_CLASS_1_E9C30BE229F37179_METHOD_1_850AFF8B58ED49A6_OFFSET))(this, a1);
	}
};
