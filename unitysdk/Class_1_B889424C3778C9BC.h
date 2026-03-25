#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_5D178EC982C80153;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCommonConfig; }

#define CLASS_1_B889424C3778C9BC_GETFIGHTSTATECONFIG_OFFSET UNITYSDK_OFFSET(0x8CA7660)
#define CLASS_1_B889424C3778C9BC_INIT_OFFSET UNITYSDK_OFFSET(0x8CA76A0)
#define CLASS_1_B889424C3778C9BC_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x8CA77F0)
#define CLASS_1_B889424C3778C9BC_REFRESH_OFFSET UNITYSDK_OFFSET(0x8CA7710)
#define CLASS_1_B889424C3778C9BC_RESET_OFFSET UNITYSDK_OFFSET(0x8CA7750)
#define CLASS_1_B889424C3778C9BC__CTOR_OFFSET UNITYSDK_OFFSET(0x8CA7AD0)

inline static constexpr unsigned int Class_1_B889424C3778C9BC_TypeDefinitionIndex = 56885;

class Class_1_B889424C3778C9BC : public ::System::Object
{
public:
	::RPG::Client::CameraFightStateCommonConfig* Field_1_2; // 0x10
	::Class_2_5D178EC982C80153* Field_1_0; // 0x18
	::RPG::Client::CameraDataAndFlags* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B889424C3778C9BC__CTOR_OFFSET))(this);
	}

	::RPG::Client::CameraFightStateCommonConfig* GetFightStateConfig()
	{
		return ((::RPG::Client::CameraFightStateCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B889424C3778C9BC_GETFIGHTSTATECONFIG_OFFSET))(this);
	}

	::System::Void Init(::Class_2_5D178EC982C80153* a1, ::RPG::Client::CameraDataAndFlags* a2, ::RPG::Client::CameraFightStateCommonConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5D178EC982C80153*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraFightStateCommonConfig*))((::PBYTE)hIl2Cpp + CLASS_1_B889424C3778C9BC_INIT_OFFSET))(this, a1, a2, a3);
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
