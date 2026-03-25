#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_5D178EC982C80153;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCommonConfig; }

#define CLASS_1_B889424C3778C9BC_1_GETFIGHTSTATECONFIG_OFFSET UNITYSDK_OFFSET(0x10B9DCE0)
#define CLASS_1_B889424C3778C9BC_1_INIT_OFFSET UNITYSDK_OFFSET(0x10B9D1A0)
#define CLASS_1_B889424C3778C9BC_1_METHOD_1_7EAA8879197594BA_OFFSET UNITYSDK_OFFSET(0x10B9D2B0)
#define CLASS_1_B889424C3778C9BC_1_REFRESH_OFFSET UNITYSDK_OFFSET(0x10B9DCA0)
#define CLASS_1_B889424C3778C9BC_1_RESET_OFFSET UNITYSDK_OFFSET(0x10B9D210)
#define CLASS_1_B889424C3778C9BC_1__CTOR_OFFSET UNITYSDK_OFFSET(0x10B9DD20)

inline static constexpr unsigned int Class_1_B889424C3778C9BC_1_TypeDefinitionIndex = 56886;

class Class_1_B889424C3778C9BC_1 : public ::System::Object
{
public:
	::RPG::Client::CameraFightStateCommonConfig* Field_1_2; // 0x10
	::RPG::Client::CameraDataAndFlags* Field_1_1; // 0x18
	::Class_2_5D178EC982C80153* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B889424C3778C9BC_1__CTOR_OFFSET))(this);
	}

	::System::Void Init(::Class_2_5D178EC982C80153* a1, ::RPG::Client::CameraDataAndFlags* a2, ::RPG::Client::CameraFightStateCommonConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5D178EC982C80153*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraFightStateCommonConfig*))((::PBYTE)hIl2Cpp + CLASS_1_B889424C3778C9BC_1_INIT_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B889424C3778C9BC_1_RESET_OFFSET))(this);
	}

	::System::Void Refresh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B889424C3778C9BC_1_REFRESH_OFFSET))(this);
	}

	::RPG::Client::CameraFightStateCommonConfig* GetFightStateConfig()
	{
		return ((::RPG::Client::CameraFightStateCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B889424C3778C9BC_1_GETFIGHTSTATECONFIG_OFFSET))(this);
	}

	::System::Void Method_1_7EAA8879197594BA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B889424C3778C9BC_1_METHOD_1_7EAA8879197594BA_OFFSET))(this);
	}
};
