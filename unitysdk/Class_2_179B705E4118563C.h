#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_107.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ModifyCalcOpType.h"

class Class_1_2350AF62BA84EDFD;
class Class_1_2670985A37556FEA;
namespace RPG::Client { class GridFightRoleSkillDetail; }
namespace System { class String; }

#define CLASS_2_179B705E4118563C_METHOD_2_005458828D30005B_OFFSET UNITYSDK_OFFSET(0x1429E3B0)
#define CLASS_2_179B705E4118563C_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1429DEA0)
#define CLASS_2_179B705E4118563C_METHOD_2_96548BB5E28CF746_OFFSET UNITYSDK_OFFSET(0x1429DEF0)
#define CLASS_2_179B705E4118563C_METHOD_2_D3E66E10FB99D50B_OFFSET UNITYSDK_OFFSET(0x1429E070)
#define CLASS_2_179B705E4118563C_METHOD_2_D86D853739B9805D_OFFSET UNITYSDK_OFFSET(0x1429E200)
#define CLASS_2_179B705E4118563C_METHOD_2_E02F17D84BCCD5D5_OFFSET UNITYSDK_OFFSET(0x1429E610)
#define CLASS_2_179B705E4118563C__CTOR_OFFSET UNITYSDK_OFFSET(0x1429DEE0)

inline static constexpr unsigned int Class_2_179B705E4118563C_TypeDefinitionIndex = 61042;

class Class_2_179B705E4118563C : public ::Class_1_43BD383C98B4C0C5_107
{
public:
	::Class_1_2670985A37556FEA* Field_2_0; // 0x10
	::RPG::Client::GridFightRoleSkillDetail* Field_2_1; // 0x18

	::System::Void _ctor(::RPG::Client::GridFightRoleSkillDetail* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRoleSkillDetail*))((::PBYTE)hIl2Cpp + CLASS_2_179B705E4118563C__CTOR_OFFSET))(this, a1);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_179B705E4118563C_METHOD_2_128774387667156B_OFFSET))(this);
	}

	::System::String* Method_2_96548BB5E28CF746(::Class_1_2670985A37556FEA* a1, ::Class_1_2350AF62BA84EDFD* a2)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_2670985A37556FEA*, ::Class_1_2350AF62BA84EDFD*))((::PBYTE)hIl2Cpp + CLASS_2_179B705E4118563C_METHOD_2_96548BB5E28CF746_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_D3E66E10FB99D50B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_179B705E4118563C_METHOD_2_D3E66E10FB99D50B_OFFSET))(this);
	}

	::System::String* Method_2_D86D853739B9805D()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_179B705E4118563C_METHOD_2_D86D853739B9805D_OFFSET))(this);
	}

	::System::String* Method_2_005458828D30005B(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_179B705E4118563C_METHOD_2_005458828D30005B_OFFSET))(this, a1);
	}

	::System::String* Method_2_E02F17D84BCCD5D5(::RPG::GameCore::ModifyCalcOpType a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::ModifyCalcOpType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_179B705E4118563C_METHOD_2_E02F17D84BCCD5D5_OFFSET))(this, a1, a2);
	}
};
