#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionTemplate_1.h"

namespace RPG::Client { class WolfBroGunPlayTargetActionConfig_WaitAnimState; }

#define CLASS_3_600078DD1C04CE61_METHOD_3_0581090195E9C81F_OFFSET UNITYSDK_OFFSET(0x16297240)
#define CLASS_3_600078DD1C04CE61_METHOD_3_3BEE013982122797_OFFSET UNITYSDK_OFFSET(0x162973A0)
#define CLASS_3_600078DD1C04CE61_METHOD_3_9C45022812211693_OFFSET UNITYSDK_OFFSET(0x162975B0)
#define CLASS_3_600078DD1C04CE61__CTOR_OFFSET UNITYSDK_OFFSET(0x16297620)

inline static constexpr unsigned int Class_3_600078DD1C04CE61_TypeDefinitionIndex = 68659;

class Class_3_600078DD1C04CE61 : public ::RPG::Client::WolfBroGunPlayTargetActionTemplate_1<::RPG::Client::WolfBroGunPlayTargetActionConfig_WaitAnimState*>
{
public:
	::System::Int32 HFHILHOCPNL; // 0x28
	::System::Boolean PPCOLLOBFHH; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_600078DD1C04CE61__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_0581090195E9C81F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_600078DD1C04CE61_METHOD_3_0581090195E9C81F_OFFSET))(this);
	}

	::System::Void Method_3_9C45022812211693(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_600078DD1C04CE61_METHOD_3_9C45022812211693_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_3BEE013982122797()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_600078DD1C04CE61_METHOD_3_3BEE013982122797_OFFSET))(this);
	}
};
