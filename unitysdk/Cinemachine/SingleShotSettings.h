#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CINEMACHINE_SINGLESHOTSETTINGS_METHOD_2_6FD657BE0D8D170B_OFFSET UNITYSDK_OFFSET(0x142810)
#define CINEMACHINE_SINGLESHOTSETTINGS_METHOD_2_90A3556FE5B8C2F8_OFFSET UNITYSDK_OFFSET(0x1427A0)
#define CINEMACHINE_SINGLESHOTSETTINGS__CCTOR_OFFSET UNITYSDK_OFFSET(0xC742CE0)

namespace Cinemachine
{
	inline static constexpr unsigned int SingleShotSettings_TypeDefinitionIndex = 46812;

	struct alignas(4) SingleShotSettings
	{
		static ::Cinemachine::SingleShotSettings* StaticGet_Default()
		{
			return (::Cinemachine::SingleShotSettings*)Il2CppClass::FromTypeDefinitionIndex(SingleShotSettings_TypeDefinitionIndex)->GetStaticField(0x13E60);
		}
		::System::Single X; // 0x10
		::System::Single Y; // 0x14
		::System::Single ViewSize; // 0x18
		::System::Single Yaw; // 0x1C
		::System::Single Pitch; // 0x20

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_SINGLESHOTSETTINGS__CCTOR_OFFSET))();
		}

		::Cinemachine::SingleShotSettings Method_2_90A3556FE5B8C2F8()
		{
			return ((::Cinemachine::SingleShotSettings(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_SINGLESHOTSETTINGS_METHOD_2_90A3556FE5B8C2F8_OFFSET))(this);
		}

		::System::Boolean Method_2_6FD657BE0D8D170B(::Cinemachine::SingleShotSettings a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::SingleShotSettings))((::PBYTE)hIl2Cpp + CINEMACHINE_SINGLESHOTSETTINGS_METHOD_2_6FD657BE0D8D170B_OFFSET))(this, a1);
		}
	};
}
