#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_898DC1EA1181F3B8;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCommonConfig; }
namespace RPG::Client { class CameraFightStateSelectLightTeamEntityConfig; }

#define CLASS_1_C2A7F655EF1D041A_GETFIGHTSTATECONFIG_OFFSET UNITYSDK_OFFSET(0x13AB7D20)
#define CLASS_1_C2A7F655EF1D041A_INIT_OFFSET UNITYSDK_OFFSET(0x13AB7410)
#define CLASS_1_C2A7F655EF1D041A_REFRESH_OFFSET UNITYSDK_OFFSET(0x13AB7570)
#define CLASS_1_C2A7F655EF1D041A_RESET_OFFSET UNITYSDK_OFFSET(0x13AB74D0)
#define CLASS_1_C2A7F655EF1D041A__CTOR_OFFSET UNITYSDK_OFFSET(0x13AB7D60)

inline static constexpr unsigned int Class_1_C2A7F655EF1D041A_TypeDefinitionIndex = 65070;

class Class_1_C2A7F655EF1D041A : public ::System::Object
{
public:
	::Class_2_898DC1EA1181F3B8* Field_1_0; // 0x10
	::RPG::Client::CameraDataAndFlags* Field_1_1; // 0x18
	::RPG::Client::CameraFightStateSelectLightTeamEntityConfig* Field_1_2; // 0x20
	::UnityEngine::Vector3 Field_1_3; // 0x28
	::System::Single Field_1_4; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2A7F655EF1D041A__CTOR_OFFSET))(this);
	}

	::System::Void Init(::Class_2_898DC1EA1181F3B8* a1, ::RPG::Client::CameraDataAndFlags* a2, ::RPG::Client::CameraFightStateCommonConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_898DC1EA1181F3B8*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraFightStateCommonConfig*))((::PBYTE)hIl2Cpp + CLASS_1_C2A7F655EF1D041A_INIT_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2A7F655EF1D041A_RESET_OFFSET))(this);
	}

	::System::Void Refresh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2A7F655EF1D041A_REFRESH_OFFSET))(this);
	}

	::RPG::Client::CameraFightStateCommonConfig* GetFightStateConfig()
	{
		return ((::RPG::Client::CameraFightStateCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2A7F655EF1D041A_GETFIGHTSTATECONFIG_OFFSET))(this);
	}
};
