#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionTemplate_1.h"

namespace RPG::Client { class WolfBroGunPlayTargetActionConfig_Flip; }

#define CLASS_3_3E907974EDF028D8_METHOD_3_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0x136B8680)
#define CLASS_3_3E907974EDF028D8_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x136B8620)
#define CLASS_3_3E907974EDF028D8_METHOD_3_AF36EBA0C8D1FBA2_OFFSET UNITYSDK_OFFSET(0x136B8410)
#define CLASS_3_3E907974EDF028D8_METHOD_3_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x136B82C0)
#define CLASS_3_3E907974EDF028D8__CTOR_OFFSET UNITYSDK_OFFSET(0x136B8600)

inline static constexpr unsigned int Class_3_3E907974EDF028D8_TypeDefinitionIndex = 64254;

class Class_3_3E907974EDF028D8 : public ::RPG::Client::WolfBroGunPlayTargetActionTemplate_1<::RPG::Client::WolfBroGunPlayTargetActionConfig_Flip*>
{
public:
	::System::Int32 Field_3_0; // 0x28
	::System::Single Field_3_1; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3E907974EDF028D8__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3E907974EDF028D8_METHOD_3_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_3_AF36EBA0C8D1FBA2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_3E907974EDF028D8_METHOD_3_AF36EBA0C8D1FBA2_OFFSET))(this, a1);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3E907974EDF028D8_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_3_3C927B51D2142A24(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_3E907974EDF028D8_METHOD_3_3C927B51D2142A24_OFFSET))(this, a1);
	}
};
