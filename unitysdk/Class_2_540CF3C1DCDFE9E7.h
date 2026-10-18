#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_116.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ModifyCalcOpType.h"

class Class_1_2350AF62BA84EDFD;
class Class_1_2670985A37556FEA;
namespace RPG::Client { class GridFightRoleSkillDetail; }
namespace System { class String; }

#define CLASS_2_540CF3C1DCDFE9E7_METHOD_2_005458828D30005B_OFFSET UNITYSDK_OFFSET(0x16598FD0)
#define CLASS_2_540CF3C1DCDFE9E7_METHOD_2_5A8475C532AEDE54_OFFSET UNITYSDK_OFFSET(0x16598C10)
#define CLASS_2_540CF3C1DCDFE9E7_METHOD_2_6C1BF06691A9302F_OFFSET UNITYSDK_OFFSET(0x16598A90)
#define CLASS_2_540CF3C1DCDFE9E7_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x16598A10)
#define CLASS_2_540CF3C1DCDFE9E7_METHOD_2_C005984CA89883EE_OFFSET UNITYSDK_OFFSET(0x16598DE0)
#define CLASS_2_540CF3C1DCDFE9E7_METHOD_2_E02F17D84BCCD5D5_OFFSET UNITYSDK_OFFSET(0x16599230)
#define CLASS_2_540CF3C1DCDFE9E7__CTOR_OFFSET UNITYSDK_OFFSET(0x16598A80)

inline static constexpr unsigned int Class_2_540CF3C1DCDFE9E7_TypeDefinitionIndex = 65287;

class Class_2_540CF3C1DCDFE9E7 : public ::Class_1_43BD383C98B4C0C5_116
{
public:
	::RPG::Client::GridFightRoleSkillDetail* NJFFGCELHIM; // 0x10
	::Class_1_2670985A37556FEA* JKLBAAHFJDJ; // 0x18

	::System::Void _ctor(::RPG::Client::GridFightRoleSkillDetail* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRoleSkillDetail*))((::PBYTE)hIl2Cpp + CLASS_2_540CF3C1DCDFE9E7__CTOR_OFFSET))(this, a1);
	}

	::System::String* Method_2_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_540CF3C1DCDFE9E7_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::String* Method_2_6C1BF06691A9302F(::Class_1_2670985A37556FEA* a1, ::Class_1_2350AF62BA84EDFD* a2)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_2670985A37556FEA*, ::Class_1_2350AF62BA84EDFD*))((::PBYTE)hIl2Cpp + CLASS_2_540CF3C1DCDFE9E7_METHOD_2_6C1BF06691A9302F_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_5A8475C532AEDE54()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_540CF3C1DCDFE9E7_METHOD_2_5A8475C532AEDE54_OFFSET))(this);
	}

	::System::String* Method_2_C005984CA89883EE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_540CF3C1DCDFE9E7_METHOD_2_C005984CA89883EE_OFFSET))(this);
	}

	::System::String* Method_2_005458828D30005B(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_540CF3C1DCDFE9E7_METHOD_2_005458828D30005B_OFFSET))(this, a1);
	}

	::System::String* Method_2_E02F17D84BCCD5D5(::RPG::GameCore::ModifyCalcOpType a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::ModifyCalcOpType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_540CF3C1DCDFE9E7_METHOD_2_E02F17D84BCCD5D5_OFFSET))(this, a1, a2);
	}
};
