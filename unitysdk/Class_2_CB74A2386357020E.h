#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_96.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ModifyCalcOpType.h"

class Class_1_2350AF62BA84EDFD;
class Class_1_2670985A37556FEA;
namespace RPG::Client { class GridFightRoleSkillDetail; }
namespace System { class String; }

#define CLASS_2_CB74A2386357020E_METHOD_2_094091F2BE8306AF_OFFSET UNITYSDK_OFFSET(0x9559E20)
#define CLASS_2_CB74A2386357020E_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x9559DD0)
#define CLASS_2_CB74A2386357020E_METHOD_2_66878FE8AEA98ECE_OFFSET UNITYSDK_OFFSET(0x955A160)
#define CLASS_2_CB74A2386357020E_METHOD_2_B22F2E3E41143CF0_OFFSET UNITYSDK_OFFSET(0x955A310)
#define CLASS_2_CB74A2386357020E_METHOD_2_B7EDD769B79C6563_OFFSET UNITYSDK_OFFSET(0x955A040)
#define CLASS_2_CB74A2386357020E_METHOD_2_B95515B9CD4B321A_OFFSET UNITYSDK_OFFSET(0x9559F30)
#define CLASS_2_CB74A2386357020E__CTOR_OFFSET UNITYSDK_OFFSET(0x9559E10)

inline static constexpr unsigned int Class_2_CB74A2386357020E_TypeDefinitionIndex = 60107;

class Class_2_CB74A2386357020E : public ::Class_1_43BD383C98B4C0C5_96
{
public:
	::RPG::Client::GridFightRoleSkillDetail* Field_2_0; // 0x10
	::Class_1_2670985A37556FEA* Field_2_1; // 0x18

	::System::Void _ctor(::RPG::Client::GridFightRoleSkillDetail* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRoleSkillDetail*))((::PBYTE)hIl2Cpp + CLASS_2_CB74A2386357020E__CTOR_OFFSET))(this, a1);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB74A2386357020E_METHOD_2_128774387667156B_OFFSET))(this);
	}

	::System::String* Method_2_094091F2BE8306AF(::Class_1_2670985A37556FEA* a1, ::Class_1_2350AF62BA84EDFD* a2)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_2670985A37556FEA*, ::Class_1_2350AF62BA84EDFD*))((::PBYTE)hIl2Cpp + CLASS_2_CB74A2386357020E_METHOD_2_094091F2BE8306AF_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_B95515B9CD4B321A()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB74A2386357020E_METHOD_2_B95515B9CD4B321A_OFFSET))(this);
	}

	::System::String* Method_2_B7EDD769B79C6563()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB74A2386357020E_METHOD_2_B7EDD769B79C6563_OFFSET))(this);
	}

	::System::String* Method_2_66878FE8AEA98ECE(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_CB74A2386357020E_METHOD_2_66878FE8AEA98ECE_OFFSET))(this, a1);
	}

	::System::String* Method_2_B22F2E3E41143CF0(::RPG::GameCore::ModifyCalcOpType a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::ModifyCalcOpType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_CB74A2386357020E_METHOD_2_B22F2E3E41143CF0_OFFSET))(this, a1, a2);
	}
};
