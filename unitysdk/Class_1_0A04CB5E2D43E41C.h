#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_5D178EC982C80153;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCommonConfig; }
namespace RPG::Client { class CameraFightStateUseSkillPerformConfig; }

#define CLASS_1_0A04CB5E2D43E41C_GETFIGHTSTATECONFIG_OFFSET UNITYSDK_OFFSET(0x9284930)
#define CLASS_1_0A04CB5E2D43E41C_INIT_OFFSET UNITYSDK_OFFSET(0x9283020)
#define CLASS_1_0A04CB5E2D43E41C_METHOD_1_B877181B6123B7F6_OFFSET UNITYSDK_OFFSET(0x9283D40)
#define CLASS_1_0A04CB5E2D43E41C_REFRESH_OFFSET UNITYSDK_OFFSET(0x9283160)
#define CLASS_1_0A04CB5E2D43E41C_RESET_OFFSET UNITYSDK_OFFSET(0x92830C0)
#define CLASS_1_0A04CB5E2D43E41C__CTOR_OFFSET UNITYSDK_OFFSET(0x9284970)

inline static constexpr unsigned int Class_1_0A04CB5E2D43E41C_TypeDefinitionIndex = 64151;

class Class_1_0A04CB5E2D43E41C : public ::System::Object
{
public:
	::Class_2_5D178EC982C80153* Field_1_0; // 0x10
	::RPG::Client::CameraFightStateUseSkillPerformConfig* Field_1_2; // 0x18
	::RPG::Client::CameraDataAndFlags* Field_1_1; // 0x20
	::System::Boolean Field_1_3; // 0x28
	::UnityEngine::Vector3 Field_1_4; // 0x2C
	::UnityEngine::Vector3 Field_1_5; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A04CB5E2D43E41C__CTOR_OFFSET))(this);
	}

	::System::Void Init(::Class_2_5D178EC982C80153* a1, ::RPG::Client::CameraDataAndFlags* a2, ::RPG::Client::CameraFightStateCommonConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5D178EC982C80153*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraFightStateCommonConfig*))((::PBYTE)hIl2Cpp + CLASS_1_0A04CB5E2D43E41C_INIT_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A04CB5E2D43E41C_RESET_OFFSET))(this);
	}

	::System::Void Refresh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A04CB5E2D43E41C_REFRESH_OFFSET))(this);
	}

	::RPG::Client::CameraFightStateCommonConfig* GetFightStateConfig()
	{
		return ((::RPG::Client::CameraFightStateCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A04CB5E2D43E41C_GETFIGHTSTATECONFIG_OFFSET))(this);
	}

	::System::Void Method_1_B877181B6123B7F6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A04CB5E2D43E41C_METHOD_1_B877181B6123B7F6_OFFSET))(this);
	}
};
