#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionTemplate_1.h"

namespace RPG::Client { class WolfBroGunPlayTargetActionConfig_WaitAnimState; }

#define CLASS_3_79D221F207EC0981_METHOD_3_3BEE013982122797_OFFSET UNITYSDK_OFFSET(0x142F6B60)
#define CLASS_3_79D221F207EC0981_METHOD_3_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0x142F6EB0)
#define CLASS_3_79D221F207EC0981_METHOD_3_479759059E440327_OFFSET UNITYSDK_OFFSET(0x142F6D70)
#define CLASS_3_79D221F207EC0981_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x142F6E50)
#define CLASS_3_79D221F207EC0981_METHOD_3_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x142F69C0)
#define CLASS_3_79D221F207EC0981__CTOR_OFFSET UNITYSDK_OFFSET(0x142F6E30)

inline static constexpr unsigned int Class_3_79D221F207EC0981_TypeDefinitionIndex = 64251;

class Class_3_79D221F207EC0981 : public ::RPG::Client::WolfBroGunPlayTargetActionTemplate_1<::RPG::Client::WolfBroGunPlayTargetActionConfig_WaitAnimState*>
{
public:
	::System::Boolean Field_3_0; // 0x28
	::System::Int32 Field_3_1; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_79D221F207EC0981__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_60E1F7F58CCF739F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_79D221F207EC0981_METHOD_3_60E1F7F58CCF739F_OFFSET))(this);
	}

	::System::Void Method_3_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_79D221F207EC0981_METHOD_3_479759059E440327_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_3BEE013982122797()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_79D221F207EC0981_METHOD_3_3BEE013982122797_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_79D221F207EC0981_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_3_3C927B51D2142A24(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_79D221F207EC0981_METHOD_3_3C927B51D2142A24_OFFSET))(this, a1);
	}
};
