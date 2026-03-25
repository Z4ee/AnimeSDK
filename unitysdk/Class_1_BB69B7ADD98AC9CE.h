#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_482F3423DE650EAD;
namespace RPG::Client { class WolfBroGunPlayTarget; }
namespace RPG::Client { class WolfBroGunPlayTargetActionConfig; }

#define CLASS_1_BB69B7ADD98AC9CE_METHOD_1_8EC635C00CAF8F14_OFFSET UNITYSDK_OFFSET(0x1061B210)

inline static constexpr unsigned int Class_1_BB69B7ADD98AC9CE_TypeDefinitionIndex = 56086;

class Class_1_BB69B7ADD98AC9CE : public ::System::Object
{
public:
	static ::Class_1_482F3423DE650EAD* Method_1_8EC635C00CAF8F14(::RPG::Client::WolfBroGunPlayTargetActionConfig* a1, ::RPG::Client::WolfBroGunPlayTarget* a2)
	{
		return ((::Class_1_482F3423DE650EAD*(*)(::RPG::Client::WolfBroGunPlayTargetActionConfig*, ::RPG::Client::WolfBroGunPlayTarget*))((::PBYTE)hIl2Cpp + CLASS_1_BB69B7ADD98AC9CE_METHOD_1_8EC635C00CAF8F14_OFFSET))(a1, a2);
	}
};
