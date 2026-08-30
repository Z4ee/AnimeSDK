#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_4C3F9D9CF221EFEC;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCommonConfig; }

#define CLASS_1_B889424C3778C9BC_GETFIGHTSTATECONFIG_OFFSET UNITYSDK_OFFSET(0xC316150)
#define CLASS_1_B889424C3778C9BC_INIT_OFFSET UNITYSDK_OFFSET(0xC316190)
#define CLASS_1_B889424C3778C9BC_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xC3162E0)
#define CLASS_1_B889424C3778C9BC_REFRESH_OFFSET UNITYSDK_OFFSET(0xC316200)
#define CLASS_1_B889424C3778C9BC_RESET_OFFSET UNITYSDK_OFFSET(0xC316240)
#define CLASS_1_B889424C3778C9BC__CTOR_OFFSET UNITYSDK_OFFSET(0xC3165C0)

inline static constexpr unsigned int Class_1_B889424C3778C9BC_TypeDefinitionIndex = 69554;

class Class_1_B889424C3778C9BC : public ::System::Object
{
public:
	::RPG::Client::CameraFightStateCommonConfig* MAFIONBKPIE; // 0x10
	::Class_2_4C3F9D9CF221EFEC* LEOGIKABIGF; // 0x18
	::RPG::Client::CameraDataAndFlags* OMKPPIGCFDN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B889424C3778C9BC__CTOR_OFFSET))(this);
	}

	::RPG::Client::CameraFightStateCommonConfig* GetFightStateConfig()
	{
		return ((::RPG::Client::CameraFightStateCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B889424C3778C9BC_GETFIGHTSTATECONFIG_OFFSET))(this);
	}

	::System::Void Init(::Class_2_4C3F9D9CF221EFEC* a1, ::RPG::Client::CameraDataAndFlags* a2, ::RPG::Client::CameraFightStateCommonConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_4C3F9D9CF221EFEC*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraFightStateCommonConfig*))((::PBYTE)hIl2Cpp + CLASS_1_B889424C3778C9BC_INIT_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Refresh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B889424C3778C9BC_REFRESH_OFFSET))(this);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B889424C3778C9BC_RESET_OFFSET))(this);
	}

	::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B889424C3778C9BC_METHOD_1_D0BD1377F2594D33_OFFSET))(this);
	}
};
