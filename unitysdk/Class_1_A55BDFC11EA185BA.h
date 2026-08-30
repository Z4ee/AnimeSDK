#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_4C3F9D9CF221EFEC;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCommonConfig; }
namespace RPG::Client { class CameraFightStateSelectDarkTeamSelfEntityConfig; }

#define CLASS_1_A55BDFC11EA185BA_GETFIGHTSTATECONFIG_OFFSET UNITYSDK_OFFSET(0x19960C10)
#define CLASS_1_A55BDFC11EA185BA_INIT_OFFSET UNITYSDK_OFFSET(0x199603F0)
#define CLASS_1_A55BDFC11EA185BA_REFRESH_OFFSET UNITYSDK_OFFSET(0x19960550)
#define CLASS_1_A55BDFC11EA185BA_RESET_OFFSET UNITYSDK_OFFSET(0x199604B0)
#define CLASS_1_A55BDFC11EA185BA__CTOR_OFFSET UNITYSDK_OFFSET(0x19960C50)

inline static constexpr unsigned int Class_1_A55BDFC11EA185BA_TypeDefinitionIndex = 69567;

class Class_1_A55BDFC11EA185BA : public ::System::Object
{
public:
	::Class_2_4C3F9D9CF221EFEC* LEOGIKABIGF; // 0x10
	::RPG::Client::CameraFightStateSelectDarkTeamSelfEntityConfig* MAFIONBKPIE; // 0x18
	::RPG::Client::CameraDataAndFlags* OMKPPIGCFDN; // 0x20
	::UnityEngine::Vector3 EPGIKHNGDEB; // 0x28
	::System::Single JONIHNEBKCO; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A55BDFC11EA185BA__CTOR_OFFSET))(this);
	}

	::System::Void Init(::Class_2_4C3F9D9CF221EFEC* a1, ::RPG::Client::CameraDataAndFlags* a2, ::RPG::Client::CameraFightStateCommonConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_4C3F9D9CF221EFEC*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraFightStateCommonConfig*))((::PBYTE)hIl2Cpp + CLASS_1_A55BDFC11EA185BA_INIT_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A55BDFC11EA185BA_RESET_OFFSET))(this);
	}

	::System::Void Refresh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A55BDFC11EA185BA_REFRESH_OFFSET))(this);
	}

	::RPG::Client::CameraFightStateCommonConfig* GetFightStateConfig()
	{
		return ((::RPG::Client::CameraFightStateCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A55BDFC11EA185BA_GETFIGHTSTATECONFIG_OFFSET))(this);
	}
};
