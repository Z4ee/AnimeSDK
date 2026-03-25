#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_784561F56B176470_Struct_2_D648E0ADF036FEE2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_5D178EC982C80153;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCommonConfig; }
namespace UnityEngine { class Camera; }

#define CLASS_1_784561F56B176470_GETFIGHTSTATECONFIG_OFFSET UNITYSDK_OFFSET(0xA9E1AE0)
#define CLASS_1_784561F56B176470_INIT_OFFSET UNITYSDK_OFFSET(0xA9E1B20)
#define CLASS_1_784561F56B176470_METHOD_1_A34CB5BA9691C8EF_OFFSET UNITYSDK_OFFSET(0xA9E1E90)
#define CLASS_1_784561F56B176470_METHOD_1_FF8A1530DF47923E_OFFSET UNITYSDK_OFFSET(0xA9E1D10)
#define CLASS_1_784561F56B176470_REFRESH_OFFSET UNITYSDK_OFFSET(0xA9E1B90)
#define CLASS_1_784561F56B176470_RESET_OFFSET UNITYSDK_OFFSET(0xA9E2330)
#define CLASS_1_784561F56B176470__CTOR_OFFSET UNITYSDK_OFFSET(0xA9E2500)

inline static constexpr unsigned int Class_1_784561F56B176470_TypeDefinitionIndex = 56891;

class Class_1_784561F56B176470 : public ::System::Object
{
public:
	::RPG::Client::CameraDataAndFlags* Field_1_1; // 0x10
	::Class_2_5D178EC982C80153* Field_1_0; // 0x18
	::RPG::Client::CameraFightStateCommonConfig* Field_1_2; // 0x20
	::UnityEngine::Quaternion Field_1_5; // 0x28
	::System::Boolean Field_1_3; // 0x38
	::UnityEngine::Vector3 Field_1_4; // 0x3C
	::Class_1_784561F56B176470_Struct_2_D648E0ADF036FEE2 Field_1_6; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_784561F56B176470__CTOR_OFFSET))(this);
	}

	::RPG::Client::CameraFightStateCommonConfig* GetFightStateConfig()
	{
		return ((::RPG::Client::CameraFightStateCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_784561F56B176470_GETFIGHTSTATECONFIG_OFFSET))(this);
	}

	::System::Void Init(::Class_2_5D178EC982C80153* a1, ::RPG::Client::CameraDataAndFlags* a2, ::RPG::Client::CameraFightStateCommonConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5D178EC982C80153*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraFightStateCommonConfig*))((::PBYTE)hIl2Cpp + CLASS_1_784561F56B176470_INIT_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Refresh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_784561F56B176470_REFRESH_OFFSET))(this);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_784561F56B176470_RESET_OFFSET))(this);
	}

	::System::Void Method_1_FF8A1530DF47923E(::UnityEngine::Camera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_1_784561F56B176470_METHOD_1_FF8A1530DF47923E_OFFSET))(this, a1);
	}

	::System::Void Method_1_A34CB5BA9691C8EF(::Class_1_784561F56B176470_Struct_2_D648E0ADF036FEE2& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_784561F56B176470_Struct_2_D648E0ADF036FEE2&))((::PBYTE)hIl2Cpp + CLASS_1_784561F56B176470_METHOD_1_A34CB5BA9691C8EF_OFFSET))(this, a1);
	}
};
