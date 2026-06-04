#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionTemplate_1.h"

namespace RPG::Client { class WolfBroGunPlayTargetActionConfig_Die; }

#define CLASS_3_4F905296F8BDC384_METHOD_3_5176DC743E478510_OFFSET UNITYSDK_OFFSET(0x10C873A0)
#define CLASS_3_4F905296F8BDC384_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x10C87560)
#define CLASS_3_4F905296F8BDC384__CTOR_OFFSET UNITYSDK_OFFSET(0x10C87540)

inline static constexpr unsigned int Class_3_4F905296F8BDC384_TypeDefinitionIndex = 64255;

class Class_3_4F905296F8BDC384 : public ::RPG::Client::WolfBroGunPlayTargetActionTemplate_1<::RPG::Client::WolfBroGunPlayTargetActionConfig_Die*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F905296F8BDC384__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_5176DC743E478510()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F905296F8BDC384_METHOD_3_5176DC743E478510_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F905296F8BDC384_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}
};
