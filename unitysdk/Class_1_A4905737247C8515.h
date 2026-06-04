#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_898DC1EA1181F3B8;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCommonConfig; }
namespace RPG::Client { class CameraFightStateLightTeamDollyConfig; }

#define CLASS_1_A4905737247C8515_GETFIGHTSTATECONFIG_OFFSET UNITYSDK_OFFSET(0xBF4B810)
#define CLASS_1_A4905737247C8515_INIT_OFFSET UNITYSDK_OFFSET(0xBF4B850)
#define CLASS_1_A4905737247C8515_METHOD_1_41F5D9C0F0A306F5_OFFSET UNITYSDK_OFFSET(0xBF4BD30)
#define CLASS_1_A4905737247C8515_REFRESH_OFFSET UNITYSDK_OFFSET(0xBF4B8F0)
#define CLASS_1_A4905737247C8515_RESET_OFFSET UNITYSDK_OFFSET(0xBF4BC80)
#define CLASS_1_A4905737247C8515__CTOR_OFFSET UNITYSDK_OFFSET(0xBF4C090)

inline static constexpr unsigned int Class_1_A4905737247C8515_TypeDefinitionIndex = 65065;

class Class_1_A4905737247C8515 : public ::System::Object
{
public:
	::RPG::Client::CameraDataAndFlags* Field_1_0; // 0x10
	::Class_2_898DC1EA1181F3B8* Field_1_1; // 0x18
	::RPG::Client::CameraFightStateLightTeamDollyConfig* Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4905737247C8515__CTOR_OFFSET))(this);
	}

	::RPG::Client::CameraFightStateCommonConfig* GetFightStateConfig()
	{
		return ((::RPG::Client::CameraFightStateCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4905737247C8515_GETFIGHTSTATECONFIG_OFFSET))(this);
	}

	::System::Void Init(::Class_2_898DC1EA1181F3B8* a1, ::RPG::Client::CameraDataAndFlags* a2, ::RPG::Client::CameraFightStateCommonConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_898DC1EA1181F3B8*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraFightStateCommonConfig*))((::PBYTE)hIl2Cpp + CLASS_1_A4905737247C8515_INIT_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Refresh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4905737247C8515_REFRESH_OFFSET))(this);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4905737247C8515_RESET_OFFSET))(this);
	}

	::System::Void Method_1_41F5D9C0F0A306F5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4905737247C8515_METHOD_1_41F5D9C0F0A306F5_OFFSET))(this);
	}
};
