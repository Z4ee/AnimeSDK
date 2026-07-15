#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8303B8E58A593199.h"

class Class_1_DED4BA2FC834659B;
class Class_1_F9FBCC956DFCF137_21;
namespace RPG::GameCore { class HipplenIncidentCommitConfig; }

#define CLASS_2_FE196BB896073BCD_METHOD_2_1815072AC4F29126_OFFSET UNITYSDK_OFFSET(0x16A1E820)
#define CLASS_2_FE196BB896073BCD_METHOD_2_2943CB55423DBA35_OFFSET UNITYSDK_OFFSET(0x16A1EBB0)
#define CLASS_2_FE196BB896073BCD_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x16A1E9C0)
#define CLASS_2_FE196BB896073BCD__CTOR_OFFSET UNITYSDK_OFFSET(0x16A1E930)

inline static constexpr unsigned int Class_2_FE196BB896073BCD_TypeDefinitionIndex = 71937;

class Class_2_FE196BB896073BCD : public ::Class_1_8303B8E58A593199
{
public:
	::RPG::GameCore::HipplenIncidentCommitConfig* Field_2_0; // 0x30
	::System::Boolean Field_2_1; // 0x38

	::System::Void _ctor(::RPG::GameCore::HipplenIncidentCommitConfig* a1, ::Class_1_DED4BA2FC834659B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HipplenIncidentCommitConfig*, ::Class_1_DED4BA2FC834659B*))((::PBYTE)hIl2Cpp + CLASS_2_FE196BB896073BCD__CTOR_OFFSET))(this, a1, a2);
	}

	static ::Class_2_FE196BB896073BCD* Method_2_1815072AC4F29126(::RPG::GameCore::HipplenIncidentCommitConfig* a1, ::Class_1_DED4BA2FC834659B* a2)
	{
		return ((::Class_2_FE196BB896073BCD*(*)(::RPG::GameCore::HipplenIncidentCommitConfig*, ::Class_1_DED4BA2FC834659B*))((::PBYTE)hIl2Cpp + CLASS_2_FE196BB896073BCD_METHOD_2_1815072AC4F29126_OFFSET))(a1, a2);
	}

	::System::Void Method_2_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE196BB896073BCD_METHOD_2_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_2_2943CB55423DBA35(::Class_1_F9FBCC956DFCF137_21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_21*))((::PBYTE)hIl2Cpp + CLASS_2_FE196BB896073BCD_METHOD_2_2943CB55423DBA35_OFFSET))(this, a1);
	}
};
