#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_661;
namespace RPG::Client { class AvatarData_UpgradeAvatarData; }
namespace RPG::Client { class IAvatarInfoProvider; }

#define CLASS_1_E33127B1C1499A23_METHOD_1_24EFE05F1F2499AA_OFFSET UNITYSDK_OFFSET(0x11981010)
#define CLASS_1_E33127B1C1499A23_METHOD_1_379C2C7747DAA3F1_OFFSET UNITYSDK_OFFSET(0x119810B0)
#define CLASS_1_E33127B1C1499A23__CTOR_OFFSET UNITYSDK_OFFSET(0x11981100)

inline static constexpr unsigned int Class_1_E33127B1C1499A23_TypeDefinitionIndex = 57641;

class Class_1_E33127B1C1499A23 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_661* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E33127B1C1499A23__CTOR_OFFSET))(this);
	}

	::RPG::Client::AvatarData_UpgradeAvatarData* Method_1_24EFE05F1F2499AA(::RPG::Client::IAvatarInfoProvider* a1)
	{
		return ((::RPG::Client::AvatarData_UpgradeAvatarData*(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_1_E33127B1C1499A23_METHOD_1_24EFE05F1F2499AA_OFFSET))(this, a1);
	}

	::Class_1_E33127B1C1499A23* Method_1_379C2C7747DAA3F1(::Class_0_16E4307DCC419505_661* a1)
	{
		return ((::Class_1_E33127B1C1499A23*(*)(::PVOID, ::Class_0_16E4307DCC419505_661*))((::PBYTE)hIl2Cpp + CLASS_1_E33127B1C1499A23_METHOD_1_379C2C7747DAA3F1_OFFSET))(this, a1);
	}
};
