#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionTemplate_1.h"

namespace RPG::Client { class WolfBroGunPlayTargetActionConfig_ScatterFire; }

#define CLASS_3_714DC6C3FC28F03D_METHOD_3_734CC582838F149E_OFFSET UNITYSDK_OFFSET(0x154D01A0)
#define CLASS_3_714DC6C3FC28F03D_METHOD_3_B235E757922104A8_OFFSET UNITYSDK_OFFSET(0x154CFF00)
#define CLASS_3_714DC6C3FC28F03D_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x154CFEC0)
#define CLASS_3_714DC6C3FC28F03D__CTOR_OFFSET UNITYSDK_OFFSET(0x154D04A0)

inline static constexpr unsigned int Class_3_714DC6C3FC28F03D_TypeDefinitionIndex = 68701;

class Class_3_714DC6C3FC28F03D : public ::RPG::Client::WolfBroGunPlayTargetActionTemplate_1<::RPG::Client::WolfBroGunPlayTargetActionConfig_ScatterFire*>
{
public:
	::System::Single PDLCENKDNGO; // 0x28
	::System::Int32 GAGEBMIOEGN; // 0x2C
	::System::Single NMPFPCFOGMB; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_714DC6C3FC28F03D__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_714DC6C3FC28F03D_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_B235E757922104A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_714DC6C3FC28F03D_METHOD_3_B235E757922104A8_OFFSET))(this);
	}

	::System::Void Method_3_734CC582838F149E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_714DC6C3FC28F03D_METHOD_3_734CC582838F149E_OFFSET))(this, a1);
	}
};
