#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionTemplate_1.h"

namespace RPG::Client { class WolfBroGunPlayTargetActionConfig_ScatterFire; }

#define CLASS_3_3E907974EDF028D8_2_METHOD_3_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0x134D86F0)
#define CLASS_3_3E907974EDF028D8_2_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x134D8690)
#define CLASS_3_3E907974EDF028D8_2_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x134D8630)
#define CLASS_3_3E907974EDF028D8_2_METHOD_3_734CC582838F149E_OFFSET UNITYSDK_OFFSET(0x134D82C0)
#define CLASS_3_3E907974EDF028D8_2_METHOD_3_B235E757922104A8_OFFSET UNITYSDK_OFFSET(0x134D7FF0)
#define CLASS_3_3E907974EDF028D8_2_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x134D7FB0)
#define CLASS_3_3E907974EDF028D8_2__CTOR_OFFSET UNITYSDK_OFFSET(0x134D8610)

inline static constexpr unsigned int Class_3_3E907974EDF028D8_2_TypeDefinitionIndex = 64259;

class Class_3_3E907974EDF028D8_2 : public ::RPG::Client::WolfBroGunPlayTargetActionTemplate_1<::RPG::Client::WolfBroGunPlayTargetActionConfig_ScatterFire*>
{
public:
	::System::Int32 Field_3_0; // 0x28
	::System::Single Field_3_1; // 0x2C
	::System::Single Field_3_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3E907974EDF028D8_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3E907974EDF028D8_2_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_B235E757922104A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3E907974EDF028D8_2_METHOD_3_B235E757922104A8_OFFSET))(this);
	}

	::System::Void Method_3_734CC582838F149E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_3E907974EDF028D8_2_METHOD_3_734CC582838F149E_OFFSET))(this, a1);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3E907974EDF028D8_2_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3E907974EDF028D8_2_METHOD_3_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_3_3C927B51D2142A24(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_3E907974EDF028D8_2_METHOD_3_3C927B51D2142A24_OFFSET))(this, a1);
	}
};
