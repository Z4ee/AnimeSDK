#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_5D178EC982C80153;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCommonConfig; }
namespace RPG::Client { class CameraFightStateSelectLightTeamEntityConfig; }

#define CLASS_1_560870B67AD802CB_GETFIGHTSTATECONFIG_OFFSET UNITYSDK_OFFSET(0x10BA72C0)
#define CLASS_1_560870B67AD802CB_INIT_OFFSET UNITYSDK_OFFSET(0x10BA69D0)
#define CLASS_1_560870B67AD802CB_REFRESH_OFFSET UNITYSDK_OFFSET(0x10BA6B20)
#define CLASS_1_560870B67AD802CB_RESET_OFFSET UNITYSDK_OFFSET(0x10BA6A80)
#define CLASS_1_560870B67AD802CB__CTOR_OFFSET UNITYSDK_OFFSET(0x10BA7300)

inline static constexpr unsigned int Class_1_560870B67AD802CB_TypeDefinitionIndex = 56899;

class Class_1_560870B67AD802CB : public ::System::Object
{
public:
	::Class_2_5D178EC982C80153* Field_1_0; // 0x10
	::RPG::Client::CameraDataAndFlags* Field_1_1; // 0x18
	::RPG::Client::CameraFightStateSelectLightTeamEntityConfig* Field_1_2; // 0x20
	::System::Single Field_1_4; // 0x28
	::UnityEngine::Vector3 Field_1_3; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_560870B67AD802CB__CTOR_OFFSET))(this);
	}

	::System::Void Init(::Class_2_5D178EC982C80153* a1, ::RPG::Client::CameraDataAndFlags* a2, ::RPG::Client::CameraFightStateCommonConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5D178EC982C80153*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraFightStateCommonConfig*))((::PBYTE)hIl2Cpp + CLASS_1_560870B67AD802CB_INIT_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_560870B67AD802CB_RESET_OFFSET))(this);
	}

	::System::Void Refresh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_560870B67AD802CB_REFRESH_OFFSET))(this);
	}

	::RPG::Client::CameraFightStateCommonConfig* GetFightStateConfig()
	{
		return ((::RPG::Client::CameraFightStateCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_560870B67AD802CB_GETFIGHTSTATECONFIG_OFFSET))(this);
	}
};
