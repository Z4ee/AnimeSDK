#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_4C3F9D9CF221EFEC;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCommonConfig; }
namespace RPG::Client { class CameraFightStateSelectLightTeamEntityConfig; }

#define CLASS_1_C2A7F655EF1D041A_GETFIGHTSTATECONFIG_OFFSET UNITYSDK_OFFSET(0x158E3CC0)
#define CLASS_1_C2A7F655EF1D041A_INIT_OFFSET UNITYSDK_OFFSET(0x158E3270)
#define CLASS_1_C2A7F655EF1D041A_REFRESH_OFFSET UNITYSDK_OFFSET(0x158E33D0)
#define CLASS_1_C2A7F655EF1D041A_RESET_OFFSET UNITYSDK_OFFSET(0x158E3330)
#define CLASS_1_C2A7F655EF1D041A__CTOR_OFFSET UNITYSDK_OFFSET(0x158E3D00)

inline static constexpr unsigned int Class_1_C2A7F655EF1D041A_TypeDefinitionIndex = 69568;

class Class_1_C2A7F655EF1D041A : public ::System::Object
{
public:
	::RPG::Client::CameraFightStateSelectLightTeamEntityConfig* MAFIONBKPIE; // 0x10
	::Class_2_4C3F9D9CF221EFEC* LEOGIKABIGF; // 0x18
	::RPG::Client::CameraDataAndFlags* OMKPPIGCFDN; // 0x20
	::UnityEngine::Vector3 EPGIKHNGDEB; // 0x28
	::System::Single JONIHNEBKCO; // 0x34

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
