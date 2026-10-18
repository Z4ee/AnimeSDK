#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_4C3F9D9CF221EFEC;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCommonConfig; }
namespace RPG::Client { class CameraFightStateSelectLightTeamEntityConfig; }

#define CLASS_1_C2A7F655EF1D041A_GETFIGHTSTATECONFIG_OFFSET UNITYSDK_OFFSET(0x15C34780)
#define CLASS_1_C2A7F655EF1D041A_INIT_OFFSET UNITYSDK_OFFSET(0x15C33D30)
#define CLASS_1_C2A7F655EF1D041A_REFRESH_OFFSET UNITYSDK_OFFSET(0x15C33E90)
#define CLASS_1_C2A7F655EF1D041A_RESET_OFFSET UNITYSDK_OFFSET(0x15C33DF0)
#define CLASS_1_C2A7F655EF1D041A__CTOR_OFFSET UNITYSDK_OFFSET(0x15C347C0)

inline static constexpr unsigned int Class_1_C2A7F655EF1D041A_TypeDefinitionIndex = 69604;

class Class_1_C2A7F655EF1D041A : public ::System::Object
{
public:
	::RPG::Client::CameraFightStateSelectLightTeamEntityConfig* MAFIONBKPIE; // 0x10
	::RPG::Client::CameraDataAndFlags* OMKPPIGCFDN; // 0x18
	::Class_2_4C3F9D9CF221EFEC* LEOGIKABIGF; // 0x20
	::System::Single JONIHNEBKCO; // 0x28
	::UnityEngine::Vector3 EPGIKHNGDEB; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2A7F655EF1D041A__CTOR_OFFSET))(this);
	}

	::System::Void Init(::Class_2_4C3F9D9CF221EFEC* a1, ::RPG::Client::CameraDataAndFlags* a2, ::RPG::Client::CameraFightStateCommonConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_4C3F9D9CF221EFEC*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraFightStateCommonConfig*))((::PBYTE)hIl2Cpp + CLASS_1_C2A7F655EF1D041A_INIT_OFFSET))(this, a1, a2, a3);
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
