#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionTemplate_1.h"

namespace RPG::Client { class WolfBroGunPlayTargetActionConfig_Fire; }

#define CLASS_3_3E907974EDF028D8_1_METHOD_3_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0xA441840)
#define CLASS_3_3E907974EDF028D8_1_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xA4417E0)
#define CLASS_3_3E907974EDF028D8_1_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xA441780)
#define CLASS_3_3E907974EDF028D8_1_METHOD_3_B235E757922104A8_OFFSET UNITYSDK_OFFSET(0xA441170)
#define CLASS_3_3E907974EDF028D8_1_METHOD_3_C291676ABF9E9E8D_OFFSET UNITYSDK_OFFSET(0xA441420)
#define CLASS_3_3E907974EDF028D8_1_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA441130)
#define CLASS_3_3E907974EDF028D8_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA441760)

inline static constexpr unsigned int Class_3_3E907974EDF028D8_1_TypeDefinitionIndex = 64258;

class Class_3_3E907974EDF028D8_1 : public ::RPG::Client::WolfBroGunPlayTargetActionTemplate_1<::RPG::Client::WolfBroGunPlayTargetActionConfig_Fire*>
{
public:
	::System::Int32 Field_3_0; // 0x28
	::System::Single Field_3_1; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3E907974EDF028D8_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3E907974EDF028D8_1_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_B235E757922104A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3E907974EDF028D8_1_METHOD_3_B235E757922104A8_OFFSET))(this);
	}

	::System::Void Method_3_C291676ABF9E9E8D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_3E907974EDF028D8_1_METHOD_3_C291676ABF9E9E8D_OFFSET))(this, a1);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3E907974EDF028D8_1_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3E907974EDF028D8_1_METHOD_3_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_3_3C927B51D2142A24(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_3E907974EDF028D8_1_METHOD_3_3C927B51D2142A24_OFFSET))(this, a1);
	}
};
